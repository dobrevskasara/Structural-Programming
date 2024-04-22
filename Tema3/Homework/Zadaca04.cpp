//Задача 4
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот завршува со 25.
//Соодветно да се отпечати “Brojot __ zavrsuva so 25” или “Brojot __ ne zavrsuva so
//25”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int tensdigit=number%100/10;
    int onesdigit=number%10;

    if(tensdigit==2 && onesdigit==5){
        cout<<"Number "<<number<<" ends with 25.";
    }
    else{
        cout<<"Number "<<number<<" doesn't end with 25.";
    }

    return 0;
}
