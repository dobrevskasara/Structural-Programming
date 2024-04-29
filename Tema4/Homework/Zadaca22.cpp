//Задача 22
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш број кој е
//делив со 5. Пресметај полузбир од сите внесени броеви и отпечати го резултатот
//на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    float sum=0;
    while(number%5!=0){
        sum+=number;
        cout<<"Enter number: ";
        cin>>number;
    }
    cout<<"Halfsum of numbers is: "<<sum/2.0;
}
