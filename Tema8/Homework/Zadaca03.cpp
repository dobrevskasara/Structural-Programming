//Задача 3
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да внеси цртка помеѓу два непарни броеви во низата од карактери.
//Резултатот да се отпечати.
//Sample Input: 1345789
//Sample Output: Result-> 1-345-789

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void addBetween(char *characters){
    char newArray[30];
    int index=0;
    for(int i=0;i< strlen(characters);i++){
        int firstNum=characters[i]-'0';
        int secondNum=0;
        if(i+1< strlen(characters)){
            secondNum=characters[i+1]-'0';
        }
        newArray[index]=characters[i];
        index++;
        if(firstNum%2==1 && secondNum%2==1){
            newArray[index]='-';
            index++;
        }
    }
    newArray[index]='\0';
    cout<<newArray<<endl;
}


int main(){
    char array[30];
    cin>>array;
    addBetween(array);
    return 0;
}
