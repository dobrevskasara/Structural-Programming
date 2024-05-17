//Задача 10
//Напиши програма која ќе ја наоѓа сумата на цифрите на даден број користејќи
//рекурзија.

#include <iostream>
using namespace std;

int SumDigits(int number){
    int digit=number%10;
    int newNumber=number/10;
    if(newNumber==0){
        return digit;
    }
    return digit + SumDigits(newNumber);
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"Sum of digits is: "<<SumDigits(number);
    return 0;
}
