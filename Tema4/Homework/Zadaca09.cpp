//Задача 9
//Напиши програма каде за внесен број преку тастатура ќе се пресмета производ на
//сите цифри кои се наоѓаат во интервалот [4-7]. (Бројот може да има к број на
//цифри). Да се испечати резултатот.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    float product=1;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit>=4 && digit<=7){
            product=product*digit;
        }
        newNumber=newNumber/10;
    }
    cout<<"The product of digits between 4 and 7 is: "<<product;
    return 0;
}
