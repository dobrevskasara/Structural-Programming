//Задача 3
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот завршува со цифрата 9.
//Соодветно да се отпечати “Brojot __ zavrsuva so 9” или “Brojot __ ne zavrsuva so 9”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;

    if(onesdigit==9){
        cout<<"Last digit of "<<number<<" is 9.";
    }
    else{
        cout<<"Last digit of "<<number<<" is not 9.";
    }
    return 0;
}
