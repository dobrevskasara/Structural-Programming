//Задача 14
//Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се отпечати на екран најмалиот од броевите - “MIN: __”.

#include <iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cout<<"Enter tree number: "<<endl;
    cin>>number1>>number2>>number3;
    int minNum;
    if(number1<number2 && number1<number3){
        minNum=number1;
    }
    else if(number2<number1 && number2<number3){
        minNum=number2;
    }
    else{
        minNum=number3;
    }
    cout<<"Minimum: "<<minNum;
    return 0;
}
