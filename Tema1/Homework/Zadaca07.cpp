//Задача 7
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (b, h).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.

#include <iostream>
using namespace std;
int main(){
    int base, height;
    cout<<"Enter base and height: "<<endl;
    cin>>base>>height;
    int area;
    area=base*height;
    cout<<"The Area with base: "<<base<<" and height: "<<height<<" is "<<area;
    return 0;
}
