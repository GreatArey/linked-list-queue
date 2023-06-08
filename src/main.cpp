#include "queue.hpp"
#include <iostream>
#include <string>

int main()
{
  Queue<int> q;
  printf("deleted: %d\n", q.pop());
  q.push(1);
  q.push(2);
  q.push(3);
  q.clear();
  printf("deleted: %d\n", q.pop());
  q.push(4);
  printf("deleted: %d\n", q.pop());
  q.display();

  int a = 1, b = 2;
  Queue<int *> q2;
  printf("deleted: %p\n", q2.pop());
  q2.push(&a);
  q2.push(&b);
  q2.display();

  return 0;
}
