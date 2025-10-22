#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MAX 5
template<typename T>
class Queue{
    T a[MAX];
    int front = 0; int rear = -1;
    public:
    void menu();
    void insert();
    void remove();
    void display();
};
template<typename T>
void Queue<T> :: menu(){
int ch;


while(true){
    cout << "ENTER YOUR CHOICE : "<< endl;
    cout << "1.) INSERT , 2.)REMOVE , 3.)DISPLAY" << endl;
    cin >> ch;
    if(ch==1)
    insert();
    else if(ch==2)
    remove();
    else if(ch==3)
    display();
    else
    break;
}
}
template<typename T>
void Queue<T> :: insert(){
 if(rear == MAX-1){
    cout << "QUEUE IS FULL" << endl;
 }else{
    T ele;
    cout << "Enter the element" << endl;
    cin >> ele;
    a[rear++] = ele;
 }
}
template<typename T>
void Queue<T> :: remove(){
    if(front > rear){
        cout << "QUEUE IS EMPTY" << endl;
    }else{
        cout << "Deleted" << a[front++] << endl;
    }
}
template<typename T>
void Queue<T> :: display(){
    if(front>rear){
        cout<< "Queue is Empty" << endl;
    }else{
        cout << "Queue : " << endl;
        for(int i = front ; i <= rear ; i++){
            cout << a[i] << " ";
            cout << endl;
        }
    }
}
int main(){
    Queue<int> iq;
    Queue<float> fq;
    Queue<string> sq;
    int ch;
    cout << "1.) INTEGER QUEUE , 2.) STRING QUEUE , 3.) FLOAT QUEUE , 4.)EXIT" << endl;
    cin >> ch;
    while(true){
        if(ch==1)
        iq.menu();
        else if(ch==2)
        sq.menu();
        else if(ch==3)
        fq.menu();
        else
        break;

    }
}

