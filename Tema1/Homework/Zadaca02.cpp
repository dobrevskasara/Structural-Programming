//Задача 2
//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го нивниот производ и провери дали нивниот производ е делив со бројот
//7 или со бројот 13. Резултатот отпечати го на екран.

#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    int product;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    product=num1*num2;
    bool IsDivisibleWith7or13 = (product % 7 == 0) || (product % 13 == 0);
    cout<<"Result is: "<<IsDivisibleWith7or13;
    return 0;
}
