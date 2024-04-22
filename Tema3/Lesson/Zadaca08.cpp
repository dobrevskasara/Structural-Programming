//Задача 8
//Напиши програма каде што преку тастатура ќе биде внесен еден троцифрен број.
//Најди ја цифрата на единици, десетки и стотки и пресметај:
//(бр_единици % бр_стотки) - бр_десетки
//Резултатот отпечати го на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number with 3 digits: "<<endl;
    cin>>number;
    int onesdigit, tensdigit, hundredsdigit;
    onesdigit=number%10;
    tensdigit=number%100/10;
    hundredsdigit=number/100;
    int result=(onesdigit%hundredsdigit)-tensdigit;
    cout<<"The result is: "<<result<<endl;
    return 0;
}
