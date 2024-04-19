//Задача 6
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (а).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    float area;
    area=(sqrt(3)/(float)4)*pow(number,2);
    cout<<"The Area with side: "<<number<<" is "<<area;
    return 0;
}
