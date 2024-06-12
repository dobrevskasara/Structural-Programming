//Задача 9
//Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$
//ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:
//v=a0+1a1+...1an−2+1an−1
//Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви
//(не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.

#include <iostream>
using namespace std;

float recursiveResult(int array[], int index, int n){
    if(index==n-1){
        return array[index];
    }
    else{
        return array[index]+1.0/recursiveResult(array,index+1,n);
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    float result=recursiveResult(array,0,n);
    cout<<result<<endl;
    return 0;
}
