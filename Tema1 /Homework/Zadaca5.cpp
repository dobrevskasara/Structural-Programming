//Задача 5
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(l,w,h), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int base, height, length;
    cout<<"Enter base, height and lenght: "<<endl;
    cin>>base>>height>>length;
    int Volume;
    Volume=base*height*length;
    cout<<"The Volume is: "<<Volume;
    return 0;
}
