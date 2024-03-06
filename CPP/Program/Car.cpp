/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Vehicle.cpp"

class Car : public Vehicle
{
    // private attributes
    private :
        int jumlah_kursi;
        int jumlah_pintu;
    // constructor
    public :
        Car()
        {

        }  
        // Konstruktor
        Car(int jumlah_kursi, int jumlah_pintu, string plat_nomor, string merk, int tahun_produksi, string warna) : Vehicle(plat_nomor, merk, tahun_produksi, warna) 
        {
            this->jumlah_kursi = jumlah_kursi;
            this->jumlah_pintu = jumlah_pintu;
        }

        // Getter dan setter
        void set_jumlah_kursi(int jumlah_kursi) { this->jumlah_kursi = jumlah_kursi; }
        int get_jumlah_kursi() { return jumlah_kursi; }

        void set_jumlah_pintu(int jumlah_pintu) { this->jumlah_pintu = jumlah_pintu; }
        int get_jumlah_pintu() { return jumlah_pintu; }

        //  destructor
        ~Car(){}
};
