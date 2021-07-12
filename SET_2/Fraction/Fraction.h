  
#ifndef FRACT_H
#define FRACT_H
class Fraction {
  int m_numerator;
  int m_denominator;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator-(int);
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;
  void display() const;

#endif
