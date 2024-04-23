#include <iostream>
using namespace std;

class bangunDatar {

    // Akses modifier
private:
    float panjang, lebar;
public:
    float luas;

    void input() { // Menthode input persegi panjang

        cout << "masukan Panjangnya = ";
        cin >> panjang;
        cout << "Masukan Lebarnya = ";
        cin >> lebar;
    }

    float hitungLuas() {
        return panjang * lebar;
    }

    void display() {
        cout << "Panjangnya = " << panjang << endl;
        cout << "Lebarnya = " << lebar << endl;
        cout << "Luasnya = " << hitungLuas() << endl;
    }
};

int main()
{
    bangunDatar pp;
    pp.input();
    pp.display();

    return 0;
}
