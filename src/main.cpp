#include "queue.hpp"
#include <iostream>
#include <string>

int main()
{
  Queue<int> q; // Создаем очередь целых чисел

  q.push(1);   // Добавление элемента
  q.push(2);   // Добавление элемента
  q.push(3);   // Добавление элемента
  q.display(); // Смотрим очередь
  q.pop();     // Достаем элемент
  q.display(); // Смотрим очередь
  q.clear();   // Очищаем очередь
  q.display(); // Смотрим очередь
  q.push(4);   // Добавляем элемент
  q.display(); // Смотрим очередь

  string a = "aaa", b = "bbb", c = "ccc";
  Queue<string> q2; // Создаем очередь строк

  q2.push(a);   // Добавление элемента
  q2.push(b);   // Добавление элемента
  q2.display(); // Смотрим очередь
  q2.push(c);   // Добавление элемента
  q2.pop();     // Достаем элемент
  q2.display(); // Смотрим очередь

  return 0;
}
