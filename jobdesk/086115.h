#ifndef __proses
#define __proses
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void tulisPendaftaran(char tipePengguna, string nik, string password){
  fstream data;
  switch(tipePengguna){
    case '1':
      data.open("admin/" + nik + ".txt", ios::out|ios::trunc);        
      data<<password<<endl;
      data.close();
      break;
    case '2':
      data.open("user/" + nik + ".txt", ios::out|ios::trunc);
      data<<password<<endl;        
      data.close();
      break;
  }
}

class proses {
public:
  void bacaKTP(string nik) { 
    data.open("KTP/" + nik + ".txt");
    while(getline(data, buffer, '#')){
      hasilBaca.push_back(buffer);
    }
    data.close();
    for(auto &x : hasilBaca){
      cout<<x<<endl;
    }
  }
  bool cekKTP(string nik){
    data.open("KTP/" + nik + ".txt");
    if(data.is_open()){
      return 1;
    }
    data.close();
    return 0;
  }

private:
  string buffer;
  vector<string> hasilBaca;
  fstream data;
};

#endif