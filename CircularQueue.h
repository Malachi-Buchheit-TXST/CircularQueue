//
// Created by mb on 10/19/2020.
//

#ifndef CIRCULARQUEUE__CIRCULARQUEUE_H_
#define CIRCULARQUEUE__CIRCULARQUEUE_H_
#include <iostream>

class CircularQueue {
 public:
  explicit CircularQueue(int size);
  int size();
  int length();
  int dequeue();
  void enqueue(int);
  void print();
  ~CircularQueue();
 private:
  int* array;
  int head,
      tail,
      arr_size;
};

#endif //CIRCULARQUEUE__CIRCULARQUEUE_H_
