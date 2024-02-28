#include <iostream>
#include <cstdint>


using namespace std;

class Drob{
private:
    int32_t _num;
    uint32_t _denom;
    void fun1(double chislo);
    void nod(int32_t& num1, int32_t& denom1);
    void PoiskND(double chislo, int32_t& cel, int32_t& denom1, double& chis);
public:
    Drob();
    Drob(double chislo);
    Drob(int32_t chisl, int32_t zname);
    
    void Info(){
        cout << _num << "/" << _denom << endl;
    }
};