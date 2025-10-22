#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Poly {
private:
    vector<float> coeff; 

public:
    void input(int degree) {
        coeff.resize(degree + 1);
        cout << "Enter coefficients from x^" << degree << " to x^0:\n";
        for (int i = degree; i >= 0; --i) {
            cout << "Coefficient of x^" << i << ": ";
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

    Poly operator+(Poly& other) {
        int max_deg = coeff.size() > other.coeff.size() ? coeff.size() : other.coeff.size();
        Poly result;
        result.coeff.resize(max_deg, 0);

        for (int i = 0; i < max_deg; ++i) {
            float a = i < coeff.size() ? coeff[i] : 0;
            float b = i < other.coeff.size() ? other.coeff[i] : 0;
            result.coeff[i] = a + b;
        }
        return result;
    }

    Poly operator-(Poly& other) {
        int max_deg = coeff.size() > other.coeff.size() ? coeff.size() : other.coeff.size();
        Poly result;
        result.coeff.resize(max_deg, 0);

        for (int i = 0; i < max_deg; ++i) {
            float a = i < coeff.size() ? coeff[i] : 0;
            float b = i < other.coeff.size() ? other.coeff[i] : 0;
            result.coeff[i] = a - b;
        }
        return result;
    }

    Poly operator*(Poly& other) {
        int deg1 = coeff.size();
        int deg2 = other.coeff.size();
        Poly result;
        result.coeff.resize(deg1 + deg2 - 1, 0);

        for (int i = 0; i < deg1; ++i) {
            for (int j = 0; j < deg2; ++j) {
                result.coeff[i + j] += coeff[i] * other.coeff[j];
            }
        }
        return result;
    }

    void evaluate() {
        float x, result = 0;
        cout << "Enter value of x: ";
        cin >> x;
        for (int i = 0; i < coeff.size(); ++i) {
            result += coeff[i] * pow(x, i);
        }
        cout << "Value = " << result << "\n";
    }
};

int main() {
    Poly p1, p2, p3;
    int deg;

    cout << "Degree of 1st polynomial: ";
    cin >> deg;
    p1.input(deg);

    cout << "Degree of 2nd polynomial: ";
    cin >> deg;
    p2.input(deg);

    int choice;
    while (true) {
        cout << "\nChoose operation:\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Evaluate\n5. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                p3 = p1 + p2;
                p3.display();
                break;
            case 2:
                p3 = p1 - p2;
                p3.display();
                break;
            case 3:
                p3 = p1 * p2;
                p3.display();
                break;
            case 4:
                cout << "Evaluate p1:\n"; p1.evaluate();
                cout << "Evaluate p2:\n"; p2.evaluate();
                cout << "Evaluate last result:\n"; p3.evaluate();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}
