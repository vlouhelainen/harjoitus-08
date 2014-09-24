/*		Valtteri Louhelainen

Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
järjestyksessä (pienimmästä suurimpaan) näytölle
(katso harj. 1 suunnitelma)
a) käytä kokonaislukuja
b) käytä liukulukuja (=reaalilukuja)*/

#include <iostream>
using namespace std;

void main()
{
	float luku1;
	float luku2;
	float luku3;
	float temp;

	cout << "Anna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;
	cout << "Anna luku 3: ";
	cin >> luku3;

	if (luku1<luku2)
	{
		temp = luku1;
		luku1 = luku2;
		luku2 = temp;
	}
	if (luku2<luku3)
	{
		temp = luku2;
		luku2 = luku3;
		luku3 = temp;
	}
	if (luku1<luku2)
	{
		temp = luku1;
		luku1 = luku2;
		luku2 = temp;
	}

	cout << luku3 << "\n" << luku2 << "\n" << luku1 << "\n";

}