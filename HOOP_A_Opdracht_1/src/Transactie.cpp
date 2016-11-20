#include "Transactie.h"



Transactie::Transactie(float amount, int day , int month, int year)
{
	this->amount = amount;
	this->day = day;
	this->month = month;
	this->year = year;
}

int Transactie::getAmount() const {
	return amount;
}
int Transactie::getDay() const {
	return day;
}
int Transactie::getMonth() const {
	return month;
}
int Transactie::getYear() const {
	return year;
}

