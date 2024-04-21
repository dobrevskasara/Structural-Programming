//Задача 5
//Напишете програма која ќе проверува дали внесен карактер е голема буква.
//Отпечатете го резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter letter: "<<endl;
    cin>>letter;
    if(letter>'A' && letter<'Z'){
        cout<<"UPPER CASE LETTER";
    }
    return 0;
}
