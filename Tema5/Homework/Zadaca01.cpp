//Задача 1
//Напиши функција која е потребно да провери дали даден број е прост (бројот е
//зададен како аргумент во функцијата). Функцијата треба да врати 0, доколку бројот
//не е прост и 1, доколку бројот е прост

#include <iostream>
using namespace std;

bool isPrime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<isPrime(number);
    return 0;
}
