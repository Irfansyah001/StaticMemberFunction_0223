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

