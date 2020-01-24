#include <iostream>
#include <cassert>
#include <cstring>
class klasa_abstrakcji
{
	float a;
public:
	virtual void wypisz();
	float zwroc();
	klasa_abstrakcji();
	klasa_abstrakcji(float);
	~klasa_abstrakcji();
};

class klasa_pochodna:public klasa_abstrakcji
{
	char *tekst;
	public:
		void wypisz();
		klasa_pochodna();
		klasa_pochodna(float ,char const *);
		~klasa_pochodna();
		
};

klasa_abstrakcji::klasa_abstrakcji()
{
	std::cout << "Konstruktor klasa_abstrakcji" << std::endl;
}

klasa_abstrakcji::klasa_abstrakcji(float b)
{
	a = b;
}

float klasa_abstrakcji::zwroc()
{
	return a;
}

klasa_abstrakcji::~klasa_abstrakcji()
{
	std::cout << "destruktor klasa_abstrakcji" << std::endl;
}

klasa_pochodna::klasa_pochodna():klasa_abstrakcji()
{
	std::cout << "Konstruktor klasa_pochodna" << std::endl;
}

klasa_pochodna::klasa_pochodna(float x,char const *input):klasa_abstrakcji(x)
{
	int dlugosc = strlen(input);
	tekst = new char [dlugosc+1];
	assert(tekst);
	strcpy(tekst,input);
}

void klasa_pochodna::wypisz()
{
	std::cout << "Pole klasy abstrakcji: " << zwroc() << "Pole klasy pochodnej: " << *tekst << std::endl;
}

klasa_pochodna::~klasa_pochodna()
{
	std::cout << "Destruktor klasy pochodnej";
	delete [] tekst; 
}

void ref_func(klasa_abstrakcji & ref)
{
	ref.wypisz();
}

int main()
{
	klasa_abstrakcji obiekt(2.3);
	ref_func(obiekt);
	klasa_pochodna obiekt2(2.34,"sasdsadasda");
	ref_func(obiekt2);
	return 0;
}
