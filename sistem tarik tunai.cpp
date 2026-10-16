#include <iostream>
using namespace std;
int main () {

    int tarik;
    int saldo = 500000;

    cout << "Masukkan jumlah tarik tunai: "; cin >> tarik;

    try{
        if (tarik > saldo) {
            throw "saldo insufficient.";
        }
        saldo = saldo - tarik;
        cout << "sisa saldo: Rp " << saldo <<  endl;
    }
    catch (const char* error) {
        cout << error << endl;
    }
}