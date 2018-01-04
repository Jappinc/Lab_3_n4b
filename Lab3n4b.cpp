#include <iostream>
#include <Windows.h>
#include <string>
#include "Queue.h"
#include "Queue.cpp"
/*
4b.����������� ������ ������ ������� (Queue<X>), �������� �������� �������������
����. ����� ������ � ������������ ������� ��������� ������:
- ���������� ����� �������;
- ���������� ������ �������� � ����� �������;
- ��������� �������� �� ������ �������;
- �������� �������� �� ������;
- ����� �������� � �������;
- ������ �������.

���������� ������� � ������� ������.
*/
using namespace std;

void main()
{
	int n_qu_menu, n_menu;

	Queue<int> qu_int;
	Queue<string> qu_str;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	n_qu_menu = -1;

	while (n_qu_menu != 0)
	{
		n_qu_menu = -1;
		cout << "===============" << endl;
		cout << "1 - ����� �����" << endl;
		cout << "2 - ������" << endl;
		cout << "0 - �����" << endl;
		cout << "===============" << endl;

		while ((n_qu_menu < 0) || (n_qu_menu > 3))
			cin >> n_qu_menu;
		switch (n_qu_menu)
		{
		case 1: //������ � qu_int
		{
			n_menu = -1;
			int stop = 0;
			while (n_menu != 0)
			{
				n_menu = -1;
				cout << "===============================" << endl;
				cout << "1 - ����" << endl;
				cout << "2 - ������� ������� �� ������" << endl;
				cout << "3 - ��������� �������" << endl;
				cout << "4 - ������� �������  �� �������" << endl;
				cout << "5 - ������" << endl;
				cout << "6 - ����� �������" << endl;
				cout << "0 - �����" << endl;
				cout << "===============================" << endl;
				while ((n_menu < 0) || (n_menu > 6))
					cin >> n_menu;
				switch (n_menu)
				{
				case 1:
				{
					cout << "������� ���������� �����: " << stop << endl;
					int temp;
					cin >> temp;
					while (temp != stop)
					{
						qu_int.Add(temp);
						cin >> temp;;
					}
					break;
				}
				case 2:
				{
					qu_int.Del();
					break;
				}
				case 3:
				{
					int temp;
					cout << "������� �������, ������� �������� �� ������ ���������:" << endl;
					cin >> temp;
					if (qu_int.Found(temp))
						cout << "������� ������." << endl;
					else
						cout << "������� �����������." << endl;
					break;
				}
				case 4:
				{
					int el;
					if (qu_int.GetEl(el))
						cout << "������� " << el << " ������� ������� �� ������ �������" << endl;
					else
						cout << "������� ������� ������� �� ������ �������" << endl;
					break;
				}
				case 5:
				{
					cout << "���������� �������:" << endl;
					qu_int.Print();
					break;
				}
				case 6:
				{
					cout << "����� ������� = " << qu_int.GetLength() << endl;
					break;
				}
				}
			}
			break;
		}//end qu_int
		
		case 2: //������ � qu_str
		{
			
			string stop = "stop";
			n_menu = -1;
			while (n_menu != 0)
			{
				n_menu = -1;
				cout << "1 - ����" << endl;
				cout << "2 - ������� ������� �� ������" << endl;
				cout << "3 - ��������� �������" << endl;
				cout << "4 - ������� �������  �� �������" << endl;
				cout << "5 - ������ �������" << endl;
				cout << "6 - ����� �������" << endl;
				cout << "0 - �����" << endl;
				while ((n_menu < 0) || (n_menu > 6))
					cin >> n_menu;
				switch (n_menu)
				{
				case 1:
				{
					cout << "������� ���������� �����: " << stop << endl;
					string temp;
					cin >> temp;
					while (temp != stop)
					{
						qu_str.Add(temp);
						cin >> temp;;
					}
					break;
				}
				case 2:
				{
					qu_str.Del();
					break;
				}
				case 3:
				{
					string temp;
					cout << "������� �������, ������� �������� �� ������ ���������:" << endl;
					cin >> temp;
					if (qu_str.Found(temp))
						cout << "������� ������." << endl;
					else
						cout << "������� �����������." << endl;
					break;
				}
				case 4:
				{
					string el;
					if (qu_str.GetEl(el))
						cout << "������� " << el << " ������� ������� �� ������ �������" << endl;
					else
						cout << "������� ������� ������� �� ������ �������" << endl;
					break;
				}
				case 5:
				{
					cout << "���������� �������:" << endl;
					qu_str.Print();
					break;
				}
				case 6:
				{
					cout << "����� ������� = " << qu_str.GetLength() << endl;
					break;
				}
				}
			}
			break;
		}//end case qu_str
		}//end switch n_qu_menu
	}//while n_qu_menu
}
