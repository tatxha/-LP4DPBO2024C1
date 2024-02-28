/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

from Vehicle import Vehicle
# Car adalah child dari Vehicle
class Car(Vehicle): # atribut private untuk class car:
    __jumlah_kursi = 0
    __jumlah_pintu = 0
    
    # konstruktor
    def __init__(self, jumlah_kursi = 0, jumlah_pintu = 0, plat_nomor = "", merk = "", tahun_produksi = 0, warna = ""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.__jumlah_kursi = jumlah_kursi
        self.__jumlah_pintu = jumlah_pintu
    
    #  getter dan setter
    def set_jumlah_kursi(self, jumlah_kursi): self.__jumlah_kursi = jumlah_kursi
    def get_jumlah_kursi(self): return self.__jumlah_kursi
    
    def set_jumlah_pintu(self, jumlah_pintu): self.__jumlah_pintu = jumlah_pintu
    def get_jumlah_pintu(self): return self.__jumlah_pintu
    
