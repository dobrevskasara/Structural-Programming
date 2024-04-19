//Задача 2
//Направи програма каде што преку тастатура ќе се внесат два цели броеви и ќе се
//пронајде нивниот количник. Отпечати го резултатот.

#include <iostream>
using namespace std;
int main(){
    int number1, number2;
    float result;
    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;
    result=(float)number1/number2;
    cout<<"The result is: "<<result;
    return 0;
}
