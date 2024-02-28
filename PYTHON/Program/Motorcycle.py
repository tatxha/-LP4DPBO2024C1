/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

from Vehicle import Vehicle
# Motorcycle adalah child dari Vehicle
class Motorcycle(Vehicle): # atribut private untuk class motorcycle
    __jenis_motor = ""
    __kapasitas_tangki = 0
    
    #  constructor
    def __init__(self, jenis_motor = "", kapasitas_tangki = 0, plat_nomor = "", merk = "", tahun_produksi = 0, warna = ""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.__jenis_motor = jenis_motor
        self.__kapasitas_tangki = kapasitas_tangki
    
    # getter dan setter
    def set_jenis_motor(self, jenis_motor): self.__jenis_motor = jenis_motor
    def get_jenis_motor(self): return self.__jenis_motor
    
    def set_kapasitas_tangki(self, kapasitas_tangki): self.__kapasitas_tangki = kapasitas_tangki
    def get_kapasitas_tangki(self): return self.__kapasitas_tangki
    
