//Задача 3
//Напиши програма каде ќе се пресмета производ од сите броеви од 1-100 кои
//завршуваат на 3. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int product=1;
    for(int i=0;i<100;i++){
        if((i+1)%10==3){
            cout<<"Number "<<(i+1)<<" ends with 3."<<endl;
            product*=(i+1);
        }
    }
    cout<<"Product of the numbers is: "<<product;
    return 0;
}
