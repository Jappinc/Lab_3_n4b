#include <iostream>
#include <Windows.h>
#include <string>
#include "Queue.h"
#include "Queue.cpp"
/*
4b.Реализовать шаблон класса очередь (Queue<X>), хранящий элементы произвольного
типа. Класс должен в обязательном порядке содержать методы:
- Вычисление длины очереди;
- Добавление нового элемента в конец очереди;
- Получение элемента из головы очереди;
- Удаление элемента из головы;
- Поиск элемента в очереди;
- Печать очереди.

Реализация очереди с помощью списка.
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
		cout << "1 - Целое число" << endl;
		cout << "2 - Строка" << endl;
		cout << "0 - Выход" << endl;
		cout << "===============" << endl;

		while ((n_qu_menu < 0) || (n_qu_menu > 3))
			cin >> n_qu_menu;
		switch (n_qu_menu)
		{
		case 1: //работа с qu_int
		{
			n_menu = -1;
			int stop = 0;
			while (n_menu != 0)
			{
				n_menu = -1;
				cout << "===============================" << endl;
				cout << "1 - Ввод" << endl;
				cout << "2 - Удалить элемент из головы" << endl;
				cout << "3 - Проверить наличие" << endl;
				cout << "4 - Достать элемент  из очереди" << endl;
				cout << "5 - Печать" << endl;
				cout << "6 - Длина очереди" << endl;
				cout << "0 - Выход" << endl;
				cout << "===============================" << endl;
				while ((n_menu < 0) || (n_menu > 6))
					cin >> n_menu;
				switch (n_menu)
				{
				case 1:
				{
					cout << "Признак завершения ввода: " << stop << endl;
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
					cout << "Введите элемент, наличие которого вы хотите проверить:" << endl;
					cin >> temp;
					if (qu_int.Found(temp))
						cout << "Элемент найден." << endl;
					else
						cout << "Элемент отсутствует." << endl;
					break;
				}
				case 4:
				{
					int el;
					if (qu_int.GetEl(el))
						cout << "Элемент " << el << " успешно получен из головы очереди" << endl;
					else
						cout << "Попытка достать элемент из пустой очереди" << endl;
					break;
				}
				case 5:
				{
					cout << "Полученная очередь:" << endl;
					qu_int.Print();
					break;
				}
				case 6:
				{
					cout << "Длина очереди = " << qu_int.GetLength() << endl;
					break;
				}
				}
			}
			break;
		}//end qu_int
		
		case 2: //работа с qu_str
		{
			
			string stop = "stop";
			n_menu = -1;
			while (n_menu != 0)
			{
				n_menu = -1;
				cout << "1 - Ввод" << endl;
				cout << "2 - Удалить элемент из головы" << endl;
				cout << "3 - Проверить наличие" << endl;
				cout << "4 - Достать элемент  из очереди" << endl;
				cout << "5 - Печать очереди" << endl;
				cout << "6 - Длина очереди" << endl;
				cout << "0 - Выход" << endl;
				while ((n_menu < 0) || (n_menu > 6))
					cin >> n_menu;
				switch (n_menu)
				{
				case 1:
				{
					cout << "Признак завершения ввода: " << stop << endl;
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
					cout << "Введите элемент, наличие которого вы хотите проверить:" << endl;
					cin >> temp;
					if (qu_str.Found(temp))
						cout << "Элемент найден." << endl;
					else
						cout << "Элемент отсутствует." << endl;
					break;
				}
				case 4:
				{
					string el;
					if (qu_str.GetEl(el))
						cout << "Элемент " << el << " успешно получен из головы очереди" << endl;
					else
						cout << "Попытка достать элемент из пустой очереди" << endl;
					break;
				}
				case 5:
				{
					cout << "Полученная очередь:" << endl;
					qu_str.Print();
					break;
				}
				case 6:
				{
					cout << "Длина очереди = " << qu_str.GetLength() << endl;
					break;
				}
				}
			}
			break;
		}//end case qu_str
		}//end switch n_qu_menu
	}//while n_qu_menu
}
