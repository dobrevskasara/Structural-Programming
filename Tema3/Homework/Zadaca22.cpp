//Задача 22
//Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
//провери дали сумата од цифрите на единици и десетки е еднаква со цифрата на
//стотки. Резултатот да се отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;
    int tensdigit=number%100/10;
    int hundsdigit=((number%1000)/100)%10;
    if(onesdigit+tensdigit==hundsdigit){
        cout<<"Condition is true!";
    }
    else{
        cout<<"Condition is false!";
    }
    return 0;
}
