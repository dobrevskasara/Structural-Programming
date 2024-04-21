//Задача 2
// Напиши програма каде преку тастатура може да се внеси цел број.
//a. Доколку е внесен број делив со 38, отпечати “The number is divisible with 38”,
//во спротивно да не се печати ништо.
//b. Доколку е внесен број делив со 38, отпечати “The number is divisible with 38”,
//во спротивно да се отпечати “The number is not divisible with 38“.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    if(number%38==0){
        cout<<"The number is divisible with 38!"<<endl;
    }
    else{
        cout<<"The number is not divisible with 38";
    }
    return 0;
}
