//Задача 9
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако двата броеви се се деливи со 3 да се пресмета корен од нивниот производ, во
//спротивно да се пресмета сума од нивните корени. Резултатот да се отпечати на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number1, number2;
    cout<<"Enter two number: "<<endl;
    cin>>number1>>number2;

    if(number1%3==0 && number2%3==0){
        cout<<"Both numbers are divisible with 3."<<endl;
        cout<<sqrt(number1*number2);
    }
    else{
        cout<<"The condition is false!"<<endl;
        cout<<sqrt(number1)+ sqrt(number2);
    }

    return 0;
}
