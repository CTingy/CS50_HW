#include <iostream>

int Series(int start, int end, int diff = 1);
int main()
{
    std::cout<<"sum= "<<Series(1,10,2)<<std::endl;
    return 0;
}

int Series(int start, int end, int diff){
    int i, sum=0;
    for(i=start; i<=end; i+=diff){
        sum+=i;
    }
    return sum;
}