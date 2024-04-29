//Задача 18
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш негативен
//број. Изброи колку од внесените броеви се парни, најди го минималниот внесен
//број и пресметај производ на сите внесени броеви. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int product=1, counter=0;
    int minNumb=number;
    while(number>0){
        if(number<minNumb){
            minNumb=number;
        }
        if(number%2==0){
            counter++;
        }
        product=product*number;
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"Even numbers: "<<counter<<endl;
    cout<<"Min number: "<<minNumb<<endl;
    cout<<"Product of numbers: "<<product;
    return 0;
}
