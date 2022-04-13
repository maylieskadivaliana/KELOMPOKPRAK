#ifndef _OUTPUT_H
#define _OUTPUT_H

#include "input.h"

void Stukas::output() {
  cout<<"\n\nHitung Uang Bulanan Andi:";
  cout<<"\nTotal Uang Andi = Rp. "<<total_uang;
  cout<<"\nUang Tabungan Saat ini = Rp. "<<total_keluar;
  
  cout << "\nTotal pengeluaran = Rp. " << keluar_bulan;
  cout << "\nPengeluaran tiap bulan:\n";
    for (int i = 0; i < bulan; i++) {
      cout << "Bulan ke-" << i + 1 << "= Rp. " << uang_sisa[i] << endl;
    }
  
}
#endif

