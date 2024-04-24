//Задача 24 - switch
//Да се напиши програма каде ќе биде внесен број преку тастатура (а е [0,5]) и
//бројот соодветно треба да се отпечати со букви.
//Пр. За внесен број 1, треба да се отпечати “EDEN”
//За внесен број 4, треба да се отпечати “CETIRI”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    switch (number) {
        case 0:
            cout<<"Zero.";
            break;
        case 1:
            cout<<"One.";
            break;
        case 2:
            cout<<"Two.";
            break;
        case 3:
            cout<<"Three.";
            break;
        case 4:
            cout<<"Four.";
            break;
        case 5:
            cout<<"Five.";
            break;
        default:
            cout<<"Not valid.";
    }
    return 0;
}
