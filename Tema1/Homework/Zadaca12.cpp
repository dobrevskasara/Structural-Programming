//Задача 12
//Напиши програма каде што преку тастатура ќе може да се внесе еден број (s).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
//екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int side;
    cout<<"Enter side: "<<endl;
    cin>>side;
    float volume;
    volume= pow(side,3);
    cout<<"The volume with side: "<<side<<" is: "<<volume;
    return 0;
}
