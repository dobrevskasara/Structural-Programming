//Задача 1
//Се внесуваат низи од значи од стандарден влез. Да се избројат и испечатат сите последнователни појавувања
//на соседни самогласки во речениците. Појавата на големи и мали букви да се игнорира. Пронајдените парови
//самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на
//појавувања на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.
//Пример:
//IO is short for Input Output
//medioio medIo song
//#
//Излез:
//io
//ou
//io
//oi
//io
//io
//6

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int isVowel(char character){
    char uppercase= toupper(character);
    return uppercase=='A' || uppercase=='E' || uppercase=='I' || uppercase=='O' || uppercase=='U';
}

int check(char *array){
    int counter=0;
    int n= strlen(array);
    for(int i=0;i<n-1;i++){
        char first=tolower(array[i]);
        char second= tolower(array[i+1]);
        if(isVowel(first) && isVowel(second)){
            counter++;
            cout<<first<<second<<endl;
        }
    }
    return counter;
}

int main(){
    char array[80];
    cin>>array;
    int counter=0;
    while(strcmp(array, "#") != 0){
        counter+= check(array);
        cin>>array;
    }
    cout<<counter<<endl;
    return 0;
}
