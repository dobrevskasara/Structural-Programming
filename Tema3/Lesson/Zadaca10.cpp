//Задача 10
//Напишете програма каде што за внесен број ќе се провери дали бројот е парен или
//делив со 5

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    if(number%2==0 || number%5==0){
        cout<<"Number is even or divisible with 5."<<endl;
    }
    else{
        cout<<"Condition is false!";
    }
    return 0;
}
