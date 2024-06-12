//Задача 19
//Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци.
//На почетокот на програмата се читаат два цели броеви:
//N - бројот на низи од знаци кои ќе се читаат и
//X - поместување.
//Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви
//(a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на
//буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
//Трансформацијата да се имплементира со посебна рекурзивна функција.
//Пример:
//Welcome -> трансформирано со поместување 5 -> Bjqhtrj

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char transform(char letter, int num){
    int possibleNum=num%26;
    int end=0;
    char first;
    if(!isalpha(letter)){
        return letter;
    }
    if(isupper(letter)){
        end=(int)'Z'-(int)letter;
        first='A';
    }
    if(islower(letter)){
        end=(int)'z'-(int)letter;
        first='a';
    }
    if(num<=end){
        return (char)((int)letter+num);
    }
    num=num-end;
    return (char)((int)first+num-1);
}

void convertString(char *array, int num){
    if(*array=='\0'){
        return;
    }
    *array= transform(*array,num);
    array++;
    convertString(array,num);
}

int main(){
    int n,x;
    cin>>n>>x;
    char string[80];
    cin.getline(string,80);
    for(int i=0;i<n;i++){
        cin.getline(string,80);
        convertString(string,x);
        cout<<string<<endl;
    }
    return 0;
}
