﻿// Задача 1. Сравнения в дробях.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator == (const Fraction& other) { return this->numerator_ == other.numerator_ && this->denominator_ == other.denominator_; }
	bool operator != (const Fraction& other) { return this->numerator_ != other.numerator_ && this->denominator_ != other.denominator_; }
	bool operator < (const Fraction& other) { return this->numerator_ > other.numerator_ && this->denominator_ > other.denominator_; }
	bool operator > (const Fraction& other) { return this->numerator_ < other.numerator_ && this->denominator_ < other.denominator_; }
	bool operator <= (const Fraction& other) { return this->numerator_ >= other.numerator_ && this->denominator_ >= other.denominator_; }
	bool operator >= (const Fraction& other) { return this->numerator_ <= other.numerator_ && this->denominator_ <= other.denominator_; }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}