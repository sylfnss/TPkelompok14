#ifndef __array1d
#define __array1d
#include<iostream>

using namespace std;

template<typename T>
class Array1D{
  friend std::ostream &operator<<(std::ostream &out, Array1D<T> &obj){
    for(int a = 0; a < obj.getSize(); a++){
      out<<a+1<<". "<<obj.array[a]<<endl;
    }
    return out;
  }
  public:
    Array1D(int ukuran){
      this->ukuran = ukuran;
      array = new T[this->ukuran];
    }

    T &operator[](int indeks){
      return array[indeks];
    }

    int getSize(){
      return this->ukuran;
    }

    Array1D &resize(int ukuran){
      delete []array;
      this->ukuran = ukuran;
      this->array = new T[this->ukuran];
      return *this;
    }

  private:
    T *array;
    int ukuran;
};

#endif