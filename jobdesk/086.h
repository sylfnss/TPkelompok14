 //Tampilan

#ifndef __081
#define __081
#include <iostream>
#include <vector>

using namespace std;

struct Baju{
  string nama;
  string ukuran;
  int harga;
  int stok;
  friend ostream &operator<<(ostream &out, Baju &obj){
    cout<<obj.nama<<" "<<obj.ukuran<<"\t Rp. "<<obj.harga;
    return out;
  }
};

void invoice(string nama, vector<Baju> &ukur, int bayar, int kembalian){
  cout<<"Nama User : "<<nama<<endl;
  cout<<"Baju yang dipilih : "<<endl;
  int a = 1;
  for(auto &x : ukur){
    cout<<a<<". "<<x.nama<<"\t"<<x.ukuran<<"\t"<<x.harga<<endl;
    a++;
  }
  cout<<"Bayar : "<<bayar<<endl;
  cout<<"Kembalian : "<<kembalian<<endl;
}

bool hargaDesc(const Baju &x, const Baju &y){
  return x.harga > y.harga;
}

bool hargaAsc(const Baju &x, const Baju &y){
  return x.harga < y.harga;
}

#endif