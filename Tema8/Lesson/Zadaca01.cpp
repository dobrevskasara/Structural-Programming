//Задача 1
//Да се напише програма каде преку тастатура ќе се внесат две променливи
//numberOfBooks и numberOfPencils.
//Програмата е потребно да ги замени нивните вредности со помош на функција
//swap.
//Резултатот да се отпечати.
//Input:
//numberOfBooks =5;
//numberOfPencils= 65
//Output:
//numberOfBooks =65;
//numberOfPencils= 5

#include <iostream>
using namespace std;

void swap(int *firstValue, int *secondValue){
    int temp=*firstValue;
    *firstValue=*secondValue;
    *secondValue=temp;
}

int main(){
    int numberOfBooks, numberOfPencils;
    cout<<"Number of books: ";
    cin>>numberOfBooks;
    cout<<"Number of pencils: ";
    cin>>numberOfPencils;
    cout<<"Number of books before swap: "<<numberOfBooks<<endl;
    cout<<"Number of pencils before swap: "<<numberOfPencils<<endl;
    swap(numberOfBooks,numberOfPencils);
    cout<<"Number of books after swap: "<<numberOfBooks<<endl;
    cout<<"Number of pencils after swap: "<<numberOfPencils<<endl;
    return 0;
}
