//Задача 1 - if
//Напиши програма каде што ќе биде внесен број во рангот [1,12] и отпечати го на
//екран бројот на денови за тој месец.
//Јануари - 31, Фебруари - 28, Март - 31, Април - 30, Мај - 31, Јуни - 30
//Јули - 31, Август - 31, Септември - 30, Октомври - 31, Ноември - 30, Декември - 31

#include <iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter number: "<<endl;
    cin>>month;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        cout<<"The month has 31 days.";
    }
    else if(month==4 || month==6 || month==9 || month==11){
        cout<<"The month has 30 days.";
    }
    else if(month==2){
        cout<<"The month has 28 days.";
    }
    else{
        cout<<"Not valid number for month.";
    }
    return 0;
}
