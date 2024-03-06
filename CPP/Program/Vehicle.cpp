/* 
    Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan soal Latihan 4
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#pragma once
#include <bits/stdc++.h>
using namespace std;

class Vehicle 
{
    private:
        string plat_nomor;
        string merk;
        int tahun_produksi;
        string warna;

    public:
        Vehicle()
        {

        }
        // Constructor
        Vehicle(string plat_nomor, string merk, int tahun_produksi, string warna) {
            this->plat_nomor = plat_nomor;
            this->merk = merk;
            this->tahun_produksi = tahun_produksi;
            this->warna = warna;
        }

        // Setter methods
        void set_plat_nomor(string plat_nomor) { this->plat_nomor = plat_nomor; }
        void set_merk(string merk) { this->merk = merk; }
        void set_tahun_produksi(int tahun_produksi) { this->tahun_produksi = tahun_produksi; }
        void set_warna(string warna) { this->warna = warna; }

        // Getter methods
        string get_plat_nomor() { return plat_nomor; }
        string get_merk() { return merk; }
        int get_tahun_produksi() { return tahun_produksi; }
        string get_warna() { return warna; }

        // polymorphism
        virtual int get_jumlah_kursi(){
            return -2;
        }

        virtual int get_jumlah_pintu(){
            return -2;
        }

        virtual string get_jenis_motor(){
            return "";
        }

        virtual int get_kapasitas_tangki(){
            return -2;
        }
    // destructor
    ~Vehicle(){}
};