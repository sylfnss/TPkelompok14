
#include <iostream>
using namespace std;

#define max 6
string dataStack[max];
int top = 0;

bool isEmpty(){
    if(top >= max){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(top >= max){
        return true;
    }else {
        return false;
    }
}

void display(){
    if(!isEmpty()){
        cout<<"shift hari ini : "<<endl;
        for(int a = 0; a < top; a++){
            cout<< a + 1 << ". " << dataStack[a]<<endl;
        }
        
        if(isFull()){
            cout<<"stack penuh "<<endl;
        }
    } 
    cout<<endl;
}


void push(){
    if(!isFull()){
        cout<<"masukkan nama pelayan : ";
        cin>>dataStack[top];
        top++;
    }
}

void pop(){
    if(!isEmpty()){
        top--;
    }
}
