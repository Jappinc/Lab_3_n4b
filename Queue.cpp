#include "stdafx.h"
#include "Queue.h"

template <class T> class Queue
{
	Node<T> *Head, *Tail; //��������� �� ������ � ����� �������
public:
	Queue() :Head(NULL), Tail(NULL) {};

	//���������� (����������� ������)
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

	//���������� ��������� Node � ���������� � � ������� ��� ��������
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

	//������� �������� ��������
	void Del()
	{
		if (Head != NULL)
		{
			Node<T> *temp = Head;
			Head = Head->Next;
			delete temp;
		}
	}

	//��������� �������� (head) �� �������
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

	//����� ��������� ��������
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

	//������ ������� Queue 
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