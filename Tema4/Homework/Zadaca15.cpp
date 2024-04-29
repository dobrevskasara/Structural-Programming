//Задача 15
//Напиши програма каде за внесен број ќе се провери дали бројот е делив со
//најголемата цифра која ја содржи. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number;
    int sum=0;
    int maxDigit=0;
    cout<<"Enter number: ";
    cin>>number;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit>maxDigit){
            maxDigit=digit;
        }
        newNumber=newNumber/10;
    }
    cout<<"Max digit is: "<<maxDigit<<endl;

    if(number%maxDigit==0){
        cout<<"Number is divisible with max digit.";
    }
    else{
        cout<<"Number is not divisible with max digit.";
    }
    return 0;
}
