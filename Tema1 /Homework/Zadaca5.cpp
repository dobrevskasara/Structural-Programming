//Задача 5
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(l,w,h), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int b, h, l;
    cout<<"Enter base, height and leight: "<<endl;
    cin>>b>>h>>l;
    int V;
    V=b*h*l;
    cout<<"The Volume is: "<<V;
    return 0;
}
