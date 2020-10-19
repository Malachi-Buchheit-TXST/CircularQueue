#include <iostream>
#include "CircularQueue.h"

void dequeue(CircularQueue& c, int n) {
  std::cout << "DEQUEUE:" << std::endl;
  std::cout << "Values: ";
  for (int i = 0; i < n; i++) {
    std::cout << c.dequeue() << " ";
  }
  std::cout << std::endl;
  std::cout << c.length() << " ";
  c.print();
  std::cout << std::endl;
}

void enqueue(CircularQueue& c, int n) {
  std::cout << "ENQUEUE:" << std::endl;
  std::cout << "Lengths: ";
  std::cout << c.length() << " ";
  for (int i = 0; i < n; i++) {
    c.enqueue(i);
    std::cout << c.length() << " ";
  }
  std::cout << std::endl;
  c.print();
  std::cout << std::endl;
}

int main() {
  CircularQueue c = CircularQueue(6);

  enqueue(c, 5);
  dequeue(c, 4);
  enqueue(c, 3);
  dequeue(c, 2);

  dequeue(c, 1);

  return 0;
}