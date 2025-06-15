//jadi pada bagian ini adalah untuk pertanyaan dan jawaban pada fitur fitur yang ada di sini 

#include <iostream>
using namespace std;

class qna {
private:

  char ulang;

public:
  void Detail();
};

void qna::Detail() {
  cuy:
  int pil;
  
  cout <<"1. Bagaimana cara menggunakan Voucher Diskon saat checkout? "<< endl;
  cout <<"2. apakah kita bisa melihat antrian kita  "<< endl;
  cout <<"3. bagaimana cara mengantri ?"<<endl;
  cout <<"4. Bagaimana cara mencari produk ? "<<endl;
  cout <<"5. Bagaimana cara checkout barang ?"<<endl;
  cout <<"6. Apa saja jasa kirim yang tersedia di aplikasi ?"<<endl;
  cout <<"7. Bagaimana cara mendapatkan struk untuk pesanan saya?"<<endl;
  cout<<"0. Kembali"<<endl;
  cout<<endl;
  cout << "pilih : ";
  cin >> pil;
  
  switch (pil) {
    
  case 1:
    cout << "Voucher toko bisa didapatkan apabila total pembelanjaan sebesar 10%. Jika Anda memenuhi ketentuan penggunaan Voucher Toko, maka Voucher tersebut akan secara otomatis diterapkan ketika pembayaran."<<endl<<endl;
    goto cuy;
    break;

    case 2:
    cout << "jika ingin melihat antrian kita ada pada 'Antrian.txt'"<<endl<<endl;
    goto cuy;
    break;

    case 3:
    cout <<"1.login sebagai user"<<endl;
    cout <<"2.kemudian kemenu antrian dan masukan antrian"<<endl;
    cout <<"3.jika ingin mengambil antrian ketikkan 1 jika sudah mengantri ketik 2 "<<endl<<endl;
      goto cuy;
    break;

    case 4 :
      cout<<"Untuk mencari produk kami adalah dengan pilih nomer 2  maka akan muncul daftar produk dari toko kami."<<endl<<endl;
    goto cuy;
      
    break;
    
    case 5 :
      cout<<"Cara checkout barang adalah dengan memilih baju yang mana akan dipilih lalu menuju ke menu bayar setelah itu masukkan uang sesuai jumlah yang dibayar."<<endl<<endl;
      goto cuy;
    break;

    case 6 :
    cout<<"Untuk jasa pengiriman yang tersedia di aplikasi ada JNT,JNE,dan Sicepat.";
      cout<<"untuk memilih pengiriman kita klik menu bayar lalu pilih jasa pengiriman apa yang akan kita inginkan"<<endl;
      goto cuy;
    break;

    case 7 :
    cout <<"Struk adalah dokumen yang menunjukkan bahwa pembayaran telah dilakukan untuk produk yang dibeli. ";
  cout<<"Anda dapat melihat Struk Pesanan dengan cara pilih list struk.txt nanti akan muncul data pesanan yang dibeli."<<endl<<endl;
    goto cuy;
    
    default:
    cout<<"pilihan tidak tersedia"<<endl<<endl;
    
  }
}