#include <iostream>
#include "Func.h"
#include <cstring>
#include <cstdint>
#include <bits/stdc++.h>

void Drob::PoiskND(double chislo, int32_t& cel, int32_t& denom1, double& chis){
    double ed = 1e-12;
    double raz = chis - cel;
    int dli = 0;
    while (raz > ed){
        dli ++;
        chis *= 10;
        cel = static_cast<int>(chis);
        raz = chis - cel;
    }
    denom1 = 1;
    for (int i = 0; i < dli; i++){
        denom1 *= 10;
    }
}

void Drob::nod(int32_t& cel, int32_t& denom1){
    if (denom1 < 0){
        denom1 *=(-1);
        cel *=(-1);
    }
    int32_t NOD = gcd(cel, denom1);
    _num = cel / NOD;
    _denom = denom1 / NOD;
}

void Drob::fun1(double chislo){
    int32_t denom1 = 0;
    bool flag = true;
    if (chislo < 0){
        flag = false;
        chislo *= (-1);
    }
    double chis = chislo;
    int32_t cel = static_cast<int32_t>(chis);
    PoiskND(chislo, cel, denom1, chis);
    nod(cel, denom1);
    if (!flag)
        _num *= (-1);
}


Drob::Drob(double chislo){
    fun1(chislo);
}

Drob::Drob(int32_t chisl, int32_t zname){
    if (zname == 0){
        throw "Eror";   
    }
    nod(chisl, zname);
}

Drob::Drob(){
    _num = 0;
    _denom = 1;
}