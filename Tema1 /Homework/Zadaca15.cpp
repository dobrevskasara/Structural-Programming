//Задача 15
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (x).
//Пронајди го резултатот (y) и отпечати го на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double numX, resultY;
    cout<<"Enter value for x: "<<endl;
    cin>>numX;
    resultY=(11* pow(numX,3)/5)+(12* pow(numX,7))-3.5;
    cout<<"The result is: "<<resultY;
    return 0;
}
