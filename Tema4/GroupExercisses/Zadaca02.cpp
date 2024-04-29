//Задача 2
//Од тастатура се внесува четирицифрен број N што во себе содржи барем 2 цифри со
//вредност 5.Колега на тој број е бројот кој на позициите на кои има 5-ки во првиот број ќе
//има 6-ка во бројот колега (Пр. колега на 5551 е 6661).
//На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број.
//Да се има во предвид дека некогаш може да биде поголем бројот n, а некогаш неговиот колега.
//Доколку бројот n не содржи најмалку 2 цифри со вредност 5, да се испечати дека е внесен грешен број.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int countFives=0, collegueNumber=0, multiplier=1;
    float percentage=0;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit==5){
            digit=6;
            countFives++;
        }
        collegueNumber=digit*multiplier+collegueNumber;
        multiplier=multiplier*10;
        newNumber=newNumber/10;
    }
    if(countFives < 2){
        cout<<"Wrong!"<<endl;
    }
    else{
        if(collegueNumber>number){
            percentage =((collegueNumber - number)*1.0/number) * 100;
        }
        else{
            percentage =((number - collegueNumber)*1.0/collegueNumber) * 100;
        }
        cout<<"Colleague number is: "<<collegueNumber<<endl;
        cout<<"Percentage is: "<<percentage<<endl;
    }
    return 0;
}
