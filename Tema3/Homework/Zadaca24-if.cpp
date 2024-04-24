//Задача 24 - if
//Да се напиши програма каде ќе биде внесен број преку тастатура (а е [0,5]) и
//бројот соодветно треба да се отпечати со букви.
//Пр. За внесен број 1, треба да се отпечати “EDEN”
//За внесен број 4, треба да се отпечати “CETIRI”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    if(number==0){
        cout<<"Zero.";
    }
    else if (number==1){
        cout<<"One.";
    }
    else if(number==2){
        cout<<"Two.";
    }
    else if(number==3){
        cout<<"Three.";
    }
    else if(number==4){
        cout<<"Four.";
    }
    else if(number==5){
        cout<<"Five.";
    }
    else{
        cout<<"Not valid.";
    }
    return 0;
}
