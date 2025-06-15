#include <iostream>
using namespace std;

class Driver {
private:
  string nama, umur, pengalamanBekerja, jk;
  char ulang;

public:
  void setDetail();
};

void Driver::setDetail() {
  Driver mamat, alka, prayetno, ara, haris, yoman;

  // mamat
  mamat.nama = "Mamat";
  mamat.umur = "30 Tahun";
  mamat.pengalamanBekerja = "7 Tahun";
  mamat.jk = "Laki-laki";
  // mamat

  // alka
  alka.nama = "alka";
  alka.umur = "80 Tahun";
  alka.pengalamanBekerja = "20 Tahun";
  alka.jk = "Laki-laki";
  // alka

   // prayetno
  prayetno.nama = "prayetno";
  prayetno.umur = "20 Tahun";
  prayetno.pengalamanBekerja = "2 Tahun";
  prayetno.jk = "Laki-laki";
  // prayteno

   // ara
  ara.nama = "Ara";
  ara.umur = "21 Tahun";
  ara.pengalamanBekerja= "4 Tahun";
  ara.jk = "perempuan";
  // ara

   // haris
  haris.nama = "Haris";
  haris.umur = "24 Tahun";
  haris.pengalamanBekerja = "5 Tahun";
  haris.jk = "Laki-laki";
  // haris

   // yoman
  yoman.nama = "yoman";
  yoman.umur = "30 Tahun";
  yoman.pengalamanBekerja = "20 Tahun";
  yoman.jk = "Laki-laki";
  // yoman

  
  
  int pil; 
  cout << endl << "1. " << mamat.nama << endl;
  cout << endl << "2. " << alka.nama << endl;
  cout << endl << "3. " << prayetno.nama << endl;
  cout << endl << "4. " << ara.nama << endl;
  cout << endl << "5. " << haris.nama << endl;
  cout << endl << "6. " << yoman.nama << endl;
  cout << "Cek Profil : ";
  cin >> pil;
  cout<<endl;
  
  switch (pil) {
  case 1:
    cout << "Nama : " << mamat.nama << endl
         << "Umur : " << mamat.umur << endl
         << "Pengalaman bekerja : " << mamat.pengalamanBekerja << endl
         << "Jenis kelamin : " << mamat.jk << endl<<endl;
    break;
    
  case 2:
    cout << "Nama : " << alka.nama << endl
         << "Umur : " << alka.umur << endl
         << "Pengalaman bekerja : " << alka.pengalamanBekerja << endl
         << "Jenis kelamin : " << alka.jk << endl<<endl;;
    break;

    case 3:
    cout << "Nama : " << prayetno.nama << endl
         << "Umur : " << prayetno.umur << endl
         << "Pengalaman bekerja : " << prayetno.pengalamanBekerja << endl
         << "Jenis kelamin : " << prayetno.jk << endl<<endl;
    break;
    
    case 4:
    cout << "Nama : " << ara.nama << endl
         << "Umur : " << ara.umur << endl
         << "Pengalaman bekerja : " << ara.pengalamanBekerja << endl
         << "Jenis kelamin : " << ara.jk << endl<<endl;
    break;
    
    case 5:
    cout << "Nama : " << haris.nama << endl
         << "Umur : " << haris.umur << endl
         << "Pengalaman bekerja : " << haris.pengalamanBekerja << endl
         << "Jenis kelamin : " << haris.jk << endl<<endl;
    break;

    case 6:
    cout << "Nama : " << yoman.nama << endl
         << "Umur : " << yoman.umur << endl
         << "Pengalaman bekerja : " << yoman.pengalamanBekerja << endl
         << "Jenis kelamin : " << yoman .jk << endl<<endl;
    break;


    default:
    cout<<"data tidak tersedia"<<endl<<endl;
    
  }
}