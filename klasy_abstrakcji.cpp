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
		klasa_pochodna(float ,char *);
		~klasa_pochodna();
		
};

klasa_abstrakcji::klasa_abstrakcji()
{
	std::cout << "Konstruktor klasa_abstrakcji" << std::endl;
}
l
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

void klasa_abstrakcji::wypisz()
{
	std::cout << "a = " << a << std::endl;
}

klasa_pochodna::klasa_pochodna():klasa_abstrakcji()
{
	std::cout << "Konstruktor klasa_pochodna" << std::endl;
}

klasa_pochodna::klasa_pochodna(float x,char *input):klasa_abstrakcji(x)
{
	int dlugosc = strlen(input);
	tekst = new char [dlugosc+1];
	assert(tekst);
	strcpy(tekst,input);
}

void klasa_pochodna::wypisz()
{
	std::cout << "Pole klasy abstrakcji: " << zwroc() << "Pole klasy pochodnej: " << tekst << std::endl;
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
	klasa_pochodna obiekt2(2.34,(char *)"sasdsadasda");
	ref_func(obiekt2);
	return 0;
}
