#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Poly{
    vector<float> coeff;
    public :
    void input(int degree){
        coeff.resize(degree+1);
        cout<< "Enter the values of coeff from x^"<<degree<<"to x^0"<<endl;
        for(int i = degree ; i>=0 ; i--){
            cin >> coeff[i];
        }
    }
    
    void display() {
        cout << "Polynomial: ";
        bool first = true;
        for (int i = coeff.size() - 1; i >= 0; --i) {
            if (coeff[i] != 0) {
                if (!first && coeff[i] > 0) cout << "+";
                cout << coeff[i] << "x^" << i << " ";
                first = false;
            }
        }
        cout << "\n";
    }
    Poly operator+ (Poly& other){
        int max_deg = coeff.size() > other.coeff.size() ? coeff.size() : other.coeff.size();
        Poly result;
        result.coeff.resize(max_deg , 0);
        for(int i = 0 ; i < max_deg ; i++){
            float a = i < coeff.size()?coeff[i]:0;
            float b = i < other.coeff.size()? other.coeff[i]:0;
            result.coeff[i] = a + b;
        }
    return result ;

    }
    Poly operator- (Poly& other){
        int max_deg = coeff.size() > other.coeff.size() ? coeff.size() : other.coeff.size();
        Poly result;
        result.coeff.resize(max_deg , 0);
        for(int i = 0 ; i < max_deg ; i++){
            float a = i < coeff.size()?coeff[i]:0;
            float b = i < other.coeff.size()? other.coeff[i]:0;
            result.coeff[i] = a - b;
        }
    return result ;

    }
    Poly operator*(Poly& other){
        int deg1 = coeff.size();
        int deg2 = other.coeff.size();
        Poly result;
        result.coeff.resize(deg1+deg2-1,0);
        for(int i = 0 ; i < deg1 ; i++){
            for(int j = 0 ; j < deg2 ; i++){
                result.coeff[i+j]+= coeff[i]*other.coeff[j]; 
            }
        }
        return result;
    }
    void evaluate(){
        float x;
        float result;
        cout<< "Enter the value of x : " << endl;
        cin >> x;
        for(int i = 0 ; i < coeff.size() ; i++){
            result+=coeff[i]*pow(x,i);
        }
        cout << "Value : " << result << endl;
    }



};
int main(){
    Poly P1 , P2 , P3;
    int deg;
    cout << "Enter the degree of the 1st polynomial" << endl;
    cin >> deg;
    P1.input(deg);
    cout << "Enter the degree of the 2nd polynomial" << endl;
    cin >> deg;
    P2.input(deg);
    int choice;
    while(true){
        cin >> choice;
        switch(choice){
            case 1:
            P3 = P1 + P2;
            P3.display();
            break;
            case 2:
            P3 = P1 - P2;
            P3.display();
            break;
            case 3:
            P3 = P1 * P2;
            P3.display();
            break;
            case 4:
            cout << "EVALUATE P1 : " << endl; P1.evaluate();
            cout << "EVALUATE P2 : " << endl ; P2.evaluate();
            cout << "EVALUATE LAST RESULT : " << endl; P3.evaluate();

            break;
            default:
            cout << "Invalid Choice" << endl;
        }}
    }

