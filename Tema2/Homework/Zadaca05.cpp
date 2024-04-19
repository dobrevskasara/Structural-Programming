//Задача 5
//Напиши програма која преку тастатура ќе овозможува да се внесат две
//променливи x и y.
//Доделија апсолутната разлика помеѓу променливите a и b на променлива наречена
//absDif и прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор).

#include <iostream>
using namespace std;
int main(){
    int valueX, valueY, absDif;
    cout<<"Enter two numbers: "<<endl;
    cin>>valueX>>valueY;
    absDif  = valueX>valueY ? valueX - valueY : (valueX - valueY)*(-1);
    cout<<"The absolute difference is: "<<absDif;
    return 0;
}
