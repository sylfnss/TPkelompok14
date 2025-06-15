//input

#ifndef __input
#define __input
#include <fstream>
#include "../ktp.h"

class input{
  public:
    Ktp inputKTP(){
      Ktp ktp;

      cin.ignore();
      cout<<"Masukkan provinsi : ";
      getline(cin, this->provinsi);
      cout<<"Masukkan kab : ";
      getline(cin, this->kab);
      cout<<"Masukkan nik : ";
      getline(cin, this->nik);
      cout<<"Masukkan nama : ";
      getline(cin, this->nama);
      cout<<"Masukkan tptLahir : ";
      getline(cin, this->tptLahir);
      cout<<"Masukkan tglLahir : ";
      getline(cin, this->tglLahir);
      cout<<"Masukkan blnLahir : ";
      getline(cin, this->blnLahir);
      cout<<"Masukkan thnLahir : ";
      getline(cin, this->thnLahir);
      cout<<"Masukkan jk : ";
      getline(cin, this->jk);
      cout<<"Masukkan goldar : ";
      getline(cin, this->goldar);
      cout<<"Masukkan alamat : ";
      getline(cin, this->alamat);
      cout<<"Masukkan rt : ";
      getline(cin, this->rt);
      cout<<"Masukkan rw : ";
      getline(cin, this->rw);
      cout<<"Masukkan desa : ";
      getline(cin, this->desa);
      cout<<"Masukkan kec : ";
      getline(cin, this->kec);
      cout<<"Masukkan agama : ";
      getline(cin, this->agama);
      cout<<"Masukkan status : ";
      getline(cin, this->status);
      cout<<"Masukkan kerja : ";
      getline(cin, this->kerja);
      cout<<"Masukkan kn : ";
      getline(cin, this->kn);
      cout<<"Masukkan berlaku : ";
      getline(cin, this->berlaku);
      
      ktp.setProvinsi(provinsi);
      ktp.setKab(kab);
      ktp.setNik(nik);
      ktp.setNama(nama);
      ktp.setTptLahir(tptLahir);
      ktp.setTglLahir(tglLahir);
      ktp.setBlnLahir(blnLahir);
      ktp.setThnLahir(thnLahir);
      ktp.setJk(jk);
      ktp.setGoldar(goldar);
      ktp.setAlamat(alamat);
      ktp.setRt(rt);
      ktp.setRw(rw);
      ktp.setDesa(desa);
      ktp.setKec(kec);
      ktp.setAgama(agama);
      ktp.setStatus(status);
      ktp.setKerja(kerja);
      ktp.setKn(kn);
      ktp.setBerlaku(berlaku);
      tulisKTP(ktp);
      return ktp;
    }
    void tulisKTP(Ktp &obj){
      fstream tulis;
      tulis.open("KTP/" + nik + ".txt", ios::in|ios::out|ios::trunc);
      tulis<<obj.getProvinsi()<<"#"<<obj.getKab()<<"#"<<obj.getNik()<<"#"<<obj.getNama()<<"#"<<obj.getTptLahir()<<"#"<<obj.getTglLahir()<<"#"<<obj.getBlnLahir()<<"#"<<obj.getThnLahir()<<"#"<<obj.getJk()<<"#"<<obj.getGoldar()<<"#"<<obj.getAlamat()<<"#"<<obj.getRt()<<"#"<<obj.getRw()<<"#"<<obj.getDesa()<<"#"<<obj.getKec()<<"#"<<obj.getAgama()<<"#"<<obj.getStatus()<<"#"<<obj.getKerja()<<"#"<<obj.getKn()<<"#"<<obj.getBerlaku()<<"#"<<endl;
      tulis.close();
      tulis.open("KTP/DaftarKTP.txt", ios::out|ios::app);
      tulis<<obj.getProvinsi()<<"#"<<obj.getKab()<<"#"<<obj.getNik()<<"#"<<obj.getNama()<<"#"<<obj.getTptLahir()<<"#"<<obj.getTglLahir()<<"#"<<obj.getBlnLahir()<<"#"<<obj.getThnLahir()<<"#"<<obj.getJk()<<"#"<<obj.getGoldar()<<"#"<<obj.getAlamat()<<"#"<<obj.getRt()<<"#"<<obj.getRw()<<"#"<<obj.getDesa()<<"#"<<obj.getKec()<<"#"<<obj.getAgama()<<"#"<<obj.getStatus()<<"#"<<obj.getKerja()<<"#"<<obj.getKn()<<"#"<<obj.getBerlaku()<<"#"<<endl;
      tulis.close();
    }
  private:
    string provinsi;
    string kab;
    string nik;
    string nama;
    string tptLahir;
    string tglLahir;
    string blnLahir;
    string thnLahir;
    string jk;
    string goldar;
    string alamat;
    string rt;
    string rw;
    string desa;
    string kec;
    string agama;
    string status;
    string kerja;
    string kn;
    string berlaku;
};

#endif