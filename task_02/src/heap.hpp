#pragma once

#include <cstddef>
#include <functional>
#include <queue>
#include <vector>

class MinHeap {
 public:
  void Push(int value);
  int Pop();
  size_t Size();

 private:
  std::vector<int> data_;
  void SiftUp(int elem);
  void SiftDown(int elem);
};
