//Задача 13
// Напишете програма каде што за внесен број ќе се провери дали бројот е делив со
//7, ако е делив со 7 да се пресмета неговиот квадрат, ако не е делив да се пресмета
//неговиот корен.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;

    if(number%7==0){
        cout<<"The pow of number is: "<<pow(number,2);
    }
    else{
        cout<<"The sqrt of number is: "<<sqrt(number);
    }
    return 0;
}
