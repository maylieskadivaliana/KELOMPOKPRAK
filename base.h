#ifndef _INPUT_H
#define _INPUT_H

#include <iostream>
#include "io.h"
#include "proses.h"
using namespace std;

class Stukas {

private:
	int jum_matkul, jum_mahasiswa;
  string nama_mahasiswa[20];
		//array
  float tugas[20], uts[20], uas[20], akhir[20], rata[4];
  string matkul[20];
public:
  void input();
  //void inputisi(int n);
  void output();
  void proses();

  
};

#endif
