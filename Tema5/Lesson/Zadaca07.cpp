//Задача 7
//Напиши програма која ќе најде факториел за даден број и отпечати го резултатот.
//** Решението треба да биде со помош на рекурзија
//Пр. Факториел за бројот 5 = 5 * 4 * 3 * 2 *1

#include <iostream>
using namespace std;

int Factoriel(int number){
    if (number==1){
        return 1;
    }
    return number* Factoriel(number-1);
}

int main(){
    int n;
    cin>>n;
    int factoriel = Factoriel(n);
    cout<<factoriel;
    return 0;
}
