/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

class Vehicle():
    __plat_nomor = ""
    __merk = ""
    __tahun_produksi = 0
    __warna = ""
    
    def __init__(self, plat_nomor = "", merk = "", tahun_produksi = 0, warna = ""):
        self.__plat_nomor = plat_nomor
        self.__merk = merk
        self.__tahun_produksi = tahun_produksi
        self.__warna = warna
    
    def set_plat_nomor(self, plat_nomor):  self.__plat_nomor = plat_nomor
    def get_plat_nomor(self): return self.__plat_nomor
    
    def set_merk(self, merk):  self.__merk = merk
    def get_merk(self): return self.__merk
    
    def set_tahun_produksi(self, tahun_produksi):  self.__tahun_produksi = tahun_produksi
    def get_tahun_produksi(self): return self.__tahun_produksi
    
    def set_warna(self, warna):  self.__warna = warna
    def get_warna(self): return self.__warna
    
