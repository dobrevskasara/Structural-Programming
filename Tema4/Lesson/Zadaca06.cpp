//Задача 6
//Напиши програма која ќе пресмета сума од сите парни вредности од 1-100 кои се
//деливи со 5 и сума од сите останати вредности. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int sumOfEven, sumOfOther;
    for(int i=0;i<100;i++){
        if((i+1)%2==0 && (i+1)%5==0){
            sumOfEven+=(i+1);
        }
        else{
            sumOfOther+=(i+1);
        }
    }
    cout<<"Sum of even numbers divisible with 5 is: "<<sumOfEven<<endl;
    cout<<"Sum of other numbers is: "<<sumOfOther;
    return 0;
}
