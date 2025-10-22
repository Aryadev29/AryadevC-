// EXCEPTION HANDLING : An exception is an unexpected problem that arises during execution of program & our program terminates 
// suddenly with some errors / issues.
// TRY : It represents a block of code that may throw an exception placed iside the try block
// It is followed by one or more catch blocks. If an exception occurs , try block throws out that exception.
// CATCH : It represents a block of code that is executed when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.
// THROW : An Exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement , then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.
#include<iostream>
#include<exception>
using namespace std;
// class exception
// {
//     protected:
//     string msg;
//     public:
//     exception(string msg){
//         this -> msg = msg;
//     }
//     string what()
//     {
//         return msg;
//     }
// };
//class runtime_error : public exception{
//public :
//runtime_error(const string &msg) : exception(msg);
//};
int main(){
    // int a,b ;
    // cin >> a >> b;
    // try{
    //     if(b==0)
    //     throw "Divide by 0 is not possible ";
    //     int c = a/b ;
    //     cout << c << endl;
    // }
    // catch(const char *e){
    //     cout << "Exception Occcured : " << e << endl;
    // }
    try{
        int *p = new int[100000000000000];
        cout << "MEMORY ALLOCATION IS SUCCESSFULL" << endl;
        delete []p;
    }
    catch(const bad_alloc &e){
        cout << "Exception Occured due to line 26 : " << e.what() << endl;

    }
    catch(const exception &e){
        cout << "Exception Occured due to line 26 : " << e.what() << endl;

    }

}