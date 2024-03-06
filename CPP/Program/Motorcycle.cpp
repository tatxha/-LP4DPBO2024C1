/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#pragma once
#include <bits/stdc++.h>
#include "Vehicle.cpp"
using namespace std;

class Motorcycle : public Vehicle
{
    // private attributes
    private :
        string jenis_motor;
        int kapasitas_tangki;

    // constructor
    public:
        Motorcycle()
        {

        }

        Motorcycle(string jenis_motor, int kapasitas_tangki, string plat_nomor, string merk, int tahun_produksi, string warna) : Vehicle(plat_nomor, merk, tahun_produksi, warna)
        {
            this->jenis_motor = jenis_motor;
            this->kapasitas_tangki = kapasitas_tangki;
        }

        // getter dan setter
        void set_jenis_motor(string jenis_motor)
        {
            this->jenis_motor = jenis_motor;
        }
        void set_kapasitas_tangki(int kapasitas_tangki)
        {
            this->kapasitas_tangki = kapasitas_tangki;
        }

        string get_jenis_motor(){ return this->jenis_motor; }
        int get_kapasitas_tangki(){ return this->kapasitas_tangki; }

    // destructor
    ~Motorcycle(){}
};

