//Задача 5
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 3 и завршува со цифрата 5.
//Соодветно да се отпечати “Brojot __ e deliv so 3 i zavrsuva so 5” или “Brojot __ ne go
//ispolnuva uslovot da e deliv so 3 i da zavrsuva so 5”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;

    if(number%3==0 && number%10==5){
        cout<<"The number "<<number<<" is divisible with 3 and ends with 5.";
    }
    else{
        cout<<"The number "<<number<<" is not divisible with 3 or doesn't end with 5.";
    }
    return 0;
}
