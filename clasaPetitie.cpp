#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std; 

class Petitie
{
private:
	const int id;
	static int contorId;
	char* descriere;
	string numePrenume;
	string categorie;
	int nrZileVechime;
	bool esteRezolvata;  //starea: false =  deschisa; true = rezolvata;



public:
	//constructor implicit
	Petitie() : id(contorId++)
	{
		this->descriere = NULL;
		this->numePrenume = "";
		this->categorie = "";
		this->nrZileVechime = 0;
		this->esteRezolvata = false;

	}

	//constr cu toti parametrii
	Petitie(const char* descriere, string numePrenume, string categorie, int nrZileVechime, bool esteRezolvata) : id(contorId++)
	{
		this->descriere = new char[strlen(descriere) + 1];
		strcpy_s(this->descriere, strlen(descriere) + 1, descriere);

		this->numePrenume = numePrenume;
		this->categorie = categorie;
		this->nrZileVechime = nrZileVechime;
		this->esteRezolvata = esteRezolvata;

	}

	//constr de copiere
	Petitie(const Petitie& p) :id(contorId++)
	{

		this->descriere = new char[strlen(p.descriere) + 1];
		strcpy_s(this->descriere, strlen(p.descriere) + 1, p.descriere);

		this->numePrenume = p.numePrenume;
		this->categorie = p.categorie;
		this->nrZileVechime = p.nrZileVechime;
		this->esteRezolvata = p.esteRezolvata;
	}

	//op=
	Petitie& operator=(const Petitie& p)
	{
		this->descriere = new char[strlen(p.descriere) + 1];
		strcpy_s(this->descriere, strlen(p.descriere) + 1, p.descriere);

		this->numePrenume = p.numePrenume;
		this->categorie = p.categorie;
		this->nrZileVechime = p.nrZileVechime;
		this->esteRezolvata = p.esteRezolvata;

		return *this;
	}


	~Petitie()
	{
		delete[] this->descriere;
	}

	//get - ma lasa sa citesc din zona private
	int getnrZileVechime()
	{
		return this->nrZileVechime;
	}

	//set - ma lasa sa modific din zona private
	void setnrZileVechime(int nrZileVechime)
	{
		if (nrZileVechime > 0)
		{
			this->nrZileVechime = nrZileVechime;
		}
	}


	
};


int main()
{
	Petitie p1("Soseaua are multe gropi", "Ion Popescu", "Infrastructura", 20, false);
	
	Petitie p2(p1);

	Petitie p3;

	p3 = p1;

	return 0;

}