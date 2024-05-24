//Задача 1
//Да се напише програма со која ќе може да се внесат преку тастатура 10 броеви кои
//ќе бидат запишани во низа. Отпечати ја низата.

#include <iostream>
using namespace std;
int main(){
    int array[10];
    cout<<"Enter numbers: ";
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    cout<<"Here is the array: ";
    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
