//Задача 5
//Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали
//од n, да се најде оној чиј што збир на делителите е најголем. Во пресметувањето
//на збирот на делителите на даден број, да не се зема предвид самиот број.
//For example:
//Input: 10
//Result: 8
//a.Направи функција која ќе го наоѓа збирот на делители на даден број

#include <iostream>
using namespace std;

int SumOfDivisors(int number){
    int counterSum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            counterSum+=i;
        }
    }
    return counterSum;
}

int main(){
    int number;
    cin>>number;
    int MaxDivisors=0;
    int numberMaxDivisors=0;
    for(int i=0;i<number;i++){
        int SumDivisors=SumOfDivisors(i);
        if(SumDivisors>MaxDivisors){
            MaxDivisors=SumDivisors;
            numberMaxDivisors=i;
        }
    }
    cout<<"Number with max divisors is: "<<numberMaxDivisors;
    return 0;
}
