/* Program made by Pawil */
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include<fstream>
#include <ctime>
#pragma warning(disable : 4996)

using namespace std;
int main()

{
	setlocale(LC_CTYPE, "Polish");
	
		string imie;
		int punkty = 0;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(hConsole, 7);

		
	system("cls");

	cout << "Witaj w quizie informatycznym!";
	Sleep(2000);

	system("cls");
	cout << "Przed tobą będzie 15 Pytań o różnym stopniu trudności. " << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Łatwym, ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Średnim  ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "i";
	SetConsoleTextAttribute(hConsole, 12);
	cout << " Trudnym";
	SetConsoleTextAttribute(hConsole, 7);
	cout << ".";
	Sleep(3000);

	system("cls");
	cout << "Niech wiec zacznijmy!";
	Sleep(2000);
	cout << "\n";
	
		Start:
		system("cls");
		
		Sleep(1000);
		cout << "Pytanie nm 1 Poziom: ";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Łatwy" << endl <<endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Mysz komputerowa to urządzenie: "<<endl <<endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia " << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wyjścia " << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia i Wyjścia " << endl <<endl;

		cout << "Poprawna odpowiedź to: ";
		char p1 = _getch();
		if (p1 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			cout << "Poprawna odpowiedz "; 
			punkty= punkty + 10;
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p1 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Błedna odpowiedz"; 
			punkty= punkty - 10;
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if(p1 =='c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Błedna odpowiedz"; 
			punkty= punkty - 10;
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start;
		}
		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : "<<punkty;
		Sleep(2000);
		
		Start1:		
		system("cls");

		cout << "Pytanie nm 2 Poziom: ";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Łatwy" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Kserokopiarka to urządzenie: " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia " << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wyjścia " << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia i Wyjścia " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p2 = _getch();
		if (p2 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p2 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			 punkty= punkty - 10;	
			 cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p2 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;	
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start1;
		}
		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
		
		Start2:		
		system("cls");

		cout << "Pytanie nm 3 Poziom: ";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Łatwy" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Głośnik to urządzenie : " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia " << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wyjścia " << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia i Wyjścia " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p3 = _getch();
		if (p3 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;	
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p3 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;	
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p3 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start2;
		}
		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
		
		Start3:		
		system("cls");

		cout << "Pytanie nm 4 Poziom: ";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Łatwy" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Kamerka internetowa to urządzenie : " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia " << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wyjścia " << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Wejścia i Wyjścia " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p4 = _getch();
		if (p4 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;	
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p4 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;	
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p4 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;	
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start3;
		}
		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
		
		Start4:		
		system("cls");
		
		cout << "Pytanie nm 5 Poziom: ";
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Łatwy" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << " Który z podanych systemów operacyjnych jest otwartoźródłowy: " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Windows " << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Mac OS " << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Linux " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p5 = _getch();
		if (p5 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p5 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p5 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start4;
		}
		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);

		Start5:		
		system("cls");

		cout << "Pytanie nm 6 Poziom: ";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "Średni" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Na którym systemie został oparty Android: " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Windows" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Linux" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Android nie jest na żadnym systemie oparty" << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p6 = _getch();
		if (p6 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p6 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p6 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
		goto Start5;
		}
		
		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
		
		Start6:			
		system("cls");

		cout << "Pytanie nm 7 Poziom: ";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "Średni" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Popularny skrót na procesor to :" << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "GPU" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "CPU" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "RAM " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p7 = _getch();
		if (p7 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p7 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p7 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start6;
		}

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);

		Start7:			
		system("cls");

		cout << "Pytanie nm 8 Poziom: ";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "Średni" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Popularny skrót na kartę graficzną to :" << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "GPU" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "CPU" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "RAM " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p8 = _getch();
		if (p8 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p8 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p8 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start7;
		}

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);

		Start8:			
		system("cls");

		cout << "Pytanie nm 9 Poziom: ";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "Średni" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Skrót na dysk twardy to" << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "SSD" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "HDD" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "SSHD " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p9 = _getch();
		if (p9 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty= punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p9 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p9 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty= punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start8;
		}

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
		
	Start9:
		system("cls");

		cout << "Pytanie nm 10 Poziom: ";
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Trudny" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Jaką architektuje procesora posiada pc" << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "ARM" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "x86-64" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "PowerPC " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p10 = _getch();
		if (p10 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty = punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p10 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty = punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p10 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty = punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start9;
		}

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
		
	Start10:
		system("cls");

		cout << "Pytanie nm 11 Poziom: ";
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Trudny" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Jaki typ karty graficznej posiada typowy komputer do gier  " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Zintegowana" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Nie zintegowana" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Dedykowana " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p11 = _getch();
		if (p11 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty = punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p11 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty = punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p11 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty = punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start10;
		}

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
			
		Start11:
		system("cls");

		cout << "Pytanie nm 12 Poziom: ";
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Trudny" << endl << endl;

		SetConsoleTextAttribute(hConsole, 3);
		cout << "Jaki typ karty graficznej posiada typowy komputer do gier  " << endl << endl;

		SetConsoleTextAttribute(hConsole, 4);
		cout << "A: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Zintegowana" << endl;

		SetConsoleTextAttribute(hConsole, 5);
		cout << "B: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Nie zintegowana" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "C: ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Dedykowana " << endl << endl;

		cout << "Poprawna odpowiedź to: ";
		char p12 = _getch();
		if (p12 == 'c')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 10);
			punkty = punkty + 10;
			cout << "Poprawna odpowiedz ";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " + 10 punktów.";
		}
		else if (p12 == 'a')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty = punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else if (p12 == 'b')
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, 12);
			punkty = punkty - 10;
			cout << "Błedna odpowiedz";
			SetConsoleTextAttribute(hConsole, 7);
			cout << " - 10 punktów.";
		}
		else
		{
			system("cls");
			goto Start11;
		}

		SetConsoleTextAttribute(hConsole, 7);
		cout << "\n\nAktualna liczba punktów : " << punkty;
		Sleep(2000);
			
			
			
			
			
			
			
			
			
			
			
			
			
			

		system("cls");
		cout << "Jak masz na imie? (bez polskich znaków) : ";
		cin >> imie;
		
		time_t czas;
		time(&czas);		

		ofstream zapis("punkty.txt", ios_base::app);

		zapis << punkty << " Punktow. Gracz: " << imie << " Czas: " << ctime(&czas);

		zapis.close();
		cout << "\n";
		system("type punkty.txt");
		
		
		
		cout << "\n Program skończy działanie za 10 sekund";
		Sleep(10000);
}

