//Задача 13
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (b, h).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.

#include <iostream>
using namespace std;
int main(){
    int sideB, height;
    cout<<"Enter side and height: "<<endl;
    cin>>sideB>>height;
    float area;
    area=(sideB*height)/2.0;
    cout<<"The area is: "<<area;
    return 0;
}
