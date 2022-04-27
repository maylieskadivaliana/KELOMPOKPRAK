
#include "base.h"
#include "proses.h"

void Stukas::input() {
  // Kode input disini
 // cout<<"Masukkan Jumlah Mahasiswa : ";
  //cin>>jum_mahasiswa;
  //for(int j=0; j<jum_mahasiswa;j++){
  cout << "Masukkan Nama Mahasiswa : ";
  cin >> nama_mahasiswa;
  cout << "Masukkan Jumlah Matkul : ";
  cin >> jum_matkul;
  //iteratif
  for (int i = 0; i < jum_matkul; i++) {
    cout << "Matkul " << i + 1 << "\t\t: ";
    //cin >> matkul[i];
    cin.ignore();
    getline(cin, matkul[i]);
    cout << "tugas " << i + 1 << "\t: ";
    cin >> tugas[i];
    cout << "uts " << i + 1 << "\t: ";
    cin >> uts[i];
    cout << "uas " << i + 1 << "\t: ";
    cin >> uas[i];
 // }  
  }
// Rekursif(masi sala)
/*void stukas::inputisi(int n){
if (n>0){
int i = n-1;
 cout << "Matkul " << "\t\t: ";
    cin.ignore();
    getline(cin, matkul[i]);
    cout << "tugas "  << "\t: ";
    cin >> tugas[i];
    cout << "uts "  << "\t: ";
    cin >> uts[i];
    cout << "uas " << "\t: ";
    cin >> uas[i];
}
inputisi(n-1);
}
  */
}
// tugas uts uas
void Stukas::output() {
  // Kode output disini
 // for (int j = 0; j < jum_mahasiswa; j++){
    cout << "\nNama\t: " << nama_mahasiswa <<endl;
   cout<<"================================================================"<< endl;
  cout << "Mata Kuliah\t" << "||" << "\tTugas\t" << "||" << "\tUTS\t" << "||" << "\tUAS\t" << "||" << "\tNilai Akhir\t" << endl;
cout<<"================================================================"<< endl;
  for (int i = 0; i < jum_matkul; i++) {
    cout << matkul[i] << "\t\t "<<"||";
    cout<< "\t" << tugas[i] << "\t"<<"||";
    cout << "\t" << uts[i] << "\t"<< "||";
    cout << "\t" << uas[i] << "\t"<< "||";
    cout << "\t" << akhir[i] << "\t" << endl;
  }
cout<<"================================================================"<< endl;
  cout << "Rata-Rata\t||";
  for (int i = 0; i < 4; i++) {
    cout <<"\t"<< rata[i] << "\t"<<"||";
  } 
  }
}
