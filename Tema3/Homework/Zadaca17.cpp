//Задача 17
//Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се определи разликата помеѓу најголемиот и најмалиот број и да се отпечати на
//екран резултатот.

#include <iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cout<<"Enter tree numbers: "<<endl;
    cin>>number1>>number2>>number3;
    int minNum, maxNum;
    if(number1>number2 && number1>number3){
        maxNum=number1;
    }
    else if(number2>number1 && number2>number3){
        maxNum=number2;
    }
    else{
        maxNum=number3;
    }

    if(number1<number2 && number1<number3){
        minNum=number1;
    }
    else if(number2<number1 && number2<number3){
        minNum=number2;
    }
    else{
        minNum=number3;
    }

    cout<<"MAX: "<<maxNum<<endl;
    cout<<"MIN: "<<minNum<<endl;
    cout<<"Difference: "<<maxNum<<"-"<<minNum<<"="<<maxNum-minNum;
    return 0;
}
