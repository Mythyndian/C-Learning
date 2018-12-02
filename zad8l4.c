/*Napisz program, który odczytuje znaki ze standardowego wejscia az do
wysta²pienia znaku konca pliku (EOF). Dla kazdego znaku program powinien informowac,
czy jest on litera² i jesli tak jest to program powinien wyswietlac numer litery w
alfabecie. Na przyk³ad, litery d i D maja² numer 4. Wykorzystaj funkcje², która pobiera
znak jako argument i zwraca jego numer w alfabecie, jesli jest on litera²; w przeciwnym
wypadku wartoscia² zwracana² powinni byc -1.*/
#include <stdio.h>

int char_number(char ch);

int main(void)
	{
		char ch;
		while(1)
			{
				printf("Podaj znak");
				scanf(" %c",&ch);
				printf("%d \n",char_number(ch));
				
			}
	}
int char_number(char ch)
	{
		switch(ch)
		{
		case'0':
		case'1':
		case'2':
		case'3':
		case'4':
		case'5':
		case'6':
		case'7':
		case'8':
		case'9':return -1;break;
		case 'A':
		case'a': return 1;break;
		case 'B':
		case 'b':
		return 2;break;
		case 'C':
		case'c': 
		return 3;break;
		case 'D':
		case'd':
		return 4;break;
		case 'E':
		case'e':
		return 5;break;
		case 'F':
		case'f':
		return 6;break;
		case 'G':
		case'g':
		return 7;break;
		case 'H':
		case 'h':
		return 8;break;
		case 'I':
		case'i':
		return 9;break;
		case 'J':
		case 'j':
		return 10;break;
		case 'K':
		case'k':
		return 11;break;
		case 'L':
		case 'l':
		return 12;break;
		case 'M':
		case 'm':
		return 13;break;
		case 'N':
		case'n':
		return 14;break;
		case 'O':
		case 'o':
		return 15;break;
		case 'P':
		case 'p':
		return 16;break;
		case 'R':
		case 'r':
		return 17;break;
		case 'S':
		case 's':
		return 18;break;
		case 'T':
		case 't':
		return 19;break;
		case 'U':
		case 'u':
		return 20;break;
		case 'V':
		case 'v':
		return 21;break;
		case 'W':
		case 'w':
		return 22;break;
		case 'X':
		case 'x':
		return 23;break;
		case 'Y':
		case 'y':
		return 24;break;
		case 'Z':
		case 'z': 
		return 25;break;
		}
	}
