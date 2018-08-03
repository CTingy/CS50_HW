#include <iostream>

int main()
{
    int i, people;
    int* score;
    float sum = 0;
    std::cout<<"Please enter the number of students: ";
    std::cin>>people;
    score = new int[people];
    for(i=0; i<people; i++){
        std::cout<<"Please enter no."<<i+1<<"'s score: ";
        std::cin >> score[i];
        sum += score[i];
    }
    std::cout<<"Average: "<<sum/people<<std::endl;
    delete[]score;
    return 0;
}