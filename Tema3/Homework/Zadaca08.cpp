//Задача 8
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако двата броеви се позитивни да се пресмета квадрат од нивната сума, во
//спротивно да се пресмета сума од нивните квадрати.
//Резултатот да се отпечати на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number1, number2;
    int sum;
    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;

    if(number1>0 && number2>0){
        cout<<"Two numbers are positive!"<<endl;
        sum=number1+number2;
        cout<<pow(sum,2);
    }
    else{
        cout<<"The condition is false!"<<endl;
        sum= pow(number1,2)+ pow(number2,2);
        cout<<sum;
    }
    return 0;
}
