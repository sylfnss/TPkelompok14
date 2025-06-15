#ifndef __dll
#define __dll
#include<iostream>
#include "node.h"
#include "jobdesk/086.h"

Node<Baju> *head;
Node<Baju> *tail;
Node<Baju> *jalan;
Node<Baju> *temp;
Node<Baju> *hapus;

template <typename T>
class DoublyLinkedList{
  public:

    void add(T data){
      Node<T> *temp = new Node<T>();
        if(head == 0){
            head = new Node<T>();
            head = calo(data);
            tail = head;
            return;
        }
        temp = calo(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }

    void remove(){
      hapus = tail;
      tail = tail->prev;
      tail->next = 0;
      hapus->prev = 0;
      delete hapus;
    }

    void clearList(){
      for(jalan = head; jalan != 0;){
        hapus = jalan;
        jalan = jalan->next;
        delete hapus;
      }
      head = 0;
      tail = 0;
    }

    void cetakMaju(){
      int a = 1;
      for(jalan = head; jalan != 0; jalan = jalan->next){
        std::cout<<a<<"."<<jalan->data<<std::endl;
        a++;
      }
    }
    void cetakMundur(){
      int a = 1;
      for(jalan = tail; jalan != 0; jalan = jalan->prev){
        std::cout<<a<<"."<<jalan->data<<std::endl;
        a++;
      }
    }

    int getLen(){
        int n = 0;
        for(jalan = head; jalan != 0; jalan = jalan->next){
            n++;
        }
        return n;
    }
  private:
  
  Node<T> *calo(T &data){
    Node<T> *temp = new Node<T>();
    temp->data = data;
    temp->next = 0;
    temp->prev = 0;
    return temp;
  }

};
#endif