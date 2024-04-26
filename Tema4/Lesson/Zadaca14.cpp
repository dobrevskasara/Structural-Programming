//Задача 14
//Напиши програма каде за внесен број преку тастатура ќе се провери дали
//внесениот број е делив со сумата од неговите цифри.
//(Бројот може да содржи к цифри). Да се испечати резултатот.

#include <iostream>
using namespace std;
int main(){
    int number, sum=0;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    while(newNumber!=0){
        cout<<newNumber<<" -> "<<newNumber%10<<endl;
        sum+=newNumber%10;
        newNumber=newNumber/10;
    }

    if(number%sum==0){
        cout<<"Number is divisible with sum of digits.";
    }
    else{
        cout<<"Number is not divisible with sum of digits.";
    }
    return 0;
}
