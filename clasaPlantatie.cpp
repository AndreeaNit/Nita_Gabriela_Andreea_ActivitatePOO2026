#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Plantatie
{ 
private:

	int id;
	char* adresa;
	int nrPomi;
	float* varsta;
	int varstaMinimaRod;


public:

	//constructorul implicit
	Plantatie()
	{
		this->id = 0;
		this->adresa = NULL;
		this->nrPomi = 0;
		this->varsta = NULL;
		this->varstaMinimaRod = 0;
	}
	//constructorul cu toti parametrii

	Plantatie(int id, const char* adresa, int nrPomi, float* varsta, int varstaMinimaRod)
	{
		this->id = id;
		if (adresa != NULL)
		{
			this->adresa = new char[strlen(adresa + 1)];
			strcpy(this->adresa, adresa);

		}
		else
		{
			this->adresa = NULL;
			 
		}
	}

	

};


void main()
{

}