﻿Задача
------------------------
Реализовать шаблон класса очередь (Queue<X>), хранящий элементы произвольного
типа. Класс должен в обязательном порядке содержать методы:
- Вычисление длины очереди;
- Добавление нового элемента в конец очереди;
- Получение элемента из головы очереди;
- Удаление элемента из головы;
- Поиск элемента в очереди;
- Печать очереди.

Реализация очереди с помощью списка.
=====
Queue.h
---
```
template <class T> struct Node
{
	T	  Info;
	Node *Next;
};
```

Queue.cpp
---
Деструктор (освобождаем память)
```
~Queue()
```

Заполнение структуры Node и добавления её в очередь как элемента
```
void Add(T info)
```

Функция удаления элемента
```
void Del()
```

Получение элемента (head) из очереди
```
bool GetEl(T &el) 
```

Поиск заданного элемента
```
bool found(T el)
```

Размер Queue
```
int GetLength()
```

Печать очереди Queue 
```
void Print()
```