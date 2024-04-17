//Задача 14
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a, b).
//Пронајди го резултатот (y) и отпечати го на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float numberA, numberB, resultY;
    cout<<"Enter two numbers: "<<endl;
    cin>>numberA>>numberB;
    resultY=(pow(numberA,3)/5)+(5*pow(numberA,2)/numberB)-((12*numberB)/ pow(numberA,4))+2.1;
    cout<<"The result is: "<<resultY;
    return 0;
}
