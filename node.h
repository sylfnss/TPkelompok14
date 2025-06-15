#ifndef __node
#define __node
#include "dll.h"

template<typename T>
class Node{

  public:
    T data;
    Node<T> *next;
    Node<T> *prev;

};


#endif
