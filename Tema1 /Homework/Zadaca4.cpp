//Задача 4
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(b,h,l), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int base, height, length;
    cout<<"Enter three numbers: "<<endl;
    cin>>base>>height>>length;
    float Volume;
    Volume=(float)base*height*length/2;
    cout<<"The Volume is: "<<Volume;
    return 0;
}
