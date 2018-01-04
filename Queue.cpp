#include "stdafx.h"
#include "Queue.h"

template <class T> class Queue
{
	Node<T> *Head, *Tail; //Указатели на начало и конец очереди
public:
	Queue() :Head(NULL), Tail(NULL) {};

	//Деструктор (освобождаем память)
	~Queue()
	{
		Node<T> *temp = Head;
		while (temp != NULL)
		{
			temp = Head->Next;
			delete Head;
			Head = temp;
		}
	}

	//Заполнение структуры Node и добавления её в очередь как элемента
	void Add(T info)
	{
		Node<T> *temp = new Node<T>;
		temp->Info = info;
		temp->Next = NULL;

		if (Head != NULL)
		{
			Tail->Next = temp;
			Tail = temp;
		}
		else Head = Tail = temp;
	}

	//Функция удаления элемента
	void Del()
	{
		if (Head != NULL)
		{
			Node<T> *temp = Head;
			Head = Head->Next;
			delete temp;
		}
	}

	//Получение элемента (head) из очереди
	bool GetEl(T &el) {
		if (Head != NULL)
		{
			Node<T> *temp = Head;
			el = Head->Info;
			Head = Head->Next;
			delete temp;
			return true;
		}
		else
			return false;
	}

	//Поиск заданного элемента
	bool Found(T el)
	{
		Node<T> *ptr = Head;

		while ((ptr != NULL) && ((ptr->Info) != el))
		{
			ptr = ptr->Next;
		}

		return (ptr != NULL);
	}

	//Length Queue
	int GetLength()
	{
		int len = 0;
		Node<T> *ptr = Head;

		if (ptr == NULL)
			return 0;
		else
		{
			while (ptr != NULL)
			{
				ptr = ptr->Next;
				len++;
			}
			return len;
		}
	}

	//Печать очереди Queue 
	void Print()
	{
		Node<T> *temp = Head;
		while (temp != NULL)
		{
			cout << temp->Info << " ";
			temp = temp->Next;
		}
		cout << endl;
	}
};