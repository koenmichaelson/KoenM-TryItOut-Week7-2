#include <iostream>
#include <cmath> // for abs()
using namespace std;

class Polynomial {

public:
    int a;
    int b;
    int c;


    Polynomial operator+(Polynomial other) {

        other.a += a;
        other.b += b;
        other.c += c;

        return other;

    }

    Polynomial operator-(Polynomial other) {

        other.a = a - other.a;
        other.b = b - other.b;
        other.c = c - other.c;

        return other;

    }

    friend ostream& operator<<(ostream& os, Polynomial& p) {

        os << p.a << "x^2" << " + " << p.b << "x " << " + " << p.c << endl;
        return os;
    }

    friend istream& operator>>(istream& is, Polynomial& p) {

        cout << "Enter coeffiecient for (x^2)" << endl;
        cin >> p.a;

        cout << "Enter coeffiecient for (x)" << endl;
        cin >> p.b;

        cout << "Enter coeffiecient for (c)" << endl;
        cin >> p.c;

        return is;
    }



};





int main() {
    Polynomial p1, p2;

    cout << "Polynomial 1:\n";
    cin >> p1;

    cout << "\nPolynomial 2:\n";
    cin >> p2;

    Polynomial sum = p1 + p2;
    Polynomial diff = p1 - p2;

    cout << "\nP1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;

    cout << "\nP1 + P2 = " << sum << endl;
    cout << "P1 - P2 = " << diff << endl;

    return 0;
}
