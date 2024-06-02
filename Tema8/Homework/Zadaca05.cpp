//Задача 5
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да провери дали има два последователни исти карактери во низата.
//Резултатот да се отпечати.
//Пр.:
//("Exercises") -> 0
//("Yellow") -> 1

#include <iostream>
#include <cstring>
using namespace std;

int check(char *characters){
    for(int i=0;i< strlen(characters);i++){
        if(characters[i]==characters[i+1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    char characterArray[30];
    cin>>characterArray;
    cout<<check(characterArray);
    return 0;
}
