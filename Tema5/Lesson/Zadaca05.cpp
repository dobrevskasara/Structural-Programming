//Задача 5
//Напиши програма која ќе го пресмета збирот:
//1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)! и ќе го отпечати резултатот

#include <iostream>
using namespace std;

int FindSum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int FindFactoriel(int number){
    int factoriel=1;
    for(int i=1;i<=number;i++){
        factoriel*=i;
    }
    return factoriel;
}

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int SumNumber = FindSum(i);
        int Factoriel = FindFactoriel(SumNumber);
        sum+=Factoriel;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}
