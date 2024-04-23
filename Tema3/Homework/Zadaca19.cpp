//Задача 19
//Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
//цифрата на единици е еднаква со цифрата на десетки. Резултатот да се отпечати
//на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;
    int tensdigit=number%100/10;
    if(onesdigit==tensdigit){
        cout<<"Both digits are the same."<<endl;
        cout<<onesdigit<<" "<<tensdigit;
    }
    else{
        cout<<"This condition is false!"<<endl;
        cout<<onesdigit<<" "<<tensdigit;
    }
    return 0;
}
