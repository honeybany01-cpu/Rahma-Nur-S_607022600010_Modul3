#include <iostream>
using namespace std;

int main () {

    int rpm;
   
    cout << "masukkan kecepatan: "; cin >>  rpm;

    try {
        if (rpm > 5000) 
            throw 500;
        cout << "kecepatan anda masih normal " << endl;
    }
    catch (int pesan) {
        cout << "Overload Error " << pesan << endl;
    }
}