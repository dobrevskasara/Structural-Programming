//Задача 10
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (r, h).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
//екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float radius, height, volume, pi=3.14;
    cout<<"Enter radius and height: "<<endl;
    cin>>radius>>height;
    volume=pi* pow(radius,2)*height;
    cout<<"The volume with radius: "<<radius<<" and height: "<<height<<" is: "<<volume;
    return 0;
}
