//Задача 16
//Напиши програма каде ќе може да се внесат два броеви и да се провери дали
//најголемата цифра од првиот број е делива со најмалата цифра од вториот број.
//Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number1, number2;
    cout<<"Enter numbers: ";
    cin>>number1>>number2;
    int maxDigitFirst=0, minDigitSecond=9;
    int newNum1=number1;
    int newNum2=number2;
    while(newNum1!=0){
        int digit1=newNum1%10;
        if(digit1>maxDigitFirst){
            maxDigitFirst=digit1;
        }
        newNum1=newNum1/10;
    }
    while(newNum2!=0){
        int digit2=newNum2%10;
        if(digit2<minDigitSecond){
            minDigitSecond=digit2;
        }
        newNum2=newNum2/10;
    }
    cout<<"Max digit of first number is: "<<maxDigitFirst<<endl;
    cout<<"Min digit of second number is: "<<minDigitSecond<<endl;


    if(minDigitSecond==0){
        cout<<"The divison with zero is impossible.";
    }
    else if(maxDigitFirst%minDigitSecond==0){
        cout<<"Max digit of first number is divisible with min digit in second number.";
    }
    else{
        cout<<"Max digit of first number is not divisible with min digit in second number.";
    }
    return 0;
}
