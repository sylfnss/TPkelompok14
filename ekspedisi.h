#include <iostream>
#include <fstream>
#include <vector>
#include "jobdesk/086.h"

using namespace std;

class olshop{
    
    public :

    void kota_tujuan();
    void dataDiri();
    void ekspedisi();
    void provinsi();
    void output(std::vector<Baju> &, int, int);

    private :
    ofstream file;
    string nama,alamat,jasa,pilih_kota,pil_prov,jk;
    int jnt,jne,kota,jasa_kirim,ulang,prov;

};

void olshop::ekspedisi(){
  cout<<"Ekspedisi Pengiriman"<<endl;
	cout<<"1.JNE"<<endl;
	cout<<"2.JNT"<<endl;
  cout<<"3.Sicepat"<<endl<<endl;
	cout<<"Silahkan pilih ekspedisi pengiriman yang anda inginkan : ";
	cin>>jasa_kirim;
	switch(jasa_kirim) {
    
    case 1:
    jasa = "JNE";
    cout<< "JNE"<<endl;
    break;

    case 2 :
    jasa = "JNT";
    cout<<"JNT"<<endl;
    break;

    case 3 :
    jasa = "SICEAPAT";
    cout<<"SICEPAT"<<endl;
    break;
    
    default:
    cout<<"Pilihan tidak tersedia ";
}
}
void olshop::provinsi(){
   cout<<"============================================================="<<endl;
	cout<<"=====                    Provinsi Tujuan                 ====="<<endl;
	cout<<"============================================================="<<endl;
	cout<<"== 1. Nanggroe Aceh Darussalam       2. Sumatera Selatan   =="<<endl;
	cout<<"== 3. Sumatera Utara                 4. Sumatera Barat     =="<<endl;
  cout<<"== 5. Bengkulu                       6. Riau               =="<<endl;
  cout<<"== 7. Lampung                        8. Kep. Riau          =="<<endl;
  cout<<"== 9. Jambi                          10. Banten            =="<<endl;
  cout<<"== 11. Jawa Tengah                   12. Jawa Barat        =="<<endl;
  cout<<"== 13. Jawa Timur                    14. D.I Yogyakarta    =="<<endl;
  cout<<"== 15. Nusa Tenggara Timur           16. NusaTenggara Barat=="<<endl;
  cout<<"== 17. Kalimantan Tengah             18. Kalimantan Timur  =="<<endl;
  cout<<"== 19. Kalimantan Selatan            20. Maluku Utara      =="<<endl;
  cout<<"== 21. Sulawesi Selatan              22. Gorontalo         =="<<endl;
	cout<<"============================================================="<<endl<<endl;
	cout<<"pilih provinsi : ";
	cin>>prov;

  switch(prov){
    
    //Nanggroe Aceh Darussalam
    case 1:
      pil_prov = "Nanggroe Aceh Darussalam";
      cout<<"Nanggroe Aceh Darussalam"<<endl;
      break;
    //Nanggroe Aceh Darussalam
    
    //Sumatera Selatan
     case 2:
      pil_prov = "Sumatera Selatan ";
      cout<<"Sumatera Selatan"<<endl;
      break;
    //Sumatera Selatan

    //Sumatera Utara
     case 3:
      pil_prov = "Sumatera Utara ";
      cout<<"Sumatera Utara "<<endl;
      break;
    //Sumatera Utara

    //Sumatera Barat
     case 4:
      pil_prov = "Sumatera Barat";
      cout<<"Sumatera Barat"<<endl;
      break;
    //Sumatera Barat

    //Bengkulu
     case 5:
      pil_prov = "Bengkulu   ";
      cout<<"Bengkulu   "<<endl;
      break;
    //Bengkulu

    //Riau
     case 6:
      pil_prov = "Riau";
      cout<<"Riau"<<endl;
      break;
    //Riau

      //Lampung
     case 7:
      pil_prov = "Lampung";
      cout<<"Lampung"<<endl;
      break;
    //Lampung

    //Kep. Riau
     case 8:
      pil_prov = "Kep. Riau";
      cout<<"Kep. Riau"<<endl;
      break;
    //Kep. Riau

    //Jambi
     case 9:
      pil_prov = "Jambi ";
      cout<<"Jambi "<<endl;
      break;
    //Jambi

    //Banten
     case 10:
      pil_prov = "Banten";
      cout<<"Banten"<<endl;
      break;
    //Banten

    //Jawa Tengah
     case 11:
      pil_prov = "Jawa Tengah";
      cout<<"Jawa Tengah"<<endl;
      break;
    //Jawa Tengah

    //Jawa Barat
     case 12:
      pil_prov = "Jawa Barat ";
      cout<<"Jawa Barat "<<endl;
      break;
    //Jawa Barat

    //Jawa Timur
     case 13:
      pil_prov = "Jawa Timur ";
      cout<<"Jawa Timur "<<endl;
      break;
    //Jawa Timur

    //D.I Yogyakarta
     case 14:
      pil_prov = "D.I Yogyakarta  ";
      cout<<"D.I Yogyakarta  "<<endl;
      break;
    //D.I Yogyakarta

    //Nusa Tenggara Timur
     case 15:
      pil_prov = "Nusa Tenggara Timur ";
      cout<<"Nusa Tenggara Timur "<<endl;
      break;
    //Nusa Tenggara Timur

    //Nusa Tenggara Barat
     case 16:
      pil_prov = "Nusa Tenggara Barat";
      cout<<"NusaTenggara Barat"<<endl;
      break;
    //Nusa Tenggara Barat

    //Kalimantan Tengah
     case 17:
      pil_prov = "Kalimantan Tengah";
      cout<<"Kalimantan Tengah"<<endl;
      break;
    //Kalimantan Tengah

    //kalimantan timur
     case 18:
      pil_prov = "kalimantan timur";
      cout<<"kalimantan timur"<<endl;
      break;
    //kalimantan timur

    //kalimantan selatan
     case 19:
      pil_prov = "kalimantan selatan";
      cout<<"kalimantan selatan"<<endl;
      break;
    //kalimantan selatan

    //Maluku Utara
     case 20:
      pil_prov = "Maluku Utara";
      cout<<"Maluku Utara"<<endl;
      break;
    //Maluku Utara

    //Sulawesi Selatan
    case 21:
      pil_prov = "Sulawesi Selatan ";
      cout<<"Sulawesi Selatan "<<endl;
      break;
    //Sulawesi Selatan

    //Gorontalo
    case 22:
      pil_prov = " Gorontalo";
      cout<<" Gorontalo"<<endl;
      break;
    //Gorontalo
  
  }
  
}

void olshop::kota_tujuan(){
  
  cout<<"============================================================="<<endl;
	cout<<"=====                    Kota Tujuan                    ====="<<endl;
	cout<<"============================================================="<<endl;
	cout<<"== 1. Jakarta                        3. Surabaya           =="<<endl;
	cout<<"== 2. Bandung                        4. Yogyakarta         =="<<endl;
  cout<<"== 5. Bogor                          6. Semarang           =="<<endl;
  cout<<"== 7. Bekasi                         8. Malang             =="<<endl;
  cout<<"== 9. Bali                           10. Lombok            =="<<endl;
  cout<<"== 11. Aceh                          12. Palembang         =="<<endl;
  cout<<"== 13. Medan                         14. Pekanbaru         =="<<endl;
  cout<<"== 15. Batam                         16. Jambi             =="<<endl;
  cout<<"== 17. Lampung                       18. Makassar          =="<<endl;
  cout<<"== 19. Ternate                       20. Banjarmasin       =="<<endl;
  cout<<"== 21. Manado                        22. Palangkaraya      =="<<endl;
  cout<<"== 23. Padang                        24. Karimun           =="<<endl;
  cout<<"== 25. Tangerang                     26. Solo              =="<<endl;
  cout<<"== 27. Kediri                        28. Jombang           =="<<endl;
  cout<<"== 29. Purwodadi                     30. Flores            =="<<endl;
  cout<<"== 31. Trenggalek                    32. Samarinda         =="<<endl;
  cout<<"== 33. Gorontalo                     34. Nias              =="<<endl;
  cout<<"== 35. Madura                        36. Pasuruan          =="<<endl;
  cout<<"== 37. Wonosobo                      38. Sragen            =="<<endl;
  cout<<"== 39. Cirebon                       40. Depok             =="<<endl;
	cout<<"============================================================="<<endl<<endl;
	cout<<"Kota yang tempat tinggal : ";
	cin>>kota;
	switch(kota) {
    
     //jakarta
		case 1 :
      pilih_kota = "jakarta";
      cout<<"Jakarta"<<endl;
			break;
    //jakarta

    //bandung
		case 2 :
      pilih_kota = "Bandung";
      cout<<"Bandung"<<endl;
			break;
    //bandung

    //surabaya
		case 3 :
      pilih_kota = "Surabaya";
			cout<<"Surabaya"<<endl;
			break;
    //surabaya

    //Yogyakarta
		case 4 :
      pilih_kota = "Yogyakarta";
			cout<<"Yogyakarta"<<endl;
			break;
    //Yogyakarta

    //Bogor
    case 5 :
      pilih_kota = "Bogor";
			cout<<"Bogor"<<endl;
      break;
    //Bogor

    //semarang
    case 6 :
      pilih_kota = "Semarang";
			cout<<"Semarang"<<endl;
			break;
    //semarang

    //bekasi
    case 7 :
      pilih_kota = "Bekasi";
			cout<<"Bekasi"<<endl;
			break;
    //bekasi
    
    //malang
     case 8 :
      pilih_kota = "Malang";
			cout<<"Malang"<<endl;
			break;
    //malang

    //bali
     case 9 :
      pilih_kota = "Bali";
			cout<<"Bali"<<endl;
			break;
    //bali

    //lombok
		 case 10 :
      pilih_kota = "Lombok";
			cout<<"Lombok"<<endl;
			break;
    //lombok

    //aceh
     case 11 :
      pilih_kota = "Aceh";
			cout<<"Aceh"<<endl;
			break;
    //aceh

    //palembang
     case 12 :
      pilih_kota = "Palembang";
			cout<<"Palembang"<<endl;
			break;
    //palembang

    //medan
     case 13 :
      pilih_kota = "Medan";
			cout<<"Medan"<<endl;
			break;
    //medan

    //pekanbaru
     case 14 :
      pilih_kota = "Pekanbaru";
			cout<<"Pekanbaru"<<endl;
			break;
    //pekanbaru

    //batam
     case 15 :
      pilih_kota = "Batam";
			cout<<"Batam"<<endl;
			break;
    //batam

    //jambi
     case 16 :
      pilih_kota = "Jambi";
			cout<<"Jambi"<<endl;
			break;
    //jambi

    //lampung
     case 17 :
      pilih_kota = "Lampung";
			cout<<"Lampung"<<endl;
			break;
    //lampung

    //lampung
     case 18 :
      pilih_kota = "Makassar";
			cout<<"Makassar"<<endl;
			break;
    //lampung

    //ternate
     case 19 :
      pilih_kota = "Ternate";
			cout<<"Ternate"<<endl;
			break;
    //ternate

    //banjarmasin
     case 20 :
      pilih_kota = "Banjarmasin";
			cout<<"Banjarmasin"<<endl;
			break;
    //banjarmasin

    //manado
    case 21 :
      pilih_kota = "Manado";
			cout<<"Manado"<<endl;
			break;
    //manado

    //palangkaraya
    case 22 :
      pilih_kota = "Palangkaraya";
			cout<<"Palangkaraya"<<endl;
			break;
    //palangkaraya

    //padang
    case 23 :
      pilih_kota = "Padang";
			cout<<"Padang"<<endl;
			break;
    //padang

    //karimun
    case 24 :
      pilih_kota = "Karimun";
			cout<<"Karimun"<<endl;
			break;
    //karimun
    
    //tanggerang
    case 25 :
      pilih_kota = "Tangerang";
			cout<<"Tangerang"<<endl;
			break;
    //tanggereang

    //solo
    case 26 :
      pilih_kota = "Solo";
			cout<<"Solo"<<endl;
			break;
    //solo

    //kediri
    case 27 :
      pilih_kota = "Kediri";
			cout<<"Kediri"<<endl;
			break;
    //kediri
    
    //jombang
    case 28 :
      pilih_kota = "Jombang";
			cout<<"Jombang"<<endl;
			break;
    //jombang

    //purwodadi
    case 29 :
      pilih_kota = "Purwodadi";
			cout<<"Purwodadi"<<endl;
			break;
    //purwodadi

    //flores
    case 30 :
      pilih_kota = "Flores";
			cout<<"Flores"<<endl;
			break;
    //flores
    
    //tranggalek
    case 31 :
      pilih_kota = "Trenggalek";
			cout<<"Trenggalek"<<endl;
			break;
    //tranggalek

    //samarinda
    case 32 :
      pilih_kota = "Samarinda";
			cout<<"Samarinda"<<endl;
			break;
    //samarinda

    //gorontalo
    case 33 :
      pilih_kota = "Gorontalo";
			cout<<"Gorontalo"<<endl;
			break;
    //gorontalo
    
    //nias
    case 34 :
      pilih_kota = "Nias";
			cout<<"Nias"<<endl;
			break;
    //nias
    
    //madura    
    case 35 :
      pilih_kota = "Madura";
			cout<<"Madura"<<endl;
			break;
    //madura

    //pasuruan
    case 36 :
      pilih_kota = "Pasuruan";
			cout<<"Pasuruan"<<endl;
			break;
    //pasuruan

    //wonosobo
    case 37 :
      pilih_kota = "Wonosobo";
			cout<<"Wonosobo"<<endl;
			break;
    //wonosobo

    //sragen
    case 38 :
      pilih_kota = "Sragen";
			cout<<"Sragen"<<endl;
			break;
    //sragen

    //cirebon
    case 39 :
      pilih_kota = "Cirebon";
			cout<<"Cirebon"<<endl;
			break;
    //cirebon

    //depok
    case 40 :
      pilih_kota = "Depok";
			cout<<"Depok"<<endl;
			break;
    //depok
    
    
    default:
    cout<<"Pilihan tidak tersedia ";
	}
}

void olshop::dataDiri(){
  
  cout<<endl;
	cout<<"Data Diri Pemesan"<<endl;
	cout<<"Nama   : ";
	cin>>nama;
	cout<<"Alamat : ";
	cin>>alamat;
  cout<<"jenis kelamin : ";
  cin>>jk;
	cout<<endl;
  
}

void olshop::output(std::vector<Baju> &ukur, int bayar, int kembalian) {
	file.open("struk.txt");
	
	file<<"============================================================="<<endl;
	file<<"=====                  Struk Pembelian                  ====="<<endl;
	file<<"============================================================="<<endl;
	
    file<<"Nama              : "<<nama<<endl;
    file<<"Alamat            : "<<alamat<<endl;
    file<<"jenis kelamin     : "<<jk<<endl;
    file<<"Jasa pengiriman   : "<<jasa<<endl;
    file<<"Provinsi          : "<<pil_prov<<endl;
    file<<"Kota              : "<<pilih_kota<<endl;
    file<<"Baju yang dipilih : ";
    int a = 1;
    for(auto &x : ukur){
      file<<a<<". "<<x.nama<<"\t"<<x.ukuran<<"\t"<<x.harga<<endl;
      a++;
    }
    file<<"Bayar             : "<<bayar<<endl;
    file<<"Kembalian         : "<<kembalian<<endl;
    
}
