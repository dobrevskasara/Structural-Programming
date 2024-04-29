//Задача 17
//Напиши програма каде што ќе може да се внесат два броеви и да се провери дали
//сумата од најголемата и најмалата цифра од првиот број е еднаква со производот
//на најмалата и најголемата цифра на вториот број. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number1, number2, sum=0, product=1;
    cout<<"Enter numbers: ";
    cin>>number1>>number2;
    int maxDigitFirst=0, minDigitFirst=9, maxDigitSecond=0, minDigitSecond=9;
    int newNumber1=number1;
    int newNumber2=number2;

    while(newNumber1!=0){
        int digitF=newNumber1%10;
        if(digitF>maxDigitFirst){
            maxDigitFirst=digitF;
        }
        if(digitF<minDigitFirst){
            minDigitFirst=digitF;
        }
        newNumber1=newNumber1/10;
    }
    sum=maxDigitFirst+minDigitFirst;
    while(newNumber2!=0){
        int digitS=newNumber2%10;
        if(digitS>maxDigitSecond){
            maxDigitSecond=digitS;
        }
        if(digitS<minDigitSecond){
            minDigitSecond=digitS;
        }

        newNumber2=newNumber2/10;
    }
    product=minDigitSecond*maxDigitSecond;

    cout<<"Max in first number is: "<<maxDigitFirst<<endl;
    cout<<"Min in first number is: "<<minDigitFirst<<endl;
    cout<<"Max in second number is: "<<maxDigitSecond<<endl;
    cout<<"Min in second number is: "<<minDigitSecond<<endl;
    if(sum==product){
        cout<<"Sum of max and min in first is the same as product of min and max in second.";
    }
    else{
        cout<<"Sum of max and min in first is not the same as product of min and max in second.";
    }
    return 0;
}
