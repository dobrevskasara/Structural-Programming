//Задача 21
//Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
//провери дали цифрите на единици, десетки и стотки се еднакви. Резултатот да се
//отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;
    int tensdigit=number%100/10;
    int hundsdigit=((number%1000)/100)%10;
    if(onesdigit==tensdigit && tensdigit==hundsdigit){
        cout<<"All digits are the same.";
    }
    else{
        cout<<"The condition is false!";
    }
    return 0;
}
