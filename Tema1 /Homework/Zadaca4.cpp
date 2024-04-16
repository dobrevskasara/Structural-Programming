//Задача 4
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(b,h,l), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int b, h, l;
    cout<<"Enter three numbers: "<<endl;
    cin>>b>>h>>l;
    float V;
    V=(float)b*h*l/2;
    cout<<"The Volume is: "<<V;
    return 0;
}
