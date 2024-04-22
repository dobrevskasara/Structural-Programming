//Задача 9
//Напишете програма која ќе претставува калкулатор и за внесен аритметчки
//оператор ќе враќа резултат.

#include <iostream>
using namespace std;
int main(){
    int number1, number2;
    float result;
    char arithmeticOperator;
    cout<<"Enter first number: "<<endl;
    cin>>number1;
    cout<<"Enter arithmetic operator: "<<endl;
    cin>>arithmeticOperator;
    cout<<"Enter second number: "<<endl;
    cin>>number2;

    switch(arithmeticOperator){
        case '+':
            result=number1+number2;
            break;
        case '-':
            result=number1-number2;
            break;
        case '*':
            result=number1*number2;
            break;
        case '/':
            result=(float)number1/number2;
            break;
        default:
            cout<<"Not valid operator!";
    }
    cout<<"The task is: "<<number1<<arithmeticOperator<<number2<<"="<<result;
    return 0;
}
