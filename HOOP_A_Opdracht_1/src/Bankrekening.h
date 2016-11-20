#pragma once


#include "Transactie.h"

class Bankrekening {
public:

	Bankrekening(float saldo, int day, int month, int year);

	int getSaldo() const;

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	Bankrekening operator+(const Transactie& bokeing) const;
	Bankrekening operator-(const Transactie& bokeing) const;
private:
	float saldo;
	int day;
	int month;
	int year;
};