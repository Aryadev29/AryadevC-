// Class is a template for an object , and template is a template for class , template -> class , class -> object
// TEMPLATES are parametrized classes 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
template < class T >
int search (T* a , T key , int first , int last){
     int mid;
     if(first > last){
        return -1;
     }
     mid = (first + last) / 2;
     if(a[mid] == key){
        return mid;
     }
     if(a[mid] > key){
        return search(a , key , first , mid-1);
     }else{
        return search(a , key , mid+1 , last);
     }
}
template <class T>
class arr{
    public:
    T* a;
    int length;
    arr();
    void search_element();
};
template <class T>
arr<T> :: arr(){
    cout<< "ENTER THE ARRAY LENGTH" << endl;
    cin >> length;
    a = new T[length];
    for(int i = 0 ; i < length ; i++){
        cin >> a[i];
    }

}
template <class T>
void arr<T> :: search_element(){
    T key;
    cout<< "Enter the element to be found" << endl;
    cin >> key;
    int index;
    index = search(a , key , 0 , length - 1);
    if(index == -1){
        cout << "The element was not found" << endl;

    }else{
        cout << "The element was found" << endl;
    }
}
int main(){
    cout<< "INTERGER ARRAY" << endl;
    arr<int> a;
    a.search_element();
    cout<< "FLOAT ARRAY" << endl;
    arr<float> b;
    b.search_element();
    cout<< "CHARACTER ARRAY" << endl;
    arr<string> c;
    c.search_element();
    return 0;
}