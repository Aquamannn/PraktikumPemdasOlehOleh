#include <iostream>
using namespace std;

class Segitiga {
private:
    float alas, tinggi, sisiA, sisiB, sisiC;

    float hitungLuas() {
        return 0.5 * alas * tinggi;
    }

    float hitungKeliling() {
        return sisiA + sisiB + sisiC;
    }

public:
    void inputLuas() {
        do {
            cout << "Masukkan Alas Segitiga (1 - 50) : ";
            cin >> alas;

            if (alas > 50) {
                cout << "Angka tidak boleh melebihi 50, silahkan coba lagi!!\n";
            } else if (static_cast<int>(alas) % 2 != 0) {
                cout << "Nilai ganjil, Gabisa dihitung, masukkan angka lain!\n";
            }
        } while (alas < 1 || alas > 50 || static_cast<int>(alas) % 2 != 0);

        do {
            cout << "Masukkan Tinggi Segitiga (1 - 50) : ";
            cin >> tinggi;

            if (tinggi > 50) {
                cout << "Angka tidak boleh melebihi 50, silahkan coba lagi!!\n";
            } else if (static_cast<int>(tinggi) % 2 != 0) {
                cout << "Nilai ganjil, Gabisa dihitung, masukkan angka lain!\n";
            }
        } while (tinggi < 1 || tinggi > 50 || static_cast<int>(tinggi) % 2 != 0);

        cout << "Luas Segitiga : " << hitungLuas() << " cm2\n";
    }

    void inputKeliling() {
        do {
            cout << "Masukkan Sisi A Segitiga (1 - 50) : ";
            cin >> sisiA;

            if (sisiA > 50) {
                cout << "Angka tidak boleh melebihi 50, silahkan coba lagi!!\n";
            } else if (static_cast<int>(sisiA) % 2 != 0) {
                cout << "Nilai ganjil, Gabisa dihitung, masukkan angka lain!\n";
            }
        } while (sisiA < 1 || sisiA > 50 || static_cast<int>(sisiA) % 2 != 0);

        do {
            cout << "Masukkan Sisi B Segitiga (1 - 50) : ";
            cin >> sisiB;

            if (sisiB > 50) {
                cout << "Angka tidak boleh melebihi 50, silahkan coba lagi!!\n";
            } else if (static_cast<int>(sisiB) % 2 != 0) {
                cout << "Nilai ganjil, Gabisa dihitung, masukkan angka lain!\n";
            }
        } while (sisiB < 1 || sisiB > 50 || static_cast<int>(sisiB) % 2 != 0);

        do {
            cout << "Masukkan Sisi C Segitiga (1 - 50) : ";
            cin >> sisiC;

            if (sisiC > 50) {
                cout << "Angka tidak boleh melebihi 50, silahkan coba lagi!!\n";
            } else if (static_cast<int>(sisiC) % 2 != 0) {
                cout << "Nilai ganjil, Gabisa dihitung, masukkan angka lain!\n";
            }
        } while (sisiC < 1 || sisiC > 50 || static_cast<int>(sisiC) % 2 != 0);

        cout << "Keliling Segitiga : " << hitungKeliling() << " cm\n";
    }
};

int main() {
    Segitiga s;
    int pilihan;

    do {
        cout << "\n======= Menu =======\n";
        cout << "1. Hitung Luas Segitiga\n";
        cout << "2. Hitung Keliling Segitiga\n";
        cout << "3. Keluar\n";
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            s.inputLuas();
            break;
        case 2:
            s.inputKeliling();
            break;
        case 3:
            cout << "Program Berhenti!!\n";
            break;
        default:
            cout << "Ngga ada pilihan yang itu kocak, Pilih yang bener!!.\n";
        }
    } while (pilihan != 3);

    return 0;
}
