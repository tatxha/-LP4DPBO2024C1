/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/


#pragma once
#include <bits/stdc++.h>
#include "Vehicle.cpp"
using namespace std;

class ParkingLot
{
    // private attributes
    private:
        string nama_parking_lot;
        int luas_parking_lot;
        vector<Vehicle*> list_kendaraan;
        int kapasitas;
        int jumlah_kendaraan;

    // constructor
    public:
        ParkingLot()
        {

        }
        ParkingLot(string nama_parking_lot, int luas_parking_lot, vector<Vehicle*> list_kendaraan, int kapasitas, int jumlah_kendaraan)
        {
            this->nama_parking_lot = nama_parking_lot;
            this->luas_parking_lot = luas_parking_lot;
            this->list_kendaraan = list_kendaraan;
            this->kapasitas = kapasitas;
            this->jumlah_kendaraan = list_kendaraan.size();;
        }

        // getter dan setter
        void set_nama_parking_lot(string nama_parking_lot){this->nama_parking_lot = nama_parking_lot;}

        void set_luas_parking_lot(int luas_parking_lot){this->luas_parking_lot = luas_parking_lot;}
        
        void set_list_kendaraan(vector<Vehicle*> list_kendaraan) 
        {
            this->list_kendaraan = list_kendaraan;
            this->jumlah_kendaraan = list_kendaraan.size();
        }
        vector<Vehicle*> get_list_kendaraan()
        {
            return this->list_kendaraan;
        }

        void add_list_kendaraan(Vehicle* kendaraan) 
        {
            this->list_kendaraan.push_back(kendaraan);
            jumlah_kendaraan = list_kendaraan.size();
        }
        void set_kapasitas(int kapasitas){this->kapasitas = kapasitas;}

        void set_jumlah_kendaraan(int jumlah_kendaraan){this->jumlah_kendaraan = jumlah_kendaraan;}

        string get_nama_parking_lot(){return this->nama_parking_lot;}
        int get_luas_parking_lot(){return this->luas_parking_lot;}
        int get_kapasitas(){return this->kapasitas;}
        int get_jumlah_kendaraan(){return this->jumlah_kendaraan;}
    
    // Destructor
    ~ParkingLot(){}
};
