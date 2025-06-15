#include <iostream>
using namespace std;


// siapin ruang antrian
struct antrianCeo{
  // data / member
  string nama;
  int umur;

  // pointer next
  antrianCeo *next;
};

int maksimalAntrianLinkedList = 5;
antrianCeo *pala, *tali, *cur, *del, *newNode;

// count Linked List
int countLinkedList()
{
  if( pala == NULL ){
    return 0;
  }else{
    int banyak = 0;
    cur = pala;
    while( cur != NULL ){
      cur = cur->next;
      banyak++;
    }
    return banyak;
  }
}

// isFull Linked List
bool isFullLinkedList()
{
  if( countLinkedList() == maksimalAntrianLinkedList ){
    return true;
  }else{
    return false;
  }
}

// isEmpty Linked List
bool isEmptyLinkedList()
{
  if( countLinkedList() == 0 ){
    return true;
  }else{
    return false;
  }
}

// enqueue / penambahan
void enqueueLinkedList( string nama, int umur ){

  if( isFullLinkedList() ){
   std:: cout << "Antrian Penuh!!!" << endl;
  }else{
    
    if( isEmptyLinkedList() ){
      pala = new antrianCeo();
      pala->nama = nama;
      pala->umur = umur;
      pala->next = NULL;
      tali = pala;
    }else{
      newNode = new antrianCeo();
      newNode->nama = nama;
      newNode->umur = umur;
      newNode->next = NULL;
      tali->next = newNode;
      tali = newNode;
    }

  }

}

// dequeue Linked List
void dequeueLinkedList()
{
  if( isEmptyLinkedList() ){
    cout << "Data Antrian Kosong!!" << endl;
  }else{
    del = pala;
    pala = pala->next;
    del->next = NULL;
    delete del;
  }
}

// destroy / clear
void clearLinkedList()
{
  if( isEmptyLinkedList() ){
    std::cout << "Data Antrian Kosong!!" << endl;
  }else{
    cur = pala;
    while( cur != NULL ){
      del = cur;
      cur = cur->next;
      del->next = NULL;
      delete del;
    }
    pala = NULL;
    tali = NULL;
  }
}



// display Linked List
void displayLinkedList()
{
  cout << "Data CEO kemari : " << endl;
  if( isEmptyLinkedList() ){
    cout << "Tidak ada CEO masuk!!" << endl;
  }else{
    cout << "Banyak CEO masuk : " << countLinkedList() << endl;
    cur = pala;
    int nomor = 1;
    while( nomor <= maksimalAntrianLinkedList ){
      
      if( cur != NULL ){
        cout << nomor << ". " << cur->nama << " - " << cur->umur << " tahun." << endl;
        cur = cur->next;
      }else{
        cout << nomor << ". " << "(kosong)" << endl;
      }

      nomor++;
    }

  }

  std::cout << "\n" << endl;

}

