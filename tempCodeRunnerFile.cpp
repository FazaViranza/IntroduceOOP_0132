#include <iostream>
using namespace std;

class Mahasiswa{
 public:
 int nim;
 string nama;
 float nilai;

 void PrintData(){
    cout << "Nim : " << nim << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nilai : " << nilai << endl;
 }

};
int main (){
    Mahasiswa mhs;

    mhs.nim = 132;
    mhs.nama = "Zaa";
    mhs.nilai = 85.5;

    mhs.PrintData();
}