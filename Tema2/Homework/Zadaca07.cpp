//Задача 7
//Напиши програма која преку тастатура ќе овозможува да се внесат три променливи
//x, y и z.
//Искористи еден израз за дa доделиш нова вредност во променливата “result”, така
//што доколку z е помал или еднаков на 25, резултатот ќе биде производот на x и y.
//Во спротивно резултатот ќе биде количникот на x и y.
//Прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор).

#include <iostream>
using namespace std;
int main(){
    int valueX, valueY, valueZ;
    cout<<"Enter three numbers: "<<endl;
    cin>>valueX>>valueY>>valueZ;
    int result = valueZ<=25 ? valueX*valueY : valueX/valueY;
    cout<<"The result is: "<<result;
    return 0;
}
