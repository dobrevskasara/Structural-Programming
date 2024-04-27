//Задача 3
//Напиши програма каде што во ранг од [100, 500] ќе се избројат колку елементи
//завршуваат на 5, и колку елементи завршуваат на 6 и од кој елемент има повеќе.
//Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int elementsEndsWith5=0, elementsEndsWith6=0;
    for(int i=100;i<=500;i++){
        int digit=i%10;
        if(digit==5){
            elementsEndsWith5++;
        }
        if(digit==6){
            elementsEndsWith6++;
        }
    }
    cout<<"There are "<<elementsEndsWith5<<" numbers ending with 5."<<endl;
    cout<<"There are "<<elementsEndsWith6<<" numbers ending with 6."<<endl;
    if(elementsEndsWith5>elementsEndsWith6){
        cout<<"There are more elements ending with 5.";
    }
    else if(elementsEndsWith6>elementsEndsWith5){
        cout<<"There are more elements ending with 6.";
    }
    else{
        cout<<"Equal numbers ending with 5 and 6.";
    }
    return 0;
}
