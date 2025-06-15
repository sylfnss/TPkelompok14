#include <iostream>
using namespace std;

class plg {
private:
  string nama, line, ig, jk;
  char ret;

public:
  void det();
};

void plg::det() {
  plg alip, dudung , jojo, dika, romi, siska, afiq, kiko, koko, ika, wawa, faiz, kiting, ari, akki;



    // alip
  alip.nama = "alip";
  alip.ig = "@juent12";
  alip.line = "@alip12";
  alip.jk = "Laki-laki";
  // alip

  // dudung
  dudung.nama = "dudung";
  dudung.ig = "@dudung";
  dudung.line = "@dudung";
  dudung.jk = "Laki-laki";
  // dudung

   // afiq
  afiq.nama = "afiq";
  afiq.ig = "@afiqkaya";
  afiq.line = "@afiqqq";
  afiq.jk = "Laki-laki";
  // prayteno

   // jojo
  jojo.nama = "jojo";
  jojo.ig = "@_jojonn";
  jojo.line= "@jojo23";
  jojo.jk = "laki-laki";
  // jojo

   // dika
  dika.nama = "dika";
  dika.ig = "@dika";
  dika.line = "@dika";
  dika.jk = "Laki-laki";
  // dika
 
   // romi
  romi.nama = "romi";
  romi.ig = "@romi_aj";
  romi.line = "@romi";
  romi.jk = "Laki-laki";
  // romi

   // siska
  siska.nama = "siska";
  siska.ig = "@tantar_";
  siska.line = "@siskaa";
  siska.jk = "Laki-laki";
  // siska

   // kiko
  kiko.nama = "kiko";
  kiko.ig = "@kiko";
  kiko.line = "@kiko43";
  kiko.jk = "Laki-laki";
  // kiko

   // koko
  koko.nama = "koko";
  koko.ig = "@koko";
  koko.line = "@koko_";
  koko.jk = "Laki-laki";
  // tanjung

   // ika
  ika.nama = "ika";
  ika.ig = "@ikalolo";
  ika.line = "@ika00";
  ika.jk = "Laki-laki";
  // ika

   // wawa
  wawa.nama = "wawa";
  wawa.ig = "@wawa44";
  wawa.line = "@wawaaa";
  wawa.jk = "Laki-laki";
  // wawa

   // faiz
  faiz.nama = "faiz";
  faiz.ig = "@faiz";
  faiz.line = "@faiz33";
  faiz.jk = "Laki-laki";
  // faiz

   // kiting
  kiting.nama = "kiting";
  kiting.ig = "@kiting";
  kiting.line = "@kiting99";
  kiting.jk = "Laki-laki";
  // kiting

  // akki
  akki.nama = "akki";
  akki.ig = "@akki";
  akki.line = "@akki44";
  akki.jk = "Laki-laki";
  // akki

  // ari
  ari.nama = "ari";
  ari.ig = "@ari_";
  ari.line = "@ariii";
  ari.jk = "Laki-laki";
  // ari

  


  int pil; 
  cout << endl << "1. " << alip.nama << endl;
  cout << endl << "2. " << dudung.nama << endl;
  cout << endl << "3. " << jojo.nama << endl;
  cout << endl << "4. " << dika.nama << endl;
  cout << endl << "5. " << romi.nama << endl;
  cout << endl << "6. " << siska.nama << endl;
  cout << endl << "7. " << afiq.nama << endl;
  cout << endl << "8. " << kiko.nama << endl;
  cout << endl << "9. " << koko.nama << endl;
  cout << endl << "10. " << ika.nama << endl;
  cout << endl << "11. " << wawa.nama << endl;
  cout << endl << "12. " << faiz.nama << endl;
  cout << endl << "13. " << kiting.nama << endl;
  cout << endl << "14. " << akki.nama << endl;
  cout << endl << "15. " << ari.nama << endl<<endl;

  cout << "Cek Profil : ";
  cin >> pil;
  cout<<endl;
  
  switch (pil) {
  case 1:
    cout << "Nama : " << alip.nama << endl
         << "instagram : " << alip.ig << endl
         << "line : " << alip.line << endl
         << "Jenis kelamin : " << alip.jk << endl<<endl;
    break;
    
  case 2:
    cout << "Nama : " << dudung.nama << endl
         << "instagram : " << dudung.ig << endl
         << "line : " << dudung.line << endl
         << "Jenis kelamin : " << dudung.jk << endl<<endl;;
    break;

    case 3:
    cout << "Nama : " << jojo.nama << endl
         << "instagram : " << jojo.ig << endl
         << "line : " << jojo.line << endl
         << "Jenis kelamin : " << jojo.jk << endl<<endl;
    break;
    
    case 4:
    cout << "Nama : " << dika.nama << endl
         << "instagram : " << dika.ig << endl
         << "line : " << dika.line << endl
         << "Jenis kelamin : " << dika.jk << endl<<endl;
    break;
    
    case 5:
    cout << "Nama : " << romi.nama << endl
         << "instagram : " << romi.ig << endl
         << "line : " << romi.line << endl
         << "Jenis kelamin : " << romi.jk << endl<<endl;
    break;

    case 6:
    cout << "Nama : " << siska.nama << endl
         << "instagram : " << siska.ig << endl
         << "line : " << siska.line << endl
         << "Jenis kelamin : " << siska .jk << endl<<endl;
    break;

    case 7:
    cout << "Nama : " << afiq.nama << endl
         << "instagram : " << afiq.ig << endl
         << "line : " << afiq.line << endl
         << "Jenis kelamin : " << afiq.jk << endl<<endl;
    break;

    case 8:
    cout << "Nama : " << kiko.nama << endl
         << "instagram : " << kiko.ig << endl
         << "line : " << kiko.line << endl
         << "Jenis kelamin : " << kiko.jk << endl<<endl;
    break;

    case 9:
    cout << "Nama : " << koko.nama << endl
         << "instagram : " << koko.ig << endl
         << "line : " << koko.line << endl
         << "Jenis kelamin : " << koko.jk << endl<<endl;
    break;

    case 10:
    cout << "Nama : " << ika.nama << endl
         << "instagram : " << ika.ig << endl
         << "line : " << ika.line << endl
         << "Jenis kelamin : " << ika.jk << endl<<endl;
    break;

    case 11:
    cout << "Nama : " << wawa.nama << endl
         << "instagram : " << wawa.ig << endl
        << "line : " << wawa.line << endl
         << "Jenis kelamin : " << wawa.jk << endl<<endl;
    break;

    case 12:
    cout << "Nama : " << faiz.nama << endl
         << "instagram : " << faiz.ig << endl
         << "line : " << faiz.line << endl
         << "Jenis kelamin : " << faiz.jk << endl<<endl;
    break;

    case 13:
    cout << "Nama : " << kiting.nama << endl
         << "instagram : " << kiting.ig << endl
         << "line : " << kiting.line << endl
         << "Jenis kelamin : " << kiting.jk << endl<<endl;
    break;

    case 14:
    cout << "Nama : " << akki.nama << endl
         << "instagram : " << akki.ig << endl
         << "line : " << akki.line << endl
         << "Jenis kelamin : " << akki.jk << endl<<endl;
    break;

    case 15:
    cout << "Nama : " << ari.nama << endl
         << "instagram : " << ari.ig << endl
         << "line : " << ari.line << endl
         << "Jenis kelamin : " << ari.jk << endl<<endl;
    break;


    default:
    cout<<"data tidak tersedia"<<endl<<endl;
    
  }
}