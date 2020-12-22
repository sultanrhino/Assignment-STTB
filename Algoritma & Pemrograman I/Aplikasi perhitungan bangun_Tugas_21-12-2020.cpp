#include <iostream>

using namespace std;


void LuasPersegi() {
		
		int a;
    	float luas;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Persegi" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Panjang Sisi = ";
        cin >> a;
        luas = a*a;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Persegi adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasPersegiPanjang() {
		
		int a;
		int b;
    	float luas;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Persegi Panjang" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Panjang Sisi = ";
        cin >> a;
        cout << "Masukan Nilai Lebar Sisi = ";
        cin >> b;
        luas = a*b;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Persegi Panjang adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasSegitiga() {
		
		int a;
		int b;
    	float luas;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Segitiga" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Alas = ";
        cin >> a;
        cout << "Masukan Nilai Tingi = ";
        cin >> b;
        luas = a * b * 1/2;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Segitiga adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasLingkaran() {
		
		int a;
		int b;
    	float luas;
    	const float phi=3.14;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Lingkaran" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Jari-jari = ";
        cin >> a;
        luas = phi * a * a;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Lingkaran adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasBelahKetupat() {
		
		int a;
		int b;
    	float luas;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Belah Ketupat" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Diagonal 1 = ";
        cin >> a;
        cout << "Masukan Nilai Diagonal 2 = ";
        cin >> b;
        luas = a * b * 1/2;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Belah Ketupat adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasLayangLayang() {
		
		int a;
		int b;
    	float luas;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Layang - Layang" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Diagonal 1 = ";
        cin >> a;
        cout << "Masukan Nilai Diagonal 2 = ";
        cin >> b;
        luas = a * b * 1/2;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Layang - Layang adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasTrapesium() {
		
		int a;
		int b;
		int c;
    	float luas;
    	
  			cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas Trapesium" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai Sisi a = ";
        cin >> a;
        cout << "Masukan Nilai Sisi b = ";
        cin >> b;
        cout << "Masukan Nilai Tinggi = ";
        cin >> c;
        luas = (a + b) * c / 2;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Trapesium adalah= " << luas << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumeKubus() {
		
		int a;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Kubus" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai panjan sisi kubus (Rusuk) = ";
        cin >> a;
        
        volume = a*a*a;
        luas   = a*a*6;
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas kubus adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume Kubus adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumeBalok() {
		
		int a;
		int b;
		int c;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Balok" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai panjang sisi balok = ";
        cin >> a;
        cout << "Masukan Nilai lebar sisi balok = ";
        cin >> b;
        cout << "Masukan Nilai tinggi sisi balok = ";
        cin >> c;
        
        volume = a*b*c;
        luas = ((a * b) + (b * c) + (c * a)) * 2;
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas balok adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume balok adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumePrisma() {
		
		int a;
		int b;
		int c;
		int d;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Prisma" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai alas segitiga prisma = ";
        cin >> a;
        cout << "Masukan Nilai tinggi alas segitiga prisma = ";
        cin >> b;
        cout << "Masukan Nilai tinggi segitiga prisma = ";
        cin >> d;
        cout << "Masukan Nilai sisi lengkung segitiga prisma = ";
        cin >> c;
        
        volume = ( a * b /2 ) * d ;
        luas = (2 * (a * b / 2 )) + ((a + b + c) * d);
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas prisma adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume prisma adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumeLimas() {
		
		int a;
		int b;
		int c;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Limas S4" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai panjang alas limas = ";
        cin >> a;
        cout << "Masukan Nilai lebar alas limas = ";
        cin >> b;
        cout << "Masukan Nilai tinggi limas = ";
        cin >> c;
        
        volume = (a * b * c * 1/3);
        luas = ((a + b) * c) + (a * b);
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Limas adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume limas adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumeTabung() {
		
		int a;
		int b;
		const float phi=3.14;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Tabung" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai panjang jari-jari tabung = ";
        cin >> a;
        cout << "Masukan Nilai tinggi tabung = ";
        cin >> b;
        
        volume = phi * a * a * b;
        luas = (phi * a * 2) * (b * a);
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Tabung adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume Tabung adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumeKerucut() {
		
		int a;
		int b;
		int c;
		const float phi=3.14;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Kerucut" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai panjang jari-jari alas kerucut = ";
        cin >> a;
        cout << "Masukan Nilai tinggi kerucut = ";
        cin >> b;
        cout << "Masukan Nilai garis lingkar kerucut = ";
        cin >> c;
        
        volume = (phi * a * a * b)/3;
        luas = (phi * a * (a + c));
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas kerucut adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume kerucut adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

void LuasVolumeBola() {
		
		int a;
		const float phi=3.14;
    	float luas;
    	float volume;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Anda Memilih Fungsi Menghitung Luas & Volume Bola" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "Masukan Nilai panjang jari-jari bola = ";
        cin >> a;
        
        volume = 4/3 * phi * a * a * a;
        luas = 4 * phi * a * a;
        
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "Nilai Luas Bola adalah= " << luas << endl;
        cout << endl;
        cout << "Nilai Volume Bola adalah= " << volume << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}


int main() {
	
		
		double pilihan;
		
  		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "++++++++++++ Sekolah Tinggi Teknologi Bandung ++++++++++++++\n";
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		cout << "Program Mencari Luas & Volume Mengunakan Functions C++(Void)\n";
  		cout << "+ Dibuat untuk melengkapi tugas Individu 21 Desember 2020  +\n";
  		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		cout << "Nama    : Bima Maarschal Rizky Kurnia Fallah\n";
  		cout << "NPM     : 20552011107\n";
  		cout << "Kelas   : TIF RP 20-A\n";
  		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		
        cout << endl;
        cout << "----------------------------------------\n";
        cout << "Nomor pilihan menu program bagun datar: "<< endl;
        cout << "----------------------------------------\n";
        cout << endl;
        cout << "| 1 | Persegi "<< endl;
        cout << "| 2 | Persegi Panjang"<< endl;
        cout << "| 3 | Segitiga"<< endl;
        cout << "| 4 | Lingkaran"<< endl;
        cout << "| 5 | Belah Ketupat"<< endl;
        cout << "| 6 | Layang - Layang"<< endl;
        cout << "| 7 | Trapesium"<< endl;
        cout << endl;
        cout << "----------------------------------------\n";
        cout << "Nomor pilihan menu program bangun ruang: "<< endl;
        cout << "----------------------------------------\n";
        cout << endl;
        cout << "| 11 | Kubus "<< endl;
        cout << "| 22 | Balok"<< endl;
        cout << "| 33 | Prisma"<< endl;
        cout << "| 44 | Limas"<< endl;
        cout << "| 55 | Tabung"<< endl;
        cout << "| 66 | Kerucut"<< endl;
        cout << "| 77 | Bola"<< endl;
        cout << endl;
        
		cout << "Silahkan masukkan angka pilihan anda: ";
		cin >> pilihan;
        
        
        
        if (pilihan == 1){
        	LuasPersegi();
		}else if(pilihan == 2){
			LuasPersegiPanjang();
		}else if (pilihan == 3){
        	LuasSegitiga();
		}else if (pilihan == 4){
        	LuasLingkaran();
		}else if (pilihan == 5){
        	LuasBelahKetupat();
		}else if (pilihan == 6){
        	LuasLayangLayang();
		}else if (pilihan == 7){
        	LuasTrapesium();
		}else if (pilihan == 11){
        	LuasVolumeKubus();
		}else if (pilihan == 22){
        	LuasVolumeBalok();
		}else if (pilihan == 33){
        	LuasVolumePrisma();
		}else if (pilihan == 44){
        	LuasVolumeLimas();
		}else if (pilihan == 55){
        	LuasVolumeTabung();
		}else if (pilihan == 66){
        	LuasVolumeKerucut();
		}else if (pilihan == 77){
        	LuasVolumeBola();
		}
		
		
		
  
  return 0;
}
