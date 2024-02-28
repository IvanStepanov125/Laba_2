#include <iostream>
#include "Func.h"
#include <cstring>

using namespace std;

int main(){
    int flag;
    cout << "Введите 1, если хотите записать десятичную запись числа" << endl;
    cout << "Введите 2, если хотите записать дробную запись числа" << endl;
    cin >> flag;
    Drob otv;
    if (flag == 1){
        double chislo;
        cin >> chislo;
        otv = Drob(chislo);
    }
    if (flag == 2){
        int32_t chisl;
        int32_t zname;
        cout << "Введите числитель" << endl;
        cin >> chisl;
        cout << "Введите знаменатель" << endl;
        cin >> zname;
        otv = Drob(chisl, zname);
    }
    otv.Info();
    return 0;
}