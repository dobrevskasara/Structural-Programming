//Задача 4
//Да се напише програма која за даден природен број го наоѓа најблискиот поголем
//од него прост број. Резултатот да се отпечати.
//Влез: 573
//Излез: 577

#include <iostream>
using namespace std;

bool isPrime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    cin>>number;
    for(int i=number+1;;i++){
        if(isPrime(i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
