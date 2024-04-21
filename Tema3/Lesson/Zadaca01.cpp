//Задача 1
//Напиши програма каде што преку тастатура ќе се чита цел број number.
//● Дефинирај блок од изрази и во него дефинирај променлива isEven во која ќе
//биде запишано дали number е парен број.
//● Надвор од дефинираниот блок отпечати ја променливата isEven
//Што се случува во програмата?

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    {
        bool isEven = number%2 ==0;
        if (isEven) {
            cout << "Number is even!";
        }
    }
    return 0;
}
