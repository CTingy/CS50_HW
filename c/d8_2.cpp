#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float f = 2.33333;
    cout << "Hello C++" << endl;
    std::cout << std::fixed << std::setprecision(2) << std::setw(6) << f << std::endl;
    std::cin >> f;
    cout<< f << std::endl;
    return 0;
}