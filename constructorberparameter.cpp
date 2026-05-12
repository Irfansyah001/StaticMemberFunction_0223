#include <iostream>
#include <string>
using namespace std;

class mahasiswa // Kelas mahasiswa adalah sebuah kelas yang digunakan untuk merepresentasikan seorang mahasiswa. Kelas ini memiliki konstruktor dengan parameter yang akan dipanggil setiap kali objek mahasiswa dibuat dengan memberikan nilai untuk NIM dan Nama. Konstruktor ini akan mencetak pesan "Constructor Dengan Parameter Terpanggil" ke layar menggunakan cout, serta menampilkan nilai NIM dan Nama yang diberikan sebagai parameter. Dengan menggunakan konstruktor dengan parameter, kita dapat memberikan nilai awal untuk variabel anggota saat objek dibuat, sehingga kita dapat mengelola informasi tentang mahasiswa dengan lebih efektif.
{
public: // Variabel anggota dan fungsi anggota dalam kelas mahasiswa dideklarasikan sebagai public, yang berarti mereka dapat diakses dari luar kelas. Dengan menggunakan public, kita dapat membuat objek mahasiswa dan mengakses variabel anggota serta fungsi anggota tersebut untuk mengelola informasi tentang mahasiswa, seperti NIM dan Nama, serta mencetak informasi tersebut ke layar menggunakan cout.
    mahasiswa(int nim, string nama); // Konstruktor dengan parameter adalah sebuah fungsi khusus dalam kelas yang memiliki nama yang sama dengan nama kelas dan tidak memiliki tipe pengembalian, tetapi menerima parameter untuk menginisialisasi variabel anggota atau melakukan tindakan tertentu saat objek dibuat. Dalam kelas mahasiswa, konstruktor ini menerima dua parameter, yaitu nim (nomor induk mahasiswa) dan nama (nama mahasiswa). Saat objek mahasiswa dibuat dengan menggunakan konstruktor ini, pesan "Constructor Dengan Parameter Terpanggil" akan dicetak ke layar menggunakan cout, serta nilai NIM dan Nama yang diberikan sebagai parameter akan ditampilkan. Dengan menggunakan konstruktor dengan parameter, kita dapat memberikan nilai awal untuk variabel anggota saat objek dibuat, sehingga kita dapat mengelola informasi tentang mahasiswa dengan lebih efektif.
};

mahasiswa::mahasiswa(int nim, string nama) // Konstruktor dengan parameter adalah sebuah fungsi khusus dalam kelas yang memiliki nama yang sama dengan nama kelas dan tidak memiliki tipe pengembalian, tetapi menerima parameter untuk menginisialisasi variabel anggota atau melakukan tindakan tertentu saat objek dibuat. Dalam kelas mahasiswa, konstruktor ini menerima dua parameter, yaitu nim (nomor induk mahasiswa) dan nama (nama mahasiswa). Saat objek mahasiswa dibuat dengan menggunakan konstruktor ini, pesan "Constructor Dengan Parameter Terpanggil" akan dicetak ke layar menggunakan cout, serta nilai NIM dan Nama yang diberikan sebagai parameter akan ditampilkan. Dengan menggunakan konstruktor dengan parameter, kita dapat memberikan nilai awal untuk variabel anggota saat objek dibuat, sehingga kita dapat mengelola informasi tentang mahasiswa dengan lebih efektif.
{
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
}

int main()
{
    mahasiswa mhs(12345, "Pascal"); // Membuat objek mhs dari kelas mahasiswa dengan menggunakan konstruktor yang memiliki parameter. Saat objek mhs dibuat, konstruktor mahasiswa akan dipanggil secara otomatis dengan nilai parameter nim sebesar 12345 dan nama "Pascal". Konstruktor ini akan mencetak pesan "Constructor Dengan Parameter Terpanggil" ke layar menggunakan cout, serta menampilkan nilai NIM dan Nama yang diberikan sebagai parameter. Dengan membuat objek mhs dengan parameter, kita dapat melihat pesan tersebut setiap kali kita menjalankan program, sehingga kita dapat memahami konsep konstruktor dengan parameter dalam pemrograman berorientasi objek.
    return 0;
}