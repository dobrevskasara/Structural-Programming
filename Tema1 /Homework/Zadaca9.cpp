//Задача 9
//Напиши програма каде што преку тастатура ќе може да се внеси еден бројј (r).
//Пронајди ја плоштината (C) според наведената формула и отпечати го резултатот
//на екран.

#include <iostream>
using namespace std;
int main(){
    float radius, circle;
    float pi=3.14;
    cout<<"Enter value for radius: "<<endl;
    cin>>radius;
    circle=2*pi*radius;
    cout<<"The value for cirle is: "<<circle;
    return 0;
}
