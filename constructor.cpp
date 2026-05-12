#include <iostream>
using namespace std;

class mahasiswa // Kelas mahasiswa adalah sebuah kelas yang digunakan untuk merepresentasikan seorang mahasiswa. Kelas ini memiliki konstruktor yang akan dipanggil setiap kali objek mahasiswa dibuat, dan konstruktor ini akan mencetak pesan "Constructor dipanggil" ke layar menggunakan cout. Dengan menggunakan kelas mahasiswa, kita dapat membuat objek mahasiswa dan melihat pesan yang dicetak setiap kali objek tersebut dibuat, sehingga kita dapat memahami konsep konstruktor dalam pemrograman berorientasi objek.
{
public:
    mahasiswa(); // Konstruktor adalah sebuah fungsi khusus dalam kelas yang memiliki nama yang sama dengan nama kelas dan tidak memiliki tipe pengembalian. Konstruktor ini akan dipanggil secara otomatis setiap kali objek dari kelas tersebut dibuat, dan biasanya digunakan untuk menginisialisasi variabel anggota atau melakukan tindakan tertentu saat objek dibuat. Dalam kelas mahasiswa, konstruktor ini akan mencetak pesan "Constructor dipanggil" ke layar menggunakan cout setiap kali objek mahasiswa dibuat, sehingga kita dapat melihat pesan tersebut setiap kali kita membuat objek mahasiswa.
};

mahasiswa::mahasiswa() // Definisi konstruktor untuk kelas mahasiswa. Konstruktor ini akan dipanggil secara otomatis setiap kali objek mahasiswa dibuat, dan dalam konstruktor ini kita mencetak pesan "Constructor dipanggil" ke layar menggunakan cout. Dengan mendefinisikan konstruktor ini, kita dapat melihat pesan tersebut setiap kali kita membuat objek mahasiswa, sehingga kita dapat memahami konsep konstruktor dalam pemrograman berorientasi objek.
{
    cout << "Constructor dipanggil" << endl;
};

int main()
{
    mahasiswa mhs; // Membuat objek mhs dari kelas mahasiswa. Saat objek mhs dibuat, konstruktor mahasiswa akan dipanggil secara otomatis, dan pesan "Constructor dipanggil" akan dicetak ke layar menggunakan cout. Dengan membuat objek mhs, kita dapat melihat pesan tersebut setiap kali kita menjalankan program, sehingga kita dapat memahami konsep konstruktor dalam pemrograman berorientasi objek.
    return 0;
}