#include "Bankrekening.h"



Bankrekening::Bankrekening(float saldo, int day, int month, int year)
{
	this->saldo = saldo;
	this->day = day;
	this->month = month;
	this->year = year;
}

Bankrekening Bankrekening::operator+(const Transactie& boeking) const {
	return Bankrekening(saldo + boeking.getAmount(), boeking.getDay(),boeking.getMonth(), boeking.getYear());
}
Bankrekening Bankrekening::operator-(const Transactie& boeking) const {
	return Bankrekening(saldo - boeking.getAmount(), boeking.getDay(), boeking.getMonth(), boeking.getYear());
}
int Bankrekening::getSaldo() const {
	return saldo;
}

int Bankrekening::getDay() const {
	return day;
}
int Bankrekening::getMonth() const {
	return month;
}
int Bankrekening::getYear() const {
	return year;
}

