
#include "base.h"
#include "io.h"


void Stukas::proses() {
  //Cari nilai akhir, 20% tugas + 35% uts + 45% uas
  for (int i = 0; i < jum_matkul; i++) {
    akhir[i] = (0.2 * tugas[i]) + (0.35 * uts[i]) + (0.45 * uas[i]);
  }

  //Set nilai pada rata[] menjadi 0
  for (int i = 0; i < 4; i++) {
    rata[i] = 0;
  }
  
  //Menambah isi dari array tugas,uts,uas,akhir ke dalam rata[]
  for (int i = 0; i < jum_matkul; i++) {
    rata[0] += tugas[i];
    rata[1] += uts[i];
    rata[2] += uas[i];
    rata[3] += akhir[i];
  }

  //Membagi array rata dengan jum_matkul agar hasil rata-ratanya didapat
  for (int i = 0; i < 4; i++) {
    rata[i] /= jum_matkul;
  }
}

/*
proses:
akhir[0] = (20% * tug[0]) + (35% * uts[0]) + (45% * uas[0])
rata[4];
rata[0] = (tug[0] + tug[1]) / jum_matkul
rata[1] = (uts[0] + uts[1]) / jum_matkul
rata[2] = (uas[0] + uas[1]) / jum_matkul
rata[3] = (akhir[0] + ahkir[1]) / jum_matkul
*/
