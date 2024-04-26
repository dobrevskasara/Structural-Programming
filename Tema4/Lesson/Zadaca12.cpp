//Задача 12
//Напиши програма која за внесен број ќе провери дали бројот е прост.
//Резултатот да се отпечати.
//Дефиниција: Прост број е број кој што е делив со 1 и сам со себе.

#include <iostream>
using namespace std;
int main(){
    int number;
    int counter=0;
    cin>>number;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            counter++;
        }
    }
    if(counter>2){
        cout<<"Number is not simple!";
    }
    else{
        cout<<"Number is simple!";
    }
    return 0;
}
