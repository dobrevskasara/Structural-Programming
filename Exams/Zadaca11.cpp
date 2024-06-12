//Задача 11
//Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. Да се напише програма во која од
//за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според
//ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char array[100];
    int numbers[100];
    cin.getline(array,100);
    while(strcmp(array,"#")!=0){
        int countDigits=0;
        for(int i=0;i<strlen(array); i++) {
            if (isdigit(array[i])) {
                numbers[countDigits] = array[i];
                countDigits++;
            }
        }
        for(int i=0;i<countDigits-1;i++){
            for(int j=0;j<countDigits-i-1;j++){
                if(numbers[j]>numbers[j+1]){
                    int temp=numbers[j];
                    numbers[j]=numbers[j+1];
                    numbers[j+1]=temp;
                }
            }
        }
        cout << countDigits <<":";
        for(int i=0;i<countDigits;i++) {
            cout<< numbers[i] - '0';
        }
        cout<<endl;
        cin.getline(array,100);
    }
    return 0;
}
