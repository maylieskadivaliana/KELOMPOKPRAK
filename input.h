#ifndef _INPUT_H
#define _INPUT_H

#include <iostream>

using namespace std;

class Stukas {

private:
	int uang_saku, total_keluar, keluar_bulan, bulan, total_uang;
  int uang_sisa[];
		
public:
  void input();
  void output();

  void SetZero();
  void HitungTotal();
  void HitungSisa();
  //void HitungSisaR(int n);
};

void Stukas::input() {
  //Kode input sini
  cout<<"Masukkan Uang Saku Perbulan = Rp.";
  cin>> uang_saku;
  cout<<"\nMasukkan Selama Berapa bulan diberi uang = ";
  cin>> bulan;
  cout<<"\nUang Sisa Perbulan:\n";
    for(int i = 0; i < bulan; i++){
        cout<< "Bulan ke- " << i + 1 << " Sisa = Rp.";
        cin>>uang_sisa[i];
    } 
}

#endif
