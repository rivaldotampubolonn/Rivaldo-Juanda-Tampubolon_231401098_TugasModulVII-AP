#include <iostream>
#include <iomanip>
using namespace std;

void tambah(float a, float b) {
    cout << a + b;
}

void kurang(float a, float b) {
    cout << a - b;
}

void kali(float a, float b) {
    cout << a * b;
}

void bagi(float a, float b) {
    if (b != 0)
        cout << a / b;
    else
        cout << "Tidak bisa membagi dengan nol.";
}

int main() {
    float a, b;
    char op;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Pilih operator (+ - * /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "Hasil dari " << a << " " << op << " " << b << " = ";
    cout << setprecision(2) << fixed;

    switch (op) {
        case '+':
            tambah(a, b);
            break;
        case '-':
            kurang(a, b);
            break;
        case '*':
            kali(a, b);
            break;
        case '/':
            bagi(a, b);
            break;
        default:
            cout << "Operator tidak ditemukan";
    }

    return 0;
}
