#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Queue
{
private:
  struct Node
  {
    T data;
    Node *next;
  };

  Node *front;
  Node *back;
  uint32_t count;

public:
  Queue();
  void push(T x);
  T pop();
  void display();
  T top();
  T bottom();
  void clear();
};

template <typename T>
Queue<T>::Queue()
{
  count = 0;
  front = nullptr;
  back = nullptr;
}

template <typename T>
void Queue<T>::push(T x)
{
  count++;
  Node *temp = new Node;
  temp->data = x;
  temp->next = nullptr;

  if (front == nullptr && back == nullptr)
  {
    front = back = temp;
    return;
  }

  back->next = temp;
  back = temp;
}

template <typename T>
T Queue<T>::pop()
{
  Node *temp = front;
  if (front == nullptr)
  {
    cout << "Queue is Empty\n";
    return 0;
  }
  count--;
  if (front == back)
  {
    front = back = nullptr;
  }
  else
  {
    front = front->next;
  }
  T data = temp->data;
  delete temp;
  return data;
}

template <typename T>
void Queue<T>::display()
{
  Node *temp = front;

  if (temp == nullptr)
  {
    printf("Queue is Empty\n");
  }
  else
  {
    printf("Amount of Elements: %d\n\tQueue: ", count);

    while (temp != nullptr)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
}

template <typename T>
T Queue<T>::top()
{
  return front->data;
}

template <typename T>
T Queue<T>::bottom()
{
  return back->data;
}

template <typename T>
void Queue<T>::clear()
{
  Node *temp;
  Node *next;
  temp = front;

  for (int i = 0; i < count; i++)
  {
    next = temp->next;
    delete temp;
    temp = next;
  }

  front = back = nullptr;

  count = 0;
}
