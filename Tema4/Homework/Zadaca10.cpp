//Задача 10
//Напиши програма каде за внесен број ќе се провери колку 8-ки има во бројот.
//(Бројот може да има к број на цифри). Да се испечати резултатот.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    int counter=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit==8){
            counter++;
        }
        newNumber=newNumber/10;
    }
    cout<<"There are "<<counter<<" digits 8.";
    return 0;
}
