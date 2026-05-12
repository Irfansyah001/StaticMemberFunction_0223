#include <iostream>
#include <string>
using namespace std;

class Mahasiswa // Kelas Mahasiswa adalah sebuah kelas yang digunakan untuk merepresentasikan seorang mahasiswa. Kelas ini memiliki variabel anggota nim yang merupakan variabel statis yang digunakan untuk menyimpan nomor induk mahasiswa, variabel anggota id yang digunakan untuk menyimpan ID mahasiswa, dan variabel anggota nama yang digunakan untuk menyimpan nama mahasiswa. Kelas ini juga memiliki fungsi setID yang digunakan untuk mengatur nilai ID mahasiswa berdasarkan nomor induk mahasiswa, serta fungsi printAll yang digunakan untuk mencetak informasi tentang mahasiswa, termasuk ID dan nama. Kelas ini dapat digunakan untuk membuat objek mahasiswa dan mengelola informasi tentang mahasiswa tersebut.
{
private:
    static int nim; // Variabel statis nim digunakan untuk menyimpan nomor induk mahasiswa yang akan meningkat setiap kali fungsi setID dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Variabel ini bersifat statis karena nilainya akan tetap sama untuk semua objek mahasiswa, dan dapat diakses tanpa harus membuat objek mahasiswa terlebih dahulu.

public:
    int id;
    string nama;

    void setID(); // Fungsi setID adalah fungsi yang digunakan untuk mengatur nilai ID mahasiswa berdasarkan nomor induk mahasiswa (nim). Fungsi ini akan meningkatkan nilai nim secara otomatis setiap kali dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Dengan menggunakan fungsi setID, kita dapat memastikan bahwa setiap mahasiswa memiliki ID yang berbeda dan terurut berdasarkan nomor induk mahasiswa.
    void printAll(); // Fungsi printAll adalah fungsi yang digunakan untuk mencetak informasi tentang mahasiswa, termasuk ID dan nama. Fungsi ini akan menampilkan nilai ID dan nama mahasiswa ke layar menggunakan cout. Dengan menggunakan fungsi printAll, kita dapat dengan mudah melihat informasi lengkap tentang setiap mahasiswa yang dibuat, termasuk ID unik yang dihasilkan berdasarkan nomor induk mahasiswa.

    static void setNim(int pnim) // Fungsi setNim adalah fungsi statis yang digunakan untuk mengatur nilai nomor induk mahasiswa (nim) secara langsung. Fungsi ini menerima parameter pnim yang akan digunakan untuk mengatur nilai nim, dan kemudian menetapkan nilai tersebut ke variabel statis nim. Dengan menggunakan fungsi setNim, kita dapat mengubah nilai nomor induk mahasiswa secara langsung tanpa harus membuat objek mahasiswa terlebih dahulu, sehingga setiap mahasiswa yang dibuat setelah pemanggilan fungsi setNim akan memiliki ID yang diatur berdasarkan nomor induk mahasiswa yang baru.
    {
        nim = pnim; // Menetapkan nilai parameter pnim ke variabel statis nim. Dengan menggunakan this->nim, kita dapat mengakses variabel statis nim dalam konteks kelas Mahasiswa, sehingga kita dapat mengubah nilai nomor induk mahasiswa secara langsung tanpa harus membuat objek mahasiswa terlebih dahulu.
    };

    static int getNim() // Fungsi getNim adalah fungsi statis yang digunakan untuk mendapatkan nilai nomor induk mahasiswa (nim) secara langsung. Fungsi ini akan mengembalikan nilai variabel statis nim, yang merupakan nomor induk mahasiswa yang akan meningkat setiap kali fungsi setID dipanggil. Dengan menggunakan fungsi getNim, kita dapat dengan mudah mendapatkan nilai nomor induk mahasiswa saat ini tanpa harus membuat objek mahasiswa terlebih dahulu, sehingga kita dapat melihat nomor induk mahasiswa yang sedang digunakan untuk mengatur ID mahasiswa yang dibuat setelah pemanggilan fungsi setNim.
    {
        return nim; // Mengembalikan nilai variabel statis nim. Dengan menggunakan this->nim, kita dapat mengakses variabel statis nim dalam konteks kelas Mahasiswa, sehingga kita dapat mendapatkan nilai nomor induk mahasiswa secara langsung tanpa harus membuat objek mahasiswa terlebih dahulu.
    }

    Mahasiswa(string pnama) : nama(pnama) // Konstruktor kelas Mahasiswa yang menerima parameter pnama untuk menginisialisasi variabel anggota nama. Konstruktor ini akan dipanggil setiap kali objek mahasiswa dibuat, dan akan mengatur nilai nama berdasarkan parameter yang diberikan. Selain itu, konstruktor ini juga memanggil fungsi setID untuk mengatur nilai ID mahasiswa secara otomatis berdasarkan nomor induk mahasiswa yang meningkat.
    {
        setID(); // Memanggil fungsi setID dalam konstruktor untuk mengatur nilai ID mahasiswa secara otomatis berdasarkan nomor induk mahasiswa yang meningkat. Dengan memanggil fungsi setID di dalam konstruktor, kita memastikan bahwa setiap kali objek mahasiswa dibuat, ID mahasiswa akan diatur dengan benar berdasarkan nomor induk mahasiswa yang meningkat, sehingga setiap mahasiswa memiliki ID yang unik dan terurut.
    };
};

int Mahasiswa::nim = 0; // Inisialisasi variabel statis nim dengan nilai awal 0. Variabel statis ini akan digunakan untuk menyimpan nomor induk mahasiswa yang akan meningkat setiap kali fungsi setID dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Dengan menginisialisasi nim dengan nilai awal 0, kita dapat memastikan bahwa ID mahasiswa pertama yang dibuat akan dimulai dari 1, dan setiap mahasiswa berikutnya akan memiliki ID yang meningkat secara otomatis berdasarkan nomor induk mahasiswa yang meningkat.

void Mahasiswa::setID() // Fungsi setID adalah fungsi yang digunakan untuk mengatur nilai ID mahasiswa berdasarkan nomor induk mahasiswa (nim). Fungsi ini akan meningkatkan nilai nim secara otomatis setiap kali dipanggil, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat. Dengan menggunakan fungsi setID, kita dapat memastikan bahwa setiap mahasiswa memiliki ID yang berbeda dan terurut berdasarkan nomor induk mahasiswa.
{
    id = ++nim; // Meningkatkan nilai nim secara otomatis dengan menggunakan operator pre-increment (++nim) dan kemudian menetapkan nilai tersebut ke variabel anggota id. Dengan menggunakan operator pre-increment, kita memastikan bahwa nilai nim akan meningkat terlebih dahulu sebelum digunakan untuk mengatur nilai ID mahasiswa, sehingga setiap mahasiswa yang dibuat akan memiliki ID yang unik berdasarkan nomor induk mahasiswa yang meningkat.
}

void Mahasiswa::printAll() // Fungsi printAll adalah fungsi yang digunakan untuk mencetak informasi tentang mahasiswa, termasuk ID dan nama. Fungsi ini akan menampilkan nilai ID dan nama mahasiswa ke layar menggunakan cout. Dengan menggunakan fungsi printAll, kita dapat dengan mudah melihat informasi lengkap tentang setiap mahasiswa yang dibuat, termasuk ID unik yang dihasilkan berdasarkan nomor induk mahasiswa.
{
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout << endl;
}

