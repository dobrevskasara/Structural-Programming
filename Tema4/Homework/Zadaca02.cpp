//Задача 2
//Напиши програма каде ќе се избројат вредностите помеѓу 1-100 кои се деливи со 9
//и ќе се избројат вредностите кои се деливи со 12. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int counter9=0, counter12=0;
    for(int i=0;i<100;i++){
        if((i+1)%9==0){
            counter9++;
        }
        if((i+1)%12==0){
            counter12++;
        }
    }
    cout<<"Number of numbers divisible with 9 is: "<<counter9<<endl;
    cout<<"Number of numbers divisible with 12 is: "<<counter12;
    return 0;
}
