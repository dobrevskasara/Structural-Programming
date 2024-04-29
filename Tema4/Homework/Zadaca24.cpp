//Задача 24
//Напиши програма каде ќе внесуваш броеви се додека не го внесеш бројот 23.
//Определи го најмалиот внесен број и отпечати го резултатот.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int minNumber=number;
    while(number!=23){
        if(number<minNumber){
            minNumber=number;
        }
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"Min number is: "<<minNumber;
    return 0;
}
