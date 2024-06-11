//Задача 3
//Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
//Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и
//бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи почнувајќи од
//дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од N функцијата треба да врати 0.
//НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).
//Пример
//влез:
//10
//2 4 6 8 1 3 9 12 33 44
//6
//излез:
//98
//98 = 9+12+33+44

#include <iostream>
using namespace std;

int sum_pos(int *array, int ind, int valid){
    int sum=0;
    for(int i=ind;i<valid;i++){
        sum+=array[i];
    }
    return sum;
}

void insertArray(int *array, int n){
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
}

int main(){
    int n;
    cin>>n;
    int *numbers = new int[n];
    insertArray(numbers, n);
    int ind;
    cin>>ind;
    int result=sum_pos(numbers,ind,n);
    cout<<result;
    delete []numbers;
    return 0;
}
