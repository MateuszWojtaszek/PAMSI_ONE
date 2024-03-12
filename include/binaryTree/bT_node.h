#pragma once
#include<iostream>
template<class T>
struct bT_node
{
  T data; //data
  bT_node<T> *l_child; //pointer to left child
  bT_node<T> *r_child; //pointer to right child
  bT_node(const T &value) : data(value), l_child(nullptr),r_child(nullptr){} // initialization list
};

