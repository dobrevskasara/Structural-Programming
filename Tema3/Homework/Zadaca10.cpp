//Задача 10
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако првиот број е делив со 8 или вториот број завршува на 4 да се пресмета
//нивната сума, во спротивно да се пресмета сума од нивните корени.
//Резултатот да се отпечати на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number1, number2;
    cout<<"Enter numbers: "<<endl;
    cin>>number1>>number2;

    if(number1%8==0 || number2%10==4){
        cout<<"First number is divisible with 8 or second number ends with 4."<<endl;
        cout<<number1+number2;
    }
    else{
        cout<<"First number is not divisible with 8 or second number doesn't end with 4."<<endl;
        cout<<sqrt(number1)+ sqrt(number2);
    }

    return 0;
}
