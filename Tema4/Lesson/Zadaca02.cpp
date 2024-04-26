//Задача 2
//Напиши програма каде ќе се пресмета сума од сите броеви од 1-100 кои се деливи
//со 5. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=0;i<100;i++){
        if((i+1)%5==0){
            cout<<"Number "<<(i+1)<<" is divisible with 5."<<endl;
            sum+=(i+1);
        }
    }
    cout<<"Sum of numbers is: "<<sum;
    return 0;
}
