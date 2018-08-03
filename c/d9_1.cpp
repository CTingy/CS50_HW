#include <iostream>
#include <fstream>
#include <string>
int main() {
//	system("chcp 65001");
	const int bufferSize = 64;
	unsigned char buffer[bufferSize];
	std::string bufferString;
	std::ifstream inputFile;
	std::ofstream outputFile;
	inputFile.open("./UTF8News.txt", std::ios::binary);
	if (!inputFile.is_open()) {
		std::cout << "開啟檔案失敗!" << std::endl;
		return 0;
	}
	inputFile.seekg(0, std::ifstream::end);
	int fileSize = (int)inputFile.tellg();
	inputFile.seekg(0);
	int size = 0;
	while (!inputFile.eof()) {
		inputFile.read((char*)buffer, bufferSize);
		bufferString = (char*)buffer;
		if (size + 64 <= inputFile.tellg()) {
			bufferString.erase(64, bufferString.length() - 64);
			size += 64;
		} else
			bufferString.erase(fileSize - size, bufferString.length() - (fileSize - size));
		std::cout << bufferString << std::endl;
	}
	inputFile.close();
	return 0;
}
