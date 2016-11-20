#include "ofMain.h"
#include "ofApp.h"

#include "Bankrekening.h"
#include "Transactie.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	Bankrekening bank = Bankrekening(0, 0 ,0 ,0);

	Transactie trans1 = Transactie(10, 01, 01, 2000);
	Transactie trans2 = Transactie(100, 07, 03, 2010);
	Transactie trans3 = Transactie(50, 12, 01, 2016);

	//cout << "BijScrijving" << endl;
	cout << "Saldo: " << bank.getSaldo() << " Date: " << bank.getDay() << " , " << bank.getMonth() << " , " << bank.getYear() << endl;

	bank = bank + trans1;

	cout << "BijScrijving" << endl;
	cout << "Saldo: " << bank.getSaldo() << " Date: " << bank.getDay() << " , " << bank.getMonth() << " , " << bank.getYear() << endl;

	bank = bank + trans2;

	cout << "BijScrijving" << endl;
	cout << "Saldo: " << bank.getSaldo() << " Date: " << bank.getDay() << " , " << bank.getMonth() << " , " << bank.getYear() << endl;

	bank = bank - trans3;

	cout << " " << endl;

	cout << "AfScrijving" << endl;
	cout << "Saldo: " << bank.getSaldo() << " Date: " << bank.getDay() << " , " << bank.getMonth() << " , " << bank.getYear() << endl;
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
