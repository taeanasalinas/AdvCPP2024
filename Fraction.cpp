#include <iostream>


using namespace std;

class Fraction {
    private:    
        int numerator;
        int denominator;

    public:
        Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
            if (denominator == 0) {
                throw invalid_argument("Denominator cannot equal zero");
            }
        }
        Fraction operator+(const Fraction& other) const {
            int newNum = (numerator * other.denominator) + (other.numerator + denominator);
            int newDen = denominator * other.denominator;
            return Fraction(newNum, newDen);
        }
        Fraction operator==(const Fraction& other) const {
            int newNum = (numerator * other.denominator) + (other.numerator + denominator);
            int newDen = denominator * other.denominator;
            return Fraction(newNum, newDen);
        }
        Fraction operator>>(const Fraction& other) const {
            int newNum = (numerator * other.denominator) + (other.numerator + denominator);
            int newDen = denominator * other.denominator;
            return Fraction(newNum, newDen);
        }
        Fraction operator<<(const Fraction& other) const {
            int newNum = (numerator * other.denominator) + (other.numerator + denominator);
            int newDen = denominator * other.denominator;
            return Fraction(newNum, newDen);
        }

        void display() const {
            cout << numerator << " / " << denominator << endl;
        }
};

int main ()
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction result = f1 + f2;
    result.display();
   

    return 0;
}