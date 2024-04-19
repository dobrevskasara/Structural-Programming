//Задача 8
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a, b, h). Пронајди ја плоштината (A) според наведената формула и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int sideA, sideB, height;
    float area;
    cout<<"Enter side a, b and height: "<<endl;
    cin>>sideA>>sideB>>height;
    area=(sideA+sideB)/2.0*height;
    cout<<"The Area is: "<<area;
    return 0;
}
