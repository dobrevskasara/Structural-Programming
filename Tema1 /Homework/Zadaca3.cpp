//Задача 3
//Напиши програма каде што преку тастатура ќе може да се внеси цел број. 
//Провери дали бројот е непарен и е делив со 17. Резултатот отпечати го на екран.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    bool condition = (num % 2 != 0) && (num % 17 ==0);
    cout<<"Result for is number odd and divisible with 17 is: "<<condition;
    return 0;
}
