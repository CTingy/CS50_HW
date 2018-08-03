#include <iostream>

int main()
{
    int i, j;
    int people, subject;
    int** score;
    float sum;
    std::cout<<"Please enter the number of students: ";
    std::cin>>people;
    std::cout<<"Please enter the number of subjects: ";
    std::cin>>subject;
    score = new int*[people];
    for(i=0; i<people; i++){
        sum = 0;
        score[i]=new int[subject];
        std::cout<<"Please enter student no."<<i+1<<"'s score: "<<std::endl;
        for(j=0; j<subject; ++i){
            std::cout<<"Please enter subject no."<<j+1<<"'s score: ";
            std::cin>>score[i][j];
            sum += score[i][j];
        }
        std::cout<<"no."<<i+1<<"Average score: "<<sum/subject<<std::endl;
    }
    for(i=0; i<people; i++)
        delete[]score[i];
    delete[]score;
    return 0;
}