#pragma once
template<class T>
struct q_node
{
  T data; //data
  q_node<T> *next; //pointer to next element
  q_node(const T &value) : data(value), next(nullptr){} // initialization list
};



