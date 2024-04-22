//Задача 1
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот се наоѓа во интервал од 30 до 50 и
//соодветно треба да се отпечати “Brojot __ pripaga na intervalot [30, 50]”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;

    if(number>=30 && number<=50){
        cout<<"Number "<<number<<" belonges in interval [30, 50].";
        }
    return 0;
}
