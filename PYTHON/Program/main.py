/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from ParkingLot import ParkingLot

# mengisi data secara statis
car1 = Car(8, 6, "BA12AS78", "Hyundai", 2017, "Hitam")
car2 = Car(6, 4, "BA34DS78", "Avanza", 2018, "Putih")
car3 = Car(2, 2, "BA90AS28", "Brio", 2019, "Abu-Abu")

motor1 = Motorcycle("Skuter", 15, "BK12SA9", "Vario", 2020, "Putih")
motor2 = Motorcycle("Bebek", 10, "SA12OP2", 2021, "Merah")
motor3 = Motorcycle("Klasik", 8, "SQ12SA89", "Beat", 2022, "Hijau")

parkinglot1 = ParkingLot("Apart-A", 300, 30, 0)
# memasukan kendaraan ke parking lot
parkinglot1.add_list_kendaraan(car1)
parkinglot1.add_list_kendaraan(car2)
parkinglot1.add_list_kendaraan(motor1)

# memasukan kendaraan ke parking lot
parkinglot2 = ParkingLot("Apart-B", 200, 20, 0)
parkinglot2.add_list_kendaraan(car3)
parkinglot2.add_list_kendaraan(motor2)
parkinglot2.add_list_kendaraan(motor3)

listparkinglot = [parkinglot1, parkinglot2]

# menampilkan isi parking lot
for parkir in listparkinglot:
    print("Nama Parking Lot : ", parkir.get_nama_parking_lot())
    print("Luas Parking Lot : ", parkir.get_luas_parking_lot(), " m")
    print("Kapasitas        : ", parkir.get_kapasitas())
    print("Jumlah Kendaraan : ", parkir.get_jumlah_kendaraan())
    print("Daftar Kendaraan : ")
    
    # menampilkan daftar kendaraan
    for kendaraan in parkir.get_list_kendaraan():
        if isinstance(kendaraan, Car): # jika mobil
            print("   Mobil :")
            print("      - Plat Nomor      :", kendaraan.get_plat_nomor())
            print("      - Merk            :", kendaraan.get_merk())
            print("      - Tahun Produksi  :", kendaraan.get_tahun_produksi())
            print("      - Warna           :", kendaraan.get_warna())
            print("      - Jumlah Kursi    :", kendaraan.get_jumlah_kursi())
            print("      - Jumlah Pintu    :", kendaraan.get_jumlah_pintu())
        elif isinstance(kendaraan, Motorcycle): # jika motorcycle
            print("   Motor :")
            print("      - Plat Nomor      :", kendaraan.get_plat_nomor())
            print("      - Merk            :", kendaraan.get_merk())
            print("      - Tahun Produksi  :", kendaraan.get_tahun_produksi())
            print("      - Warna           :", kendaraan.get_warna())
            print("      - Jenis Motor     :", kendaraan.get_jenis_motor())
            print("      - Kapasitas Tangki:", kendaraan.get_kapasitas_tangki())
            
    print("\n")

    
