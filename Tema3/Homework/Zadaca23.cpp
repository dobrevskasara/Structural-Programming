//Задача 23
//Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
//провери дали производот на последните три цифри од бројот е парен. Резултатот
//да се отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;
    int tensdigit=number/100%10;
    int hundsdigit=((number%1000)/100)%10;
    if((onesdigit*tensdigit*hundsdigit)%2==0){
        cout<<"The number is even!"<<endl;
        cout<<onesdigit*tensdigit*hundsdigit;
    }
    else{
        cout<<"The number is odd!"<<endl;
        cout<<onesdigit*tensdigit*hundsdigit;
    }
    return 0;
}
