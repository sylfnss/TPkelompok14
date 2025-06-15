#include <iostream>

using namespace std;

#define max 6
string dataEnqueue[max];
int Top = 0;


bool penuh(){
  if(Top >= max){
    return true;
  }else{
    return false;
  }
}

bool kosong(){
  if(Top == 0){
    return true;
  }else{
    return false;
  }
}

void view(){
  
  if(!kosong()){
    cout<<"Antrian saat ini "<<endl;
    for(int a = Top-1; a>=0; a--){
      cout << a+1 << ". "<<dataEnqueue[a]<<endl;
      
    }
  }else{
    cout<<"antrian kosong "<<endl;
  }
  if(penuh()){
    cout<<"antrian penuh"<<endl;
  }
  cout<<endl;
}

//Antrian Enqueue
void enqueue(){
  if(!penuh()){
    cout<<"masukan antrian : ";
    cin >> dataEnqueue[Top];
    Top++;
  }
}
//Antrian Enqueue

//Antrian Dequeue
void dequeue(){
  if(!penuh()){
    for(int a = 0; a < Top-1; a++ ){
      dataEnqueue[a] = dataEnqueue[a+1];      
    }
    Top--;
  }
}
//Antrian Enqueue
