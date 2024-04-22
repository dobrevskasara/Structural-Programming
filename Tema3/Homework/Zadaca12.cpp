//Задача 12
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Да се отпечати на екран помалиот од броевите - “Brojot __ e pomal od brojot __”.

#include <iostream>
using namespace std;
int main(){
    int number1, number2;
    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;

    if(number1<number2){
        cout<<"Number "<<number1<<" is smaller than "<<number2<<"."<<endl;
    }
    else{
        cout<<"Number "<<number2<<" is smaller than "<<number1<<"."<<endl;
    }

    return 0;
}
