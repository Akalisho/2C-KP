
#include <iostream>
#include <string>

using namespace std;

#pragma region Zadanie 1
/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.

Instrukcje:

Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie
inna liczba ko�czy program.

Wybierz operacj�: 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3

Wynik mno�enia: 15
*/


void task1()
{
	int operationNumber, firstNumber, secondNumber, result = 0;
	cout << "Wybierz operacj� (1 - 4): \n1. Dodawanie\n2. Odejmowanie\n3. Mno�enie\n4. Dzielenie\n";
	cin >> operationNumber;
	cout << "Podaj pierwsz� liczb�: \n";
	cin >> firstNumber;
	cout << "Podaj drug� liczb�: \n";
	cin >> secondNumber;

	if (operationNumber == 1)
		result = firstNumber + secondNumber;
	else
		if (operationNumber == 2)
			result = firstNumber - secondNumber;
		else
			if (operationNumber == 3)
				result = firstNumber * secondNumber;
			else
				if (operationNumber == 4)
					if (secondNumber == 0)
						cout << "Koniec Programu.";
					else
						result = firstNumber / secondNumber;

	if (operationNumber > 4 || operationNumber < 1)
		cout << "Dzia�anie niepoprawne.";
	else
		cout << "Wynik operacji matematycznej: " << result;
}
#pragma endregion
#pragma region Zadanie 2
/*
ZADANIE
Konwersja temperatury

Napisz program, kt�ry b�dzie konwertowa� temperatur� pomi�dzy skalami: Celsiusza, Fahrenheita i Kelvina.

Instrukcje:

Popro� u�ytkownika o wyb�r jednostki, z kt�rej chce dokona� konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Popro� u�ytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperatur� na pozosta�e jednostki (z wykorzystaniem odpowiednich wzor�w konwersji).
Wy�wietl przeliczone temperatury.
Przyk�adowe dzia�anie programu:

Konwerter Temperatur
---------------------
Wybierz jednostk� temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wyb�r: C

Podaj temperatur� w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 �F
Kelvin: 298.15 K
*/

void showMenuTemperature()
{
	cout << "Wybierz operacj� (1 - 3): \n";
	cout << "-------------------------\n";
	cout << "1. Celcjusz (C)\n";
	cout << "2. Fahrenheit (F)\n";
	cout << "3. Kelvin (K)\n";
	cout << "0. Koniec Programu\n";
}

void task2()
{
	while (true)
	{
		showMenuTemperature();

		int conversionChoice;
		cout << "Wyb�r: \n";
		cin >> conversionChoice;

		double Celcius, Fahrenheit, Calvin;
		if (conversionChoice == 0 || conversionChoice > 3 || conversionChoice < 0)
			break;
		else
			if (conversionChoice == 1)
				cout << "Podaj temperatur� w stopniach Celcjusza:";
		cin >> Celcius;
		cout << "\n";
		cout << "Przeliczona temperatura: \n";
		cout << "Fahrenheit: " << (Celcius * 9 / 5) + 32 << " �F\n";
		cout << "Kelvin: " << Celcius + 273.15 << " �K\n";
		break;
		if (conversionChoice == 2)
			cout << "Podaj temperatur� w stopniach Fahrenheita:";
		cin >> Fahrenheit;
		cout << "\n";
		cout << "Przeliczona temperatura: \n";
		cout << "Celcjusz: " << (Fahrenheit - 32) / 1.8 << " �F\n";
		cout << "Kelvin: " << (Fahrenheit - 459.67) * 5 / 9 << " �K\n";
		break;
		if (conversionChoice == 3)
			cout << "Podaj temperatur� w stopniach Kalwina:";
		cin >> Calvin;
		cout << "\n";
		cout << "Przeliczona temperatura: \n";
		cout << "Celcjusz: " << Calvin - 273.15 << " �F\n";
		cout << "Fahrenheit: " << (Calvin * 1.8) - 459.67 << " �K\n";
		break;
	}
}
#pragma endregion
#pragma region Zadanie 3
/*
ZADANIE
Symulator rzutu kostk�

Napisz program, kt�ry b�dzie symulowa� rzut kostk�. Program powinien umo�liwia� u�ytkownikowi wyb�r rodzaju kostki (np. 6-�cienna, 10-�cienna, 20-�cienna) oraz ilo�� rzut�w. Po wykonaniu rzut�w, program powinien wy�wietli� wyniki oraz sum� otrzymanych warto�ci.

Instrukcje:

Popro� u�ytkownika o wyb�r rodzaju kostki (np. 6-�cienna, 10-�cienna, 20-�cienna).
Popro� u�ytkownika o podanie ilo�ci rzut�w.
Wykonaj podan� liczb� rzut�w wybranej kostk�, zapisuj�c wyniki.
Wy�wietl otrzymane wyniki oraz sum� otrzymanych warto�ci.
Przyk�adowe dzia�anie programu:

Symulator rzutu kostk�
-----------------------

Wybierz rodzaj kostki (6/10/20): 10
Ile rzut�w chcesz wykona�?: 5

Wyniki rzut�w kostk� 10-�cienn�:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8

Suma wynik�w: 33

*/
void showMenuDiceThrow()
{
	cout << "Symulator rzutu kostk�\n";
	cout << "-----------------------\n";
	cout << "Wybierz rodzaj kostki (6, 10, 20): \n";
}

void drawingNumbers(int diceChoice, int throws)
{
	int numbers;
	srand(time(0));
	cout << "Wylosowane liczby: ";
	for (int i = 0; i < throws; i++)
	{
		numbers = rand() % (diceChoice - 1 + 1) + 1;
		cout << numbers << ", ";
	}
	cout << "\n";
}

void task3()
{
	while (true)
	{
		showMenuDiceThrow();

		int diceChoice, throws;
		cin >> diceChoice;
		if (diceChoice == 6 || diceChoice == 10 || diceChoice == 20)
			true;
		else
			break;
		cout << "Ile rzut�w chcesz wykona�?: \n";
		cin >> throws;

		drawingNumbers(diceChoice, throws);
	}
}

#pragma endregion
#pragma region Zadanie 4
/*
ZADANIE
Konwerter jednostek

Napisz program konwertuj�cy jednostki miar. Program powinien umo�liwia� konwersj� mi�dzy r�nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs�ugiwa� r�ne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, kt�re chcesz obs�ugiwa� (np. d�ugo��: metry, centymetry, cale; masa: kilogramy, funty).
Popro� u�ytkownika o wyb�r jednostki wej�ciowej i jednostki wyj�ciowej oraz podanie warto�ci do konwersji.
Przekonwertuj warto�� z jednostki wej�ciowej na jednostk� wyj�ciow� na podstawie ustalonego wsp�czynnika konwersji.
Wy�wietl wynik konwersji.
Przyk�adowe dzia�anie programu:

Konwerter jednostek
-------------------

Wybierz jednostk� wej�ciow�:
1. Metry
2. Centymetry
3. Cale
Wyb�r: 1

Wybierz jednostk� wyj�ciow�:
1. Metry
2. Centymetry
3. Cale
Wyb�r: 2

Podaj warto�� do konwersji: 5

Wynik konwersji: 500 centymetr�w

*/

void showMenuConverter()
{
	cout << "Konwerter jednostek\n";
	cout << "-------------------\n";
}

void choiceInOutMenu()
{
	cout << "Wybierz jednostk� wej�ciow�: \n";
	cout << "1. Metry\n";
	cout << "2. Centymetry\n";
	cout << "3. Cale\n";
}

void task4()
{
	while (true)
	{
		int choiceIn, centimeters, meters, cals;

		showMenuConverter();

		choiceInOutMenu();

		cout << "Wyb�r: ";
		cin >> choiceIn;
		cout << "\n";

		if (choiceIn > 3 || choiceIn < 0)
			break;

		if (choiceIn == 1)
				cout << "Podaj warto�� w metrach: ";
			cin >> meters;
			centimeters = meters * 100;
			cals = meters * 39.370;

		if (choiceIn == 2)
			cout << "Podaj warto�� w centymetrach: ";
			cin >> centimeters;
			meters = centimeters / 100;
			cals = meters * 39.370;

		if (choiceIn == 3)
			cout << "Podaj warto�� w calach: ";
			cin >> cals;
			meters = cals * 0.0254;
			centimeters = meters * 100;

		cout << "Metry: " << meters << "\n";
		cout << "Centymetry: " << centimeters << "\n";
		cout << "Cale: " << cals << "\n";
	}
}

#pragma endregion

int main()
{
	setlocale(LC_CTYPE, "polish");
	task4();
}