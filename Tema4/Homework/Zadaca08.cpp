//Задача 8
//Напиши програма каде за внесен број преку тастатура ќе се пресмета сумата од
//сите парни цифри. (Бројот може да има к број на цифри).
//Да се испечати резултатот.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    int sum=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit%2==0){
            sum+=digit;
        }
        newNumber=newNumber/10;
    }
    cout<<"The sum of even digits is: "<<sum;
    return 0;
}
