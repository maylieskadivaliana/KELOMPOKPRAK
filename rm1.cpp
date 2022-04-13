#include <iostream>
#include<conio.h>
using namespace std;

class rm{
		friend istream& operator >> (istream&, rm& rm);
		friend ostream& operator << (ostream&, const rm&);
	private:
		int makanan, x, harga, ongkir, y, total, jarak, age, ugo, ago, cugo, aba, ayamgeprek, ayamgoreng, udanggoreng, cumigoreng, ayambakar, jml;
		string nama;
		
	public:
	void daftarmenu();
	void hitung();
	void ongkir();
	void hitungmkn();

};

istream& operator >> (istream& in, rm&z){
	cout<<"=========================================================";
	cout << "\nmasukkan nama pembeli : ";
	in >> rm.nama;
	return in;
}

void rm::daftarmenu(){
	cout<<"Daftar Makanan";
	cout<<"\n1. Ayam Geprek 		21000";
	cout<<"\n2. Ayam Goreng		17000";
	cout<<"\n3. Udang Goreng		19000";
	cout<<"\n4. Cumi Goreng		20000";
	cout<<"\n5. Ayam Bakar		25000";
}

void rm::hitungmkn(){
	cout<<"\n Masukkan Jumlah pesanan yang akan dipesan: (input 5)";
	cin>>jml;
	
	for(int i=0; i<jml; i++){
  	cout<<"\n Masukkan Pesanan:";
	cin>>makanan;
	if(makanan==1){
			cout<<"Jumlah pesanan Ayam Geprek : ";
			cin>>ayamgeprek;
			}
	else if(makanan == 2){
			cout<<"Jumlah pesanan Ayam Goreng : ";
			cin>>ayamgoreng;
			}
	else if(makanan == 3){
			cout<<"Jumlah pesanan Udang Goreng : ";
			cin>>udanggoreng;
		}
	else if(makanan == 4){
			cout<<"Jumlah pesanan Cumi Goreng : ";
			cin>>cumigoreng;
		}
	else if(makanan == 5){
			cout<<"Jumlah pesanan Ayam Bakar : ";
			cin>>ayambakar;
		}
	}
}

void rm::hitung(){
		x = (ayamgeprek *21000) + (ayamgoreng * 17000) + (udanggoreng * 19000) + (cumigoreng * 20000) + (ayambakar + 25000);
		
		if (x<=25000){
		total=x+ongkir;
		} else if (x >= 25000) {
        total = (ongkir - 3000) + x;
		} else if (x >= 50000){
		total = (ongkir - 5000) + (x - (x*15/100));
     	} 
		else if(x >= 150000){
		total = (ongkir - 8000) + (x-(x*35/100));
		}
}	

void rm :: ongkir(){
      cout<<"\nmasukkan jarak : ";
	    cin>>jarak;
			cout<< "Menghitung Ongkir";
			if (jarak <= 3){
			ongkir = 15000;
			} else {
			ongkir = 25000;
			}
      cout << "Biaya Ongkir: Rp" << ongkir;
}

friend ostream& operator << (ostream&, const rm&);

int main(){
	rm a;
	cin>>a;
	a.mkn();
	a.bebas();
	a.hitung();
  	getch();
}
