//Задача 9
//Напиши програма која ќе ги брои цифрите на даден број користејќи рекурзивна
//функција.

#include <iostream>
using namespace std;

int NumDigits(int number){
    int newNumber=number/10;
    if(newNumber==0){
        return 1;
    }
    return 1 + NumDigits(newNumber);
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"Number of digits is: "<<NumDigits(number);
    return 0;
}
