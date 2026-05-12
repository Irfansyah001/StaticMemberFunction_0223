#include <iostream>
using namespace std;

class buku // Kelas buku adalah sebuah kelas yang digunakan untuk merepresentasikan sebuah buku. Kelas ini memiliki variabel anggota judul yang digunakan untuk menyimpan judul buku, serta fungsi setget yang digunakan untuk mengatur dan mendapatkan nilai dari variabel anggota judul. Kelas ini dapat digunakan untuk membuat objek buku dan mengelola informasi tentang buku tersebut, seperti judulnya.
{
    string judul; // Variabel anggota judul dalam kelas buku digunakan untuk menyimpan judul buku. Variabel ini memiliki tipe data string, yang memungkinkan kita untuk menyimpan teks atau karakter sebagai judul buku. Variabel anggota ini dapat diakses dan dimodifikasi melalui fungsi-fungsi dalam kelas buku, seperti fungsi setget yang digunakan untuk mengatur dan mendapatkan nilai dari variabel anggota judul.

public:
    string setget(string judul) // Fungsi setget adalah fungsi yang digunakan untuk mengatur (set) dan mendapatkan (get) nilai dari variabel anggota judul dalam kelas buku. Fungsi ini menerima parameter judul yang akan digunakan untuk mengatur nilai variabel anggota judul, dan kemudian mengembalikan nilai variabel anggota judul setelah diatur.
    {
        this->judul = judul; // this->judul merujuk pada variabel anggota judul dalam kelas buku, sedangkan judul tanpa this merujuk pada parameter fungsi setget. Dengan menggunakan this->judul, kita dapat membedakan antara variabel anggota dan parameter yang memiliki nama yang sama.
        return this->judul; // this->judul digunakan untuk mengakses variabel anggota judul dalam kelas buku. Dalam fungsi setget, kita menetapkan nilai parameter judul ke variabel anggota judul menggunakan this->judul = judul. Kemudian, kita mengembalikan nilai variabel anggota judul menggunakan return this->judul. Dengan menggunakan this->judul, kita memastikan bahwa kita mengakses variabel anggota yang benar dalam konteks kelas buku.
    }
};

int main()
{
    buku bukunya; // Membuat objek bukunya dari kelas buku. Objek ini dapat digunakan untuk mengakses fungsi-fungsi dan variabel anggota dalam kelas buku, seperti fungsi setget untuk mengatur dan mendapatkan nilai dari variabel anggota judul.
    cout << bukunya.setget("Matematika"); // Memanggil fungsi setget pada objek bukunya dengan parameter "Matematika". Fungsi ini akan mengatur nilai variabel anggota judul dalam objek bukunya menjadi "Matematika" dan kemudian mengembalikan nilai tersebut, yang akan dicetak ke layar menggunakan cout.
    return 0;
}