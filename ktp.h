#ifndef __ktp
#define __ktp
#include <iostream>
using namespace std;

class Ktp{

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

  public:
    void setProvinsi(string provinsi) {
      this->provinsi = provinsi; 
    } 
    string getProvinsi() { 
      return this->provinsi;
    }
    void setKab(string kab) { 
      this->kab = kab; 
    } 
    string getKab() { 
      return this->kab;
    }
    void setNik(string nik) { 
      this->nik = nik; 
    } 
    string getNik() { 
      return this->nik;
    }
    void setNama(string nama) { 
      this->nama = nama; 
    } 
    string getNama() { 
      return this->nama;
    }
    void setTptLahir(string tptLahir) { 
      this->tptLahir = tptLahir; 
    } 
    string getTptLahir() { 
      return this->tptLahir;
    }
    void setTglLahir(string tglLahir) { 
      this->tglLahir = tglLahir; 
    } 
    string getTglLahir() { 
      return this->tglLahir;
    }
    void setBlnLahir(string blnLahir) { 
      this->blnLahir = blnLahir; 
    } 
    string getBlnLahir() { 
      return this->blnLahir;
    }
    void setThnLahir(string thnLahir) { 
      this->thnLahir = thnLahir; 
    } 
    string getThnLahir() { 
      return this->thnLahir;
    }
    void setJk(string jk) { 
      this->jk = jk; 
    } 
    string getJk() { 
      return this->jk;
    }
    void setGoldar(string goldar) { 
      this->goldar = goldar; 
    } 
    string getGoldar() { 
      return this->goldar;
    }
    void setAlamat(string alamat) { 
      this->alamat = alamat; 
    } 
    string getAlamat() { 
      return this->alamat;
    }
    void setRt(string rt) { 
      this->rt = rt; 
    } 
    string getRt() { 
      return this->rt;
    }
    void setRw(string rw) { 
      this->rw = rw; 
    } 
    string getRw() { 
      return this->rw;
    }
    void setDesa(string desa) { 
      this->desa = desa; 
    } 
    string getDesa() { 
      return this->desa;
    }
    void setKec(string kec) { 
      this->kec = kec; 
    } 
    string getKec() { 
      return this->kec;
    }
    void setAgama(string agama) { 
      this->agama = agama; 
    } 
    string getAgama() { 
      return this->agama;
    }
    void setStatus(string status) { 
      this->status = status; 
    } 
    string getStatus() { 
      return this->status;
    }
    void setKerja(string kerja) { 
      this->kerja = kerja; 
    } 
    string getKerja() { 
      return this->kerja;
    }
    void setKn(string kn) { 
      this->kn = kn; 
    } 
    string getKn() { 
      return this->kn;
    }
    void setBerlaku(string berlaku) { 
      this->berlaku = berlaku; 
    } 
    string getBerlaku() { 
      return this->berlaku;
    }

};

#endif