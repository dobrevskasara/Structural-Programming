//Задача 5
//Напиши програма каде броевите од 1-30 ќе се испечатат по 5 броеви во ред.
//Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<30;i++){
        if((i+1)%5==0){
            cout<<(i+1)<<endl;
        }
        else{
            cout<<(i+1)<<" ";
        }
    }
    return 0;
}
