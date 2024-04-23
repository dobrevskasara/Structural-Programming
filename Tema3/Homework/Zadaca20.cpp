//Задача 20
//Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
//цифрата на единици е поголема од цифрата на десетки на бројот. Резултатот да се
//отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;
    int tensdigit=number%100/10;
    if(onesdigit>tensdigit){
        cout<<"Onesdigit is greater than tensdigit."<<endl;
        cout<<onesdigit<<" > "<<tensdigit;
    }
    else{
        cout<<"Onesdigit is not greater than tensdigit."<<endl;
        cout<<onesdigit<<" < "<<tensdigit;
    }
    return 0;
}
