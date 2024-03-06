/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#include <bits/stdc++.h>
#include "ParkingLot.cpp"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
using namespace std;

int main()
{
    // Mengisi data secara statis
    Car car1(8, 6, "BA12AS78", "Hyundai", 2017, "Hitam");
    Car car2(6, 4, "BA34DS78", "Avanza", 2018, "Putih");
    Car car3(2, 2, "BA90AS28", "Brio", 2019, "Abu-Abu");

    Motorcycle motor1("Skuter", 15, "BK12SA9", "Vario", 2020, "Putih");
    Motorcycle motor2("Bebek", 10, "SA12OP2", "Beat", 2021, "Merah");
    Motorcycle motor3("Klasik", 8, "SQ12SA89", "Beat", 2022, "Hijau");

    vector<Vehicle*> list_kendaraan1{&car1, &car2, &motor1};
    vector<Vehicle*> list_kendaraan2{&car3, &motor2, &motor3};
    // Memasukkan kendaraan ke parking lot
    ParkingLot parkinglot1("Apart-A", 300, list_kendaraan1, 30, 0);
    ParkingLot parkinglot2("Apart-B", 200, list_kendaraan2, 20, 0);

    vector<ParkingLot> listparkinglot = {parkinglot1, parkinglot2};

    // Menampilkan isi parking lot
    for (auto parkiran : listparkinglot) {
        cout << "Nama Parking Lot : " << parkiran.get_nama_parking_lot() << endl;
        cout << "Luas Parking Lot : " << parkiran.get_luas_parking_lot() << " m" << endl;
        cout << "Kapasitas        : " << parkiran.get_kapasitas() << endl;
        cout << "Jumlah Kendaraan : " << parkiran.get_jumlah_kendaraan() << endl;
        cout << "Daftar Kendaraan : " << endl;
        for (auto kendaraan : parkiran.get_list_kendaraan())
        {

            Car* car = dynamic_cast<Car*>(kendaraan);
            if(car)
            {
                cout << "  Daftar Mobil : " << endl;
                cout << "    - Plat Nomor       : " << kendaraan->get_plat_nomor() << endl;
                cout << "    - Merk             : " << kendaraan->get_merk() << endl;
                cout << "    - Tahun Produksi   : " << kendaraan->get_tahun_produksi() << endl;
                cout << "    - Warna            : " << kendaraan->get_warna() << endl;
                cout << "    - Jumlah Kursi     : " << kendaraan->get_jumlah_kursi() << endl;
                cout << "    - Jumlah Pintu     : " << kendaraan->get_jumlah_pintu() << endl;
            }
            else
            {
                cout << "  Daftar Motor : " << endl;
                cout << "    - Plat Nomor       : " << kendaraan->get_plat_nomor() << endl;
                cout << "    - Merk             : " << kendaraan->get_merk() << endl;
                cout << "    - Tahun Produksi   : " << kendaraan->get_tahun_produksi() << endl;
                cout << "    - Warna            : " << kendaraan->get_warna() << endl;
                cout << "    - Jenis Motor      : " << kendaraan->get_jenis_motor() << endl;
                cout << "    - Kapasitas Tangki : " << kendaraan->get_kapasitas_tangki() << endl;
            }
            cout << endl;
            
        }
        cout << endl;
    }

    return 0;
}
