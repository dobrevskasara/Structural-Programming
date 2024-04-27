//Задача 12
//Напиши програма каде ќе се внеси број преку тастатура.
//Најди го следниот резултат:
//((збир на парни цифри) + (производ на непарни цифри))/вкупен број на цифри
//Input: 45986
//((4 + 8 + 6)+(5 * 9))/5
//Output: 12.6

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    int sumEvenDigits=0;
    int productOddDigits=1;
    int counterDigits=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit%2==0){
            sumEvenDigits+=digit;
        }
        else{
            productOddDigits=productOddDigits*digit;
        }
        counterDigits++;
        newNumber=newNumber/10;
    }
    float result=(sumEvenDigits+productOddDigits)*1.0/counterDigits;
    cout<<"The result is: "<<result;
    return 0;
}
