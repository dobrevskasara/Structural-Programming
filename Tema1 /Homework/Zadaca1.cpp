//Задача 1
//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го збирот на броевите и провери дали збирот е парен број. Резултатот
//отпечати го на екран.
//** Парен број е број кој при делење со 2 нема остаток.

#include <iostream>
using namespace std;
int main(){
    int a, b;
    int sum;
    cout<<"Vnesi dva celi broevi: "<<endl;
    cin>>a>>b;
    sum=a+b;
    bool IsEven = sum % 2 == 0;
    cout<<"Rezultatot za dali brojot e paren e: "<<IsEven;
    return 0;
}
