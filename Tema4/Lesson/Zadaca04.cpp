//Задача 4
//Напиши програма каде ќе се избројат колку броеви во рангот од 1-100 завршуваат
//на 6. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int counter=0;
    for(int i=0;i<100;i++){
        if((i+1)%10==6){
            cout<<"The number is: "<<(i+1)<<endl;
            counter++;
        }
    }
    cout<<"There are "<<counter<<" numbers whose last digit is 6.";
    return 0;
}
