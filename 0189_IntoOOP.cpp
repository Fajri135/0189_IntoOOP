#include <iostream> 
using namespace std;

class Mahasiswa {
    public: // akses modifier
        string nama;
        int umur;
        string jurusan;

        void output() {
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
        }
};

class MataKuliah {
    private:
       string kodeMK;
       string namaMK;
       int sks;
    public :
        void input() {
            cout << "Kode MK: ";
            cin >> kodeMK;
            cout << "Nama MK: ";
            cin >> namaMK;
            cout << "SKS: ";
            cin >> sks;
       }

        void output() {
            cout << "Kode MK: " << kodeMK << endl;
            cout << "Nama MK: " << namaMK << endl;
            cout << "SKS: " << endl;
        }
};

int main()
{
    Mahasiswa mhs;
    MataKuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik Informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
}
