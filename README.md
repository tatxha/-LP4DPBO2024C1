# -LP4DPBO2024C1


# Janji

Saya Tattha Maharany Yasmin Akbar dengan NIM 2201805 mengerjakan Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Desain Program 
![diagram_LP4DPBOC1 png](https://github.com/tatxha/-LP4DPBO2024C1/assets/134766457/758e130e-0191-4e91-aef5-20092317fcb0)

Program terdiri dari 4 class yaitu **ParkingLot**, **Vehicle**, **Car**, dan **MotorCycle**

Didalam class **ParkingLot** memiliki 5 Atribut, yaitu : 
* Nama Parking Lot
* Luas Parking Lot
* List Kendaraan yang mengisi parking lot tersebut
* Kapasitas dari parking lot
* Jumlah Kendaraan yang mengisi parking lot tersebut

**`Class ParkingLot memiliki Class Vehicle (Composite)`**
Didalam class **Vehicle** memiliki 4 Atribut, yaitu : 
* Nomor Plat dari kendaraan
* Merk kendaraan
* Tahun Produksi kendaraan
* Warna kendaraan

**`Class Car adalah child dari Class Vehicle (Inheritance)`**
Didalam class **Car** memiliki 2 Atribut, yaitu : 
* Jumlah Kursi yang ada pada mobil
* Jumlah Pintu yang ada pada mobil

**`Class MotorCycle adalah child dari Class Vehicle (Inheritance)`**
Didalam class **MotorCycle** memiliki 2 Atribut, yaitu : 
* Jenis Motor
* Kapasitas Tangki dari motor

## Alur Program
- Pertama mengisi data `Car` secara statis pada file main.cpp
- Lalu, mengisi data `MotorCycle` juga secara statis
- Data Car dan MotorCycle dimasukkan ke dalam vector list_kendaraan
- Lalu, mengisi data `ParkingLot` dan memilih list_kendaraan mana yang akan berada di parking lot tersebut
- Tampilkan data secara keseluruhan dan lengkap agar dapat mengetahui data data kendaraan apa saja yang ada pada setiap parking lot

## Dokumentasi 

### Dokumentasi Python
<img width="370" alt="Screenshot 2024-03-06 194420" src="https://github.com/tatxha/-LP4DPBO2024C1/assets/134766457/8286da26-9adb-492b-b1ef-2b1518b2320e">

### Dokumentasi CPP
<img width="485" alt="Screenshot 2024-03-06 194329" src="https://github.com/tatxha/-LP4DPBO2024C1/assets/134766457/2e6c5336-6650-4605-afc2-1dd5b116d2a0">
