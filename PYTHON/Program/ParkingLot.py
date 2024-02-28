/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

from Vehicle import Vehicle
# parking lot memiliki vehicle
class ParkingLot: # atribut private untuk parking lot
    __nama_parking_lot = ""
    __luas_parking_lot = 0
    __list_kendaraan = [] # atribut akan berisi list of object dari vehicle
    __kapasitas = 0
    __jumlah_kendaraan = 0
    
    # constructor
    def __init__(self, nama_parking_lot = "", luas_parking_lot = 0, kapasitas = 0, jumlah_kendaraan = 0):
        self.__nama_parking_lot = nama_parking_lot
        self.__luas_parking_lot = luas_parking_lot
        self.__list_kendaraan = []
        self.__kapasitas = kapasitas
        self.__jumlah_kendaraan = jumlah_kendaraan
    
    # getter dan setter
    def set_nama_parking_lot(self, nama_parking_lot): self.__nama_parking_lot = nama_parking_lot
    def get_nama_parking_lot(self): return self.__nama_parking_lot
    
    def set_luas_parking_lot(self, luas_parking_lot):  self.__luas_parking_lot = luas_parking_lot
    def get_luas_parking_lot(self): return self.__luas_parking_lot
    
    def add_list_kendaraan(self, daftar_kendaraan : Vehicle): # getter dan setter untuk list of objects
        self.__list_kendaraan.append(daftar_kendaraan)
        self.__jumlah_kendaraan = len(self.__list_kendaraan) # agar atribut jumlah kendaraan menghitung banyak kendaraan dari banyak isi list of object
    def get_list_kendaraan(self): return self.__list_kendaraan
    
    def set_kapasitas(self, kapasitas): self.__kapasitas = kapasitas
    def get_kapasitas(self): return self.__kapasitas
    
    def set_jumlah_kendaraan(self, jumlah_kendaraan): self.__jumlah_kendaraan = jumlah_kendaraan
    def get_jumlah_kendaraan(self): return self.__jumlah_kendaraan
    
