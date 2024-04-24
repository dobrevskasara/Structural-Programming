//Задача 26 - if
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
    if(month==12 || month==1 || month==2){
        cout<<"Winter.";
    }
    else if(month==3 || month==4 || month==5){
        cout<<"Spring.";
    }
    else if(month==6 || month==7 || month==8){
        cout<<"Summer.";
    }
    else if(month==9 || month==10 || month==11){
        cout<<"Autumn.";
    }
    else {
        cout<<"Not valid number.";
    }
    return 0;
}
