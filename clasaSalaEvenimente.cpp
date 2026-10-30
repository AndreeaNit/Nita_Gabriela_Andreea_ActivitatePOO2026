/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class SalaEvenimente
{
private:

	string numeSala;
	int numarInvitati;
	float pretBilet;



public:

	//constructorul implicit
	SalaEvenimente()
	{
		this-> numeSala = "";
		this->numarInvitati = 0;
		this->pretBilet = 0;
		
	}
	//constructorul cu toti parametrii

	SalaEvenimente(string numeSala, int numarInvitati, float pretBilet)
	{
		this->numeSala = numeSala;
		this->numarInvitati = numarInvitati;
		this->pretBilet = pretBilet;

	}


	//constructorul de copiere

	SalaEvenimente(const SalaEvenimente& s)
	{
		this->numeSala = s.numeSala;
		this->numarInvitati = s.numarInvitati;
		this->pretBilet = s.pretBilet;

	}


	//operatorul=

	SalaEvenimente& operator=(const SalaEvenimente& s)
	{
		this->numeSala = s.numeSala;
		this->numarInvitati = s.numarInvitati;
		this->pretBilet = s.pretBilet;

		return *this;
	}


};


void main()
{
	SalaEvenimente s1("SalaPalatului", 500, 120.5f);
	SalaEvenimente s2(s1);    //constr copiere
	SalaEvenimente s3;		  
	s3 = s1;				//operator=
}

*/