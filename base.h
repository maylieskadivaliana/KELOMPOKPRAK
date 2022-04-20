#ifndef _BASE_H
#define _BASE_H

#include <iostream>

using namespace std;

class Stukas {

private:
	int jum_matkul, jum_sks, bayar;
  string nama, nim;

  //Array
  int sks[20];
  string matkul[20];
  
public:
  void input();
  void output();
  void proses();

  void hitungSKS(int s[], int n, int &hasil); //Fungsi rekursif
};

void Stukas::input() {
  //Kode input disini
  cout<<"Masukkan Nama Mahasiswa\t\t: ";
  cin>>nama;
  cout<<"Masukkan NIM Mahasiswa\t\t: ";
  cin>>nim;
  cout<<"Banyak Mata Kuliah yang diambil\t: ";
  cin>>jum_matkul;
  cout << "Masukkan Daftar Mata Kuliah:\n";
    for (int i = 0; i < jum_matkul; i++) {
      cout << "Matkul " << i + 1 << "\t\t: ";
      cin >> matkul[i];
      cout << "SKS Matkul " << i+1<<"\t: ";
      cin>> sks[i];
    }
}

void Stukas::output() {
  //Kode output disini
  cout<<"+++++++++++++++++++++++++++++++++++++++++++++++";
  cout<<"\nNama Mahasiswa              : "<<nama;
  cout<<"\nNIM Mahasiswa               : "<<nim;
  cout<<"\nMata Kuliah yang diambil    : " <<jum_matkul;
  cout<<"\n-----------------------------------------------";
  for (int i = 0; i < jum_matkul; i++) {
      cout<<"\nMata Kuliah\t: " << matkul[i] <<endl;
      cout<<"SKS Matkul\t: "<< sks[i]<<endl;
    }
  cout<<"\nTotal SKS\t: "<<jum_sks;
  cout<<"\n-----------------------------------------------";
  cout<<"\nBiaya per SKS = Rp.150000";
  cout<<"\nTotal Bayar   = Rp."<<bayar;
  cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++";
  }
  
  void Stukas::proses() {
  jum_sks = 0;
  bayar = 0;
  hitungSKS(sks, jum_matkul, jum_sks);

  bayar = (jum_sks * 150000) * 0.75;
}

//rekursif dengan base n = 0
void Stukas::hitungSKS(int s[], int n, int &hasil) {
  if (n > 0) {
    hasil += s[n - 1];
    
    hitungSKS(s, n - 1, hasil);
  }
}

#endif
