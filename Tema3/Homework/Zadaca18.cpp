//Задача 18
//Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
//цифрата на единици е поголема од 4. Резултатот да се отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;
    if(onesdigit>4){
        cout<<"The last digit is greater than 4."<<endl;
        cout<<onesdigit;
    }else{
        cout<<"The last digit is not greater than 4."<<endl;
        cout<<onesdigit;
    }
    return 0;
}
