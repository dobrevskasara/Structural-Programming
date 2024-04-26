//Задача 13
// Напиши програма која за внесен број ќе првери дали бројот е совршен.
//Резултатот да се отпечати.
//Дефиниција: Совршен број е број чија сума од неговите делители (без самиот број)
//го дава истиот тој број.
//Пр. Бројот 6 е совршен број
//6:1 = 6
//6:2 = 3
//6:3 = 2
//1 + 2 + 3 = 6

#include <iostream>
using namespace std;
int main(){
    int number;
    int sumOfDivisors=0;
    cin>>number;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sumOfDivisors=sumOfDivisors+i;
        }
    }
    if(number==sumOfDivisors){
        cout<<"Number is perfect!";
    }
    else{
        cout<<"Number is not perfect!";
    }
    return 0;
}
