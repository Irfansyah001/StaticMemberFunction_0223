#include <iostream>
using namespace std;

class buku
{
    string judul; // Variabel anggota judul dalam kelas buku digunakan untuk menyimpan judul buku. Variabel ini memiliki tipe data string, yang memungkinkan kita untuk menyimpan teks atau karakter sebagai judul buku. Variabel anggota ini dapat diakses dan dimodifikasi melalui fungsi-fungsi dalam kelas buku, seperti fungsi setJudul yang digunakan untuk mengatur nilai dari variabel anggota judul, dan fungsi getJudul untuk mendapatkan nilai dari variabel anggota judul.

public:
    buku setJudul(string judul) // Fungsi setJudul adalah fungsi yang digunakan untuk mengatur nilai dari variabel anggota judul dalam kelas buku. Fungsi ini menerima parameter judul yang akan digunakan untuk mengatur nilai variabel anggota judul, dan kemudian mengembalikan objek itu sendiri menggunakan return *this, sehingga kita dapat melakukan method chaining dengan memanggil fungsi getJudul pada objek yang dikembalikan untuk mendapatkan nilai judul yang telah diatur. Dengan menggunakan this->judul, kita memastikan bahwa kita mengakses variabel anggota yang benar dalam konteks kelas buku.
    {
        this->judul = judul; // this->judul merujuk pada variabel anggota judul dalam kelas buku, sedangkan judul tanpa this merujuk pada parameter fungsi setJudul. Dengan menggunakan this->judul, kita dapat membedakan antara variabel anggota dan parameter yang memiliki nama yang sama. Dalam fungsi setJudul, kita menetapkan nilai parameter judul ke variabel anggota judul menggunakan this->judul = judul. Kemudian, kita mengembalikan objek itu sendiri menggunakan return *this, sehingga kita dapat melakukan method chaining dengan memanggil fungsi getJudul pada objek yang dikembalikan untuk mendapatkan nilai judul yang telah diatur. Dengan menggunakan this->judul, kita memastikan bahwa kita mengakses variabel anggota yang benar dalam konteks kelas buku.
        return *this; // Mengembalikan objek itu sendiri menggunakan return *this, sehingga kita dapat melakukan method chaining dengan memanggil fungsi getJudul pada objek yang dikembalikan untuk mendapatkan nilai judul yang telah diatur. Dengan menggunakan this->judul, kita memastikan bahwa kita mengakses variabel anggota yang benar dalam konteks kelas buku.
    }

    string getJudul()
    {
        return this->judul; // this->judul digunakan untuk mengakses variabel anggota judul dalam kelas buku. Dalam fungsi setJudul, kita menetapkan nilai parameter judul ke variabel anggota judul menggunakan this->judul = judul. Kemudian, kita mengembalikan objek itu sendiri menggunakan return *this, sehingga kita dapat melakukan method chaining dengan memanggil fungsi getJudul pada objek yang dikembalikan untuk mendapatkan nilai judul yang telah diatur. Dengan menggunakan this->judul, kita memastikan bahwa kita mengakses variabel anggota yang benar dalam konteks kelas buku.
    }
};

int main()
{
    buku bukunya; // Membuat objek bukunya dari kelas buku. Objek ini dapat digunakan untuk mengakses fungsi-fungsi dan variabel anggota dalam kelas buku, seperti fungsi setJudul untuk mengatur nilai dari variabel anggota judul, dan fungsi getJudul untuk mendapatkan nilai dari variabel anggota judul.
    cout << bukunya.setJudul("Matematika").getJudul(); // Memanggil fungsi setJudul pada objek bukunya dengan parameter "Matematika". Fungsi ini akan mengatur nilai variabel anggota judul dalam objek bukunya menjadi "Matematika" dan kemudian mengembalikan objek itu sendiri (dengan menggunakan return *this). Setelah itu, kita memanggil fungsi getJudul pada objek yang dikembalikan untuk mendapatkan nilai judul yang telah diatur, dan mencetaknya ke layar menggunakan cout. Dengan menggunakan method chaining seperti ini, kita dapat mengatur dan mendapatkan nilai dari variabel anggota dalam satu baris kode, sehingga membuat kode lebih ringkas dan mudah dibaca.

    return 0;
}