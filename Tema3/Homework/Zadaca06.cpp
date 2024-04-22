//Задача 6
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 6 или завршува со цифрата 4.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    
    if(number%6==0 || number%10==4){
        cout<<"The number is divisible with six or ends with four."<<endl;
    }
    else{
        cout<<"The number is not divisible with six or doesn't end with four.";
    }
    return 0;
}
