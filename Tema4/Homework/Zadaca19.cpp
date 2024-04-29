//Задача 19
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш 0. Пресметај
//сума на сите внесени броеви и отпечати го резултатот.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int sum=0;
    while(number!=0){
        sum+=number;
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"Sum of all numbers is: "<<sum;
}
