//Задача 21
//Напиши програма каде ќе внесуваш броеви преку тастатура се додека не внесеш
//негативен број. Изброј колку од внесените броеви се наоѓаат во интервал [10-30].
//Отпечати го резултатот.

#include <iostream>
using namespace std;
int main(){
    int number, counter=0;
    cout<<"Enter number: ";
    cin>>number;
    while(number>0){
        if(number>=10 && number<=30){
            counter++;
        }
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"Number of numbers in interval [10,30] is: "<<counter;
    return 0;
}
