//Задача 20
//Напиши програма каде преку тастатура ќе биде внесен еден број од 1-10 (овој број
//ќе треба да биде погоден).
//Програмата треба да овозможи внесување на броеви се додека не е внесен бројот
//кој треба да биде погоден и треба да отпечати после колку внесени броени е
//направен погодок.
//Input: 5 2 4 8 9 0 0 4 6 5
//Оutput: Napraven e pogodok posle 8 obidi

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter expected number: ";
    cin>>number;
    int counter=1;
    int newNumber;
    cin>>newNumber;
    while(newNumber!=number){
        cout<<"Shoot: ";
        cin>>newNumber;
        counter++;
    }
    cout<<"The goal was scored after "<<counter<<" attempts.";
    return 0;
}
