//Задача 1
//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го збирот на броевите и провери дали збирот е парен број. Резултатот
//отпечати го на екран.
//** Парен број е број кој при делење со 2 нема остаток.

#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    int sum;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    sum=num1+num2;
    bool IsEven = sum % 2 == 0;
    cout<<"Is number even: "<<IsEven;
    return 0;
}

