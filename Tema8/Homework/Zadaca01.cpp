//Задача 1
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да провери дали карактерите ‘e’ и ‘g’ се оделени точно 2 места барем
//еднаш во низата. Резултатот да се отпечати.
//Sample Input: eagerer
//Sample Output: eagerer -> 1
//Sample Input: eaaagerer
//Sample Output: eaaagerer -> 0

#include <iostream>
#include <cstring>
using namespace std;

int check(char *characters){
    int counter=-1;
    for(int i=0;i< strlen(characters);i++){
        if(characters[i]=='e'){
            counter=0;
        }
        else if(counter==1 && characters[i]=='g'){
            return 1;
        }
        else if(counter==1 && characters[i]!='g'){
            counter=-1;
        }
        else if(counter>=0){
            counter++;
        }
    }
    return 0;
}

int main(){
    char array[30];
    cin>>array;
    cout<<"Space between 'e' and 'g' is: "<<check(array);
    return 0;
}
