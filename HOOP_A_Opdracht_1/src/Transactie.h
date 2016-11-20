#pragma once


#include "ofMain.h"

class Transactie {
public:
	Transactie(float amount, int day, int month, int year);

	int getAmount() const;
	int getDay() const;
	int getMonth() const;
	int getYear() const;

private:
	float amount;
	int day;
	int month;
	int year;



};