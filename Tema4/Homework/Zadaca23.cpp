//Задача 23
//Напиши програма каде ќе внесуваш броеви се додека не го внесеш бројот 55 и
//определи го најголемиот внесен број. Отпечати го резултатот.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int maxNumber=number;
    while(number!=55){
        if(number>maxNumber){
            maxNumber=number;
        }
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"Max number is: "<<maxNumber;
}
