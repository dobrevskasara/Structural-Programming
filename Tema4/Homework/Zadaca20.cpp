//Задача 20
//Напиши програма каде што ќе можеш да внесуваш броеви се додека да го внесеш
//бројот 25. Пресметај производ од сите внесени броеви деливи со 3 и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int number, product=1;
    cout<<"Enter number: ";
    cin>>number;
    while(number!=25){
        if(number%3==0){
            product=product*number;
        }
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"The product of numbers divisible with 3 is: "<<product;
}
