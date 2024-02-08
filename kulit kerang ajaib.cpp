#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// Fungsi untuk memberikan jawaban acak
std::string jawabanAcak() {
    // Array jawaban yang mungkin
    std::string jawaban[] = {
        "Ya",
        "Tidak",
        "Mungkin bagus juga",
        "Sebaiknya lakukan",
        "saya tidak menyarankan untuk sekarang",
        "silahkan saja!",
        "mungkin saja",
        "Sebaiknya jangan terlalu gegabah",
        "tidak tahu tanya saja pada orang lain",
        "Tolong tanyakan hal lain yang lebih penting"
    };

    // Menghitung jumlah jawaban yang mungkin
    int jumlahJawaban = sizeof(jawaban) / sizeof(jawaban[0]);

    // Menghasilkan nomor acak sebagai indeks untuk memilih jawaban
    int indeksJawaban = rand() % jumlahJawaban;

    // Mengembalikan jawaban yang dipilih secara acak
    return jawaban[indeksJawaban];
}

int main() {
    // Mengatur seed untuk generator nomor acak
    srand(time(0));

    std::string pertanyaan;
   std::cout << "===========================================================" << std::endl;
    std::cout << "                     HAI ANGGOTA KLUB                     " << std::endl;
    std::cout << "===========================================================" << std::endl;

    std::cout << "Ada masalah apa ? jika tidak ada ketik 'keluar' untuk keluar: ";
    std::getline(std::cin, pertanyaan);

    // Loop sampai pengguna memasukkan "keluar"
    while (pertanyaan != "keluar") {
        // Memperoleh jawaban acak
        std::string jawaban = jawabanAcak();

        // Menampilkan jawaban
        std::cout << "Jawaban: " << jawaban << std::endl;

          // Meminta pertanyaan baru
        std::cout << "\nApakah ada hal lainnya? Jika tidak ada, ketik 'keluar' untuk keluar: ";
        std::getline(std::cin, pertanyaan);
    }

    std::cout << "===========================================================" << std::endl;
    std::cout << "               hujan kerang ajaib lululululu               " << std::endl;
    std::cout << "===========================================================" << std::endl;

    return 0;
}

