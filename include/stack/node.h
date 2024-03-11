#pragma once
template<class T>
struct node
{
  T data; //data
  node<T> *next; //pointer to next element
  node(const T &value) : data(value), next(nullptr){} // initialization list
};
