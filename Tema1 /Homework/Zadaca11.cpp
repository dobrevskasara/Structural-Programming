//Задача 11
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (r).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
//екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float radius, volume, pi=3.14;
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    volume=((float)4/3)*pi*pow(radius,3);
    cout<<"The volume is: "<<volume;
    return 0;
}
