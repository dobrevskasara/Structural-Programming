//Задача 2
//Напиши програма каде за внесен број ќе се провери дали бројот е делив со
//најголемата цифра која ја содржи. Резултатот да се отпечати.
//а. Направи функција која ќе ја враќа најголемата цифра од даден број

#include <iostream>
using namespace std;

int MaximumDigit(int number){
    int maxDigit=0;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit>maxDigit){
            maxDigit=digit;
        }
        newNumber=newNumber/10;
    }
    return maxDigit;
}


int main(){
    int number;
    cin>>number;
    int maxDigit= MaximumDigit(number);
    cout<<"The number is: "<<number<<endl;
    cout<<"Max digit is: "<<maxDigit<<endl;
    if(number%maxDigit==0){
        cout<<"Number is divisible with max digit.";
    }
    else{
        cout<<"Number is not divisible with max digit.";
    }
    return 0;
}
