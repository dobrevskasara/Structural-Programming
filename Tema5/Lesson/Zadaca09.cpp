//Задача 9
//Напиши програма која ќе најде степен за даден број. Резултатот треба да се
//отпечати. ** Решението треба да биде со помош на рекурзија
//Пр. Бројот 5 на 4-рт степен - 5 * 5 * 5 * 5

#include <iostream>
using namespace std;

int PowFunction(int number, int exponent){
    if(exponent==0){
        return 1;
    }
    return number * PowFunction(number,exponent-1);
}

int main(){
    int number, exponent;
    cin>>number>>exponent;
    int pow= PowFunction(number,exponent);
    cout<<pow;
    return 0;
}
