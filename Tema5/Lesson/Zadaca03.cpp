//Задача 3
//Да се напише програма која што ќе ги отпечати сите четирицифрени природни
//броеви кои се деливи со збирот на двата броеви(првиот број се првите две цифри,
//вториот број се третата и четвртата цифра) кои ги формира четирицифрениот број.
//Пр. Бројот 4598 → broj1 - 45, broj2 - 98
//Да се отпечатат броевите и на крај да се отпечати колку вакви броеви се пронајдени.

#include <iostream>
using namespace std;

int Sum(int number){
    int firstNum=number/100;
    int secondNum=number%100;
    return firstNum+secondNum;
}

int main(){
    int counter=0;
    for(int i=1000;i<=9999;i++){
        //int sum = Sum(i);
        if(i % Sum(i) == 0){
            cout<<i<<endl;
            counter++;
        }
    }
    cout<<"Counter is: "<<counter;
    return 0;
}
