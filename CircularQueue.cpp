//
// Created by mb on 10/19/2020.
//

#include "CircularQueue.h"
CircularQueue::CircularQueue(int size) {
  array = new int[size];
  arr_size = size;
  head = 0;
  tail = 0;
  empty = true;
}

int CircularQueue::size() {
  return arr_size;
}

int CircularQueue::length() {
  if (empty)
    return 0;
  else if (tail > head)
    return tail - head;
  return arr_size + tail - head;
}

int CircularQueue::dequeue() {
  if (empty)
    throw;
  int out = array[head];
  head = (head + 1) % arr_size;
  if (head == tail)
    empty = true;
  return out;
}

void CircularQueue::enqueue(int val) {
  array[tail] = val;
  if (head == tail && !empty)
    head = (head + 1) % arr_size;
  tail = (tail + 1) % arr_size;
  empty = false;
}

void CircularQueue::print() {
  std::cout << "[ ";
  for (int i = 0; i < arr_size; i++) {
    if (head == i)
      std::cout << "H";
    if (tail == i)
      std::cout << "T";
    std::cout << array[i] << " ";
  }
  std::cout << "]" << std::endl;
}

CircularQueue::~CircularQueue() {
  delete [] array;
}