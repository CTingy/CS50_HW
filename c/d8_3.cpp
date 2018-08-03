#include <iostream>
void swap(int a, int b);
void swap(int* pa, int* pb);
void swap_ref(int &a, int &b);
int main(){
	int i = 1, j = 2;
	swap(i, j);
	std::cout << "i=" << i << ", j=" << j << std::endl;
	swap(&i, &j);
	std::cout << "i=" << i << ", j=" << j << std::endl;
	swap_ref(i, j);
	std::cout << "i=" << i << ", j=" << j << std::endl;
	return 0;
}
