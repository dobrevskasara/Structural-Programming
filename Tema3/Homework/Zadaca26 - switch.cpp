//Задача 26 - switch
// Напишете програма каде што ќе може да се внесе број од 1 до 12 кој ќе
//претставува месец од годината. За внесениот месец треба да се отпечати
//соодветното годишно време.
//Пр. За внесен број 3, треба да се отпечати “SPRING”
//За внесен број 12, треба да се отпечати “WINTER”
//** Зима е за месеците декември, јануари, фебруари
//** Пролет е за месеците март, април, мај
//** Лето е за месеците јуни, јули, август
//** Есен е за месеците септември, октомври, ноември

#include <iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter month: ";
    cin>>month;
    switch (month) {
        case 12:
        case 1:
        case 2:
            cout<<"Winter.";
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Spring.";
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Summer.";
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Autumn";
            break;
        default:
            cout<<"Not valid number.";
    }
    return 0;
}
