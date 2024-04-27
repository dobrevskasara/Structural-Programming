//Задача 1
//Напиши програма каде ќе се пресмета сума од сите вредности помеѓу 1-30 кои се
//деливи со 10 и производ од сите останати вредности. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int product=1;
    for(int i=0;i<30;i++){
        if((i+1)%10==0){
            sum+=(i+1);
        }
        else{
            product=product*(i+1);
        }
    }
    cout<<"Sum of numbers divisible with 10 is: "<<sum<<endl;
    cout<<"Product of other numbers is: "<<product;
    return 0;
}
