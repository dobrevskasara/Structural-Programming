//Задача 2
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 61 и соодветно да отпечати
//“Brojot __ e deliv so 61” или “Brojot __ ne e deliv so 61”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;

    if(number%61==0){
        cout<<"Number "<<number<<" is divisible with 61.";
    }
    else{
        cout<<"Number "<<number<<" is not divisible with 61.";
    }
    return 0;
}
