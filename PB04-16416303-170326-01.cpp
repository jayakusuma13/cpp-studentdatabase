// NIM/Nama : M. Qodir Ibrahim Jayakusuma
// Nama file :  PB04-16416303-170326-01
// Tanggal : 26 Maret 2017
// Deskripsi : Program Hasil UTS

#include <iostream>
using namespace std;

int main(){
    //variabel
    int x,i,j;
    int cari;
    typedef struct{
        int nim; int nilai;
        }siswa;
    siswa daftar[10];

    cout << "Masukan jumlah mahasiswa : ";
    cin >> x;

    //daftarkan input ke array
    for(i=1;i<=x;i++){
        cout << "Masukan nim mahasiswa " << i << " : ";
        cin >> daftar[i].nim;
        cout << "Masukan nilai mahasiswa " << i << " : ";
        cin >> daftar[i].nilai;
    };

    while(true){
    //cari siswa di daftar
    cout << "Masukan nim mahasiswa : ";
    cin >> cari;

    //akhiri program
    if(cari == -1){
        return 0;
    }

    //looping untuk mencari yang sesuai
    for(j=1;j<=x;j++){
        if(daftar[j].nim == cari){
            cout << "Nilai mahasiswa " << cari << " adalah "<< daftar[j].nilai;
        };
    };

    };




}
