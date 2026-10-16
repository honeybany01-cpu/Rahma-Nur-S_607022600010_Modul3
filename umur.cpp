#include <iostream>
using namespace std;

int main () {
    int umur;
    cout << "masukkan umur anda: "; cin >> umur;
    
    try{
        if (umur < 17) {
            throw "belum cukup umur";
        }
        cout << "proses pembuatan SIM dilanjutkan." << endl;
    }
    catch (const char* error) {
        cout << "gagal: " << error << endl;
    }
}