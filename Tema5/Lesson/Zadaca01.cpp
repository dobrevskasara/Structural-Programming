//Задача 1
//Напиши програма каде преку стандарден влез се внесува еден цел број - n.
//Програмата треба да овозможи внесување на n-парови природни броеви и
//потребно е за секој пар да го отпечати збирот на броевите.
//Input: 3
//2 5
//6 8
//9 1
//Output:Result is: 7
//Result is: 14
//Result is: 10

#include <iostream>
using namespace std;

void FindSum(){
        int number1, number2;
        cin >> number1 >> number2;
        int sum=number1+number2;
        cout<<"The result is: "<<sum<<endl;
    }

int main(){
    int number;
    cin>>number;
    for(int i=0;i<number;i++) {
        FindSum();
    }
    return 0;
}
