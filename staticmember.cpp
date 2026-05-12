#include <iostream>
using namespace std;

class Mahasiswa // Kelas Mahasiswa adalah sebuah kelas yang digunakan untuk merepresentasikan seorang mahasiswa. Kelas ini memiliki variabel anggota nim yang merupakan variabel statis yang digunakan untuk menyimpan nomor induk mahasiswa, variabel anggota id yang digunakan untuk menyimpan ID mahasiswa, dan variabel anggota nama yang digunakan untuk menyimpan nama mahasiswa. Kelas ini juga memiliki fungsi setID yang digunakan untuk mengatur nilai ID mahasiswa berdasarkan nomor induk mahasiswa, serta fungsi printAll yang digunakan untuk mencetak informasi tentang mahasiswa, termasuk ID dan nama. Kelas ini dapat digunakan untuk membuat objek mahasiswa dan mengelola informasi tentang mahasiswa tersebut.
{
public:
    static int nim;
    int id;
    string nama;

    void setID(); // Fungsi setID adalah fungsi yang digunakan untuk mengatur nilai ID mahasiswa berdasarkan nomor induk mahasiswa (nim). Fungsi ini akan meningkatkan nilai nim secara otomatis setiap kali dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Dengan menggunakan fungsi setID, kita dapat memastikan bahwa setiap mahasiswa memiliki ID yang berbeda dan terurut berdasarkan nomor induk mahasiswa.
    void printAll(); // Fungsi printAll adalah fungsi yang digunakan untuk mencetak informasi tentang mahasiswa, termasuk ID dan nama. Fungsi ini akan menampilkan nilai ID dan nama mahasiswa ke layar menggunakan cout. Dengan menggunakan fungsi printAll, kita dapat dengan mudah melihat informasi lengkap tentang setiap mahasiswa yang dibuat, termasuk ID unik yang dihasilkan berdasarkan nomor induk mahasiswa.

    Mahasiswa(string pnama) : nama(pnama) // Konstruktor kelas Mahasiswa yang menerima parameter pnama untuk menginisialisasi variabel anggota nama. Konstruktor ini akan dipanggil setiap kali objek mahasiswa dibuat, dan akan mengatur nilai nama berdasarkan parameter yang diberikan. Selain itu, konstruktor ini juga memanggil fungsi setID untuk mengatur nilai ID mahasiswa secara otomatis berdasarkan nomor induk mahasiswa yang meningkat.
    {
        setID(); // Memanggil fungsi setID dalam konstruktor untuk mengatur nilai ID mahasiswa secara otomatis berdasarkan nomor induk mahasiswa yang meningkat. Dengan memanggil fungsi setID di dalam konstruktor, kita memastikan bahwa setiap kali objek mahasiswa dibuat, ID mahasiswa akan diatur dengan benar berdasarkan nomor induk mahasiswa yang meningkat, sehingga setiap mahasiswa memiliki ID yang unik dan terurut.
    }
};

int Mahasiswa::nim = 10; // Inisialisasi variabel statis nim dengan nilai awal 10. Variabel statis ini akan digunakan untuk menyimpan nomor induk mahasiswa yang akan meningkat setiap kali fungsi setID dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Dengan menginisialisasi nim dengan nilai awal 10, kita dapat memastikan bahwa ID mahasiswa pertama yang dibuat akan dimulai dari 11, dan setiap mahasiswa berikutnya akan memiliki ID yang meningkat secara otomatis berdasarkan nomor induk mahasiswa yang meningkat.

void Mahasiswa::setID() { // Fungsi setID adalah fungsi yang digunakan untuk mengatur nilai ID mahasiswa berdasarkan nomor induk mahasiswa (nim). Fungsi ini akan meningkatkan nilai nim secara otomatis setiap kali dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Dengan menggunakan fungsi setID, kita dapat memastikan bahwa setiap mahasiswa memiliki ID yang berbeda dan terurut berdasarkan nomor induk mahasiswa.
    id = ++nim; // Meningkatkan nilai nim secara otomatis dengan menggunakan operator pre-increment (++nim) dan kemudian menetapkan nilai tersebut ke variabel anggota id. Dengan menggunakan operator pre-increment, kita memastikan bahwa nilai nim akan meningkat terlebih dahulu sebelum digunakan untuk mengatur nilai ID mahasiswa, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat.
};

void Mahasiswa::printAll() { // Fungsi printAll adalah fungsi yang digunakan untuk mencetak informasi tentang mahasiswa, termasuk ID dan nama. Fungsi ini akan menampilkan nilai ID dan nama mahasiswa ke layar menggunakan cout. Dengan menggunakan fungsi printAll, kita dapat dengan mudah melihat informasi lengkap tentang setiap mahasiswa yang dibuat, termasuk ID unik yang dihasilkan berdasarkan nomor induk mahasiswa.
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout << endl;
};

int main() // Fungsi main adalah fungsi utama dalam program C++ yang digunakan sebagai titik masuk untuk menjalankan program. Dalam fungsi main, kita membuat beberapa objek mahasiswa dengan nama yang berbeda, dan kemudian memanggil fungsi printAll untuk mencetak informasi tentang setiap mahasiswa, termasuk ID dan nama. Dengan menggunakan fungsi main, kita dapat menjalankan program dan melihat hasil output yang dihasilkan oleh objek mahasiswa yang dibuat.
{
    Mahasiswa mhs1("Lia Kurnia"); // Membuat objek mhs1 dari kelas Mahasiswa dengan nama "Lia Kurnia". Objek ini akan memiliki ID yang diatur secara otomatis berdasarkan nomor induk mahasiswa yang meningkat, dan nama yang diinisialisasi dengan "Lia Kurnia". Dengan membuat objek mhs1, kita dapat mengelola informasi tentang mahasiswa tersebut, termasuk ID dan nama, serta mencetak informasi tersebut menggunakan fungsi printAll.
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printAll(); // Memanggil fungsi printAll pada objek mhs1 untuk mencetak informasi tentang mahasiswa mhs1, termasuk ID dan nama. Fungsi printAll akan menampilkan nilai ID dan nama mahasiswa mhs1 ke layar menggunakan cout. Dengan memanggil fungsi printAll pada objek mhs1, kita dapat melihat informasi lengkap tentang mahasiswa tersebut, termasuk ID unik yang dihasilkan berdasarkan nomor induk mahasiswa yang meningkat.
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}