//Задача 13
//Напиши програма каде ќе се провери дали сумата од цифрите на внесениот број е
//делива со цифрата единици на бројот. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int newNumber=number;
    int newNum=number;
    int onesdigit=newNum%10;
    int sumOfDigits=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        sumOfDigits+=digit;
        newNumber=newNumber/10;
    }
    if(sumOfDigits%onesdigit==0){
        cout<<"Sum of digits is divisible with ones digit.";
    }
    else{
        cout<<"Sum of digits is not divisible with ones digit.";
    }
    return 0;
}
