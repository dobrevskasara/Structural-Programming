//Задача 17
//Напиши програма каде за внесен број ќе се најде максималната и минималната
//цифра. (Бројот може да има к цифри). Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number, minDigit=9, maxDigit=0;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit<minDigit){
            minDigit=digit;
        }
        if(digit>maxDigit){
            maxDigit=digit;
        }
        newNumber=newNumber/10;
    }
    cout<<"Min digit is: "<<minDigit<<endl;
    cout<<"Max digit is: "<<maxDigit<<endl;
    return 0;
}
