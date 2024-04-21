//Задача 3
//Напишете програма која ќе проверува дали внесен број е позитивен, негативен или
//нула. Отпечатете го резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    if(number>0){
        cout<<"Number is positive!"<<endl;
    }
    else if(number<0){
        cout<<"Number is negative!"<<endl;
    }
    else{
        cout<<"Number is zero!";
    }
    return 0;
}
