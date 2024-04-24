//Задача 1 - switch
//Напиши програма каде што ќе биде внесен број во рангот [1,12] и отпечати го на
//екран бројот на денови за тој месец.
//Јануари - 31, Фебруари - 28, Март - 31, Април - 30, Мај - 31, Јуни - 30
//Јули - 31, Август - 31, Септември - 30, Октомври - 31, Ноември - 30, Декември - 31

#include <iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter month: ";
    cin>>month;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"The month has 31 days.";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"The month has 30 days.";
            break;
        case 2:
            cout<<"The month has 28 days.";
            break;
        default:
            cout<<"Not valid number for month.";
    }
    return 0;
}
