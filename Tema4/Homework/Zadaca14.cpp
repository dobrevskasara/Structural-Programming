//Задача 14
//Напиши програма каде за внесен број ќе се проверува дали сумата на цифрите е
//делива со бројот на цифри. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number;
    int counter=0, sum=0;
    cout<<"Enter number: ";
    cin>>number;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        sum+=digit;
        counter++;
        newNumber=newNumber/10;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    cout<<"Number of digits is: "<<counter<<endl;

    if(sum%counter==0){
        cout<<"Sum of digits is divisible with number of digits.";
    }
    else{
        cout<<"Sum of digits is not divisible with number of digits.";
    }
    return 0;
}
