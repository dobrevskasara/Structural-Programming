//Задача 7
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Ако бројот е парен да се пресмета неговиот квадрат, во спротивно да се пресмета
//неговиот куб. Резултатот да се отпечати на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;

    if(number%2==0){
        cout<<"The number is even."<<endl;
        cout<<pow(number,2);
    }
    else{
        cout<<"The number is odd."<<endl;
        cout<<pow(number,3);
    }
    return 0;
}
