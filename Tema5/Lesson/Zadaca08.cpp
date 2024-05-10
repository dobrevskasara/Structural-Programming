//Задача 8
//Напиши програма која ќе најде линеарна сума за даден број и отпечати го
//резултатот. ** Решението треба да биде со помош на рекурзија
//Пр. Линеарна сума за бројот 5 = 5 + 4 + 3 +2 +1

#include <iostream>
using namespace std;

int LinearSum(int number){
    if(number==1){
        return 1;
    }
    return number + LinearSum(number-1);
}

int main(){
    int n;
    cin>>n;
    int linearSum = LinearSum(n);
    cout<<linearSum<<endl;
    return 0;
}
