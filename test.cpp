#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;

//Vào trang wed : https://www.ascii-art-generator.org/ d? chuy?n ?nh sang file .txt


void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string ngiu;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\tNGUOI YEU TUI DEP HAY XAU ?: ";
		getline(cin, ngiu);
		if (ngiu == "DEP")
		{
			cout << "\t\t---CHINH XAC  !---" << endl << endl;
			cout << "\t\tNGUOI IU TUI LA DEP NHAT..." << endl;
			Sleep(1000);
			cout << "\t\tNGUOI IU TUI LA SO 1..." << endl; Sleep(500);
			cout << "\t\tBA XA ANH NUMBER 1..." << endl; Sleep(500);
			cout << "\t\tMAI IU BE IU BE IU BE..." << endl; Sleep(500);
			cout << "\t\tBE LA CA THE GIOI CUA ANH..." << endl; Sleep(500);
			cout << "\t\tVU HOANG AN XIN NHAN NGUYEN HOANG PHUONG CHI LAM VO ..." << endl; Sleep(500);
			cout << "\t\tNGUYEN HUA TRON DOI BEN EM..." << endl; Sleep(500);
			cout << "\t\tLUC HANH PHUC KHI GIAN NAN..." << endl; Sleep(500);
			cout << "\t\tLUC MANH KHOE KHI DAU YEU..." << endl; Sleep(500);
			cout << "\t\tVAN MOT LONG THUY CHUNG..." << endl; Sleep(500);
			cout << "\t\tANH IU EM EM BE CUA ANH..." << endl;Sleep(500);
            cout << "\t\t1..." << endl; Sleep(500);
            cout << "\t\t2..." << endl; Sleep(500);
            cout << "\t\t3..." << endl << endl;Sleep(500);
            
		  	vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while (true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("C:\\Users\\Hoang An\\Downloads\\banner.txt", ios_base::in); //import file thì copy du?ng d?n r?i d?i \ thành \\ ho?c /
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(30);
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

				//============ ?nh th? 2,3,4... thì copy t? "ifstream file" t?i "file.close();" r?i d?i tên "file" và "line" l?i ===========
				ifstream file2;
				file2.open("C:\\Users\\Hoang An\\Downloads\\banner1.txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(30);
				}
				file2.close();
				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("C:\\Users\\Hoang An\\Downloads\\banner2.txt", ios_base::in);
				string line3;
				while (getline(file3, line3)) {
					cout << line3 << endl;
					Sleep(30);
				}
				file3.close();


				SetColor(A.at(i++ % A.size()));
				ifstream file4;
file4.open("C:\\Users\\Hoang An\\Downloads\\banner9.txt", ios_base::in);
				string line4;
				while (getline(file4, line4)) {
					cout << line4 << endl;
					Sleep(30);
				}
				file4.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file5;
				file5.open("C:\\Users\\Hoang An\\Downloads\\banner4.txt", ios_base::in);
				string line5;
				while (getline(file5, line5)) {
					cout << line5 << endl;
					Sleep(30);
				}
				file5.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file6;
				file6.open("C:\\Users\\Hoang An\\Downloads\\banner5.txt", ios_base::in);
				string line6;
				while (getline(file6, line6)) {
					cout << line6 << endl;
					Sleep(30);
				}
				file6.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file7;
				file7.open("C:\\Users\\Hoang An\\Downloads\\banner6.txt", ios_base::in);
				string line7;
				while (getline(file7, line7)) {
					cout << line7 << endl;
					Sleep(30);
				}
				file7.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file8;
				file8.open("C:\\Users\\Hoang An\\Downloads\\banner7.txt", ios_base::in);
				string line8;
				while (getline(file8, line8)) {
					cout << line8 << endl;
					Sleep(30);
				}
				file8.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file9;
				file9.open("C:\\Users\\Hoang An\\Downloads\\banner8.txt", ios_base::in);
				string line9;
				while (getline(file9, line9)) {
					cout << line9 << endl;
					Sleep(30);
				}
				file9.close();

			}
			_getch();
		}
		else
		{
			cout << "\t\t   'CUC CUC, CHON LAI MAU' -.-" << endl << endl;
			system("pause");
		}
	}
}

