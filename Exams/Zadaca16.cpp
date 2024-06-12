//Задача 16
//Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
//За секој од нив да се испечати максималната цифра во посебен ред.
//Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
//Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

#include <iostream>
using namespace std;

int maxDigit(int number, int max){
    if(number==0){
        return max;
    }
    int digit=number%10;
    int newMax;
    if(digit>max){
        newMax=digit;
    }
    else{
        newMax=max;
    }
    return maxDigit(number/10,newMax);
}

int main(){
    int number;
    while(cin>>number){
        int maxN = maxDigit(number,0);
        cout<<maxN<<endl;
    }
    return 0;
}
