#include <iostream>
#include <curses.h>

using namespace std;

    string garis = "----------------------------";
    string nama, kategori;
    int nilai, *poin_nilai;

void kategori_nilai(int n){
    
    if (n >= 90 && n <=100)
    {
        kategori = "A";
    } else if (n >= 80 && n < 90)
    {
        kategori = "B";
    } else if (n >= 70 && n < 80)
    {
        kategori = "C";
    } else if (n >= 60 && n < 70)
    {
        kategori = "D";
    } else if (n >= 50 && n < 60)
    {
        kategori = "E";
    } else if (n < 50)
    {
        kategori = "Tidak Lulus";
    } else
    {
        cout << "Kategori tidak ada atau nilai tidak sesuai !";
    }
}

int main(){
    cout << garis << endl;
    cout << "           Tugas 2          " << endl;
    cout << garis << endl;

    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan Nilai : ";
    cin >> nilai;
    poin_nilai = &nilai;

    kategori_nilai(nilai);

    cout << endl;
    cout << garis << endl;
    cout << "            Hasil           " << endl;
    cout << garis << endl;

    cout << "Nama : " << nama << endl << 
    "Nilai : " << *poin_nilai << endl << 
    "Kategori Nilai : " << kategori << endl;

}