//Задача 18
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш 0.
//Пронајди го бројот на внесени броеви, максималниот внесен број и пресметај го
//збирот на внесените броеви. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int maxNum=number;
    int counter=1;
    int sum=0;
    while(number!=0){
        counter++;
        sum+=number;
        cout<<"Enter number: ";
        cin>>number;
        cout<<endl;
        if(number>maxNum){
            maxNum=number;
        }
    }
    cout<<"Max number is: "<<maxNum<<endl;
    cout<<"Number of entered numbers is: "<<counter<<endl;
    cout<<"Sum of numbers: "<<sum;
    return 0;
}
