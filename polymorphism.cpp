 // COMPILE TIME : FUNCTION OVERLOADING , OPERATOR OVERLOADING
 // RUNTIME : VIRTUAL FUNCTION
 // FUNCTION OVERLOADING
 #include<iostream>
 using namespace std;
 class Area{
    public :
    int calculateArea(int s){
        return s*s;
    }
    int calculateArea(int l , int b){
        return l*b ;
    }
 };
 // OPERATOR OVERLOADING
 class Complex{
    
    int real , imag ;
    public :
    Complex (){

    };
    Complex(int real , int imag){
        this -> real = real;
        this -> imag = imag;
    }
    void display(){
        cout << real << "+i" << imag<<endl;
    }
    // within the class , same type ke object ka private member ko access kar sakte hain
    Complex operator +(Complex &C){
        Complex ans;
        ans.real = real + C.real;
        ans.imag = imag + C.imag;
        return ans;
    }


 };
 // VIRTUAL FUNCTION - RUN TIME POLYMORPHISM
 class Animals{
   public :
   virtual void speak(){
    cout << "HUHUH" <<endl;
   }
   // virtual void speak = 0 ; , pure virtual fucntion , no object of class Animals can be created now
 };
 class Dog : public Animals{
   public :
   void speak(){
    cout << "BARK" << endl;
   }
 };
 class Cat : public Animals{
    public :
    void speak(){
        cout << "MEOW" << endl;
    }
    
 };
 int main(){
    Area A1;
    cout << A1.calculateArea(4)<< endl;
    cout << A1.calculateArea(5,6)<<endl;
    Complex C1(3,4);
    Complex C2(5,6);
    Complex C3 = C1 + C2 ;
    C3.display();
    Animals *p; // points towards Animals class
    p = new Dog ; //creates a address dog in the heap during runtime
    p -> speak(); // direct towards speak of animals class not dog class , beacuse dog class address in not yet created , now virtual is used , so it will tell the compiler to decide , during runtime not now , so bark will pe printed
    Animals *p1;
    vector<Animals*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Animals());
    animals.push_back(new Cat());
    for(int i = 0 ; i < animals.size() ; i++){
        p = animals[i];
        p -> speak();
    }
 }