#ifndef _PROSES_H
#define _PROSES_H

#include "input.h"

void Stukas::SetZero() {
  keluar_bulan = 0;
  total_uang = 0;
}

//Iteratif:
void Stukas::HitungSisa() {
  for (int i = 0; i < bulan; i++) {
    keluar_bulan += uang_sisa[i];
  }
}

//Rekursif:
/*
void Stukas::HitungSisaR(int n) {
  if (n > 0) {
    keluar_bulan += uang_sisa[n];
    HitungSisaR(n - 1);
  }
}
*/

void Stukas::HitungTotal() {
  total_uang = bulan * uang_saku;
  total_keluar = total_uang - keluar_bulan;
}

#endif
