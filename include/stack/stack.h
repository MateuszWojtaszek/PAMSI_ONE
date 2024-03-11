#pragma once //prevente from being included more times than one
#include "node.h"
template<class T>

class Stack {
int counter=0;
node<T> *head;
public:
Stack() = default;
~Stack() = default;
bool is_empty() const;
T top() const;
void push(const T &new_data);
void pop();

};

template<class T>

T Stack<T>::top() const{
return head->data;
}

template<class T>
bool Stack<T>::is_empty()const{
  return counter <= 0;
}

template<class T>
void Stack<T>::push(const T &new_data){
  //create new node - this is head of the stack
  node<T>*new_node = new node<T>(new_data);
  //new node "looks" for erlier head
  new_node->next = head;
  // now head is the new node
  head = new_node;
  //increment
  counter++;
}
template<class T>
void Stack<T>::pop(){
  // if is empty throw error
  if(is_empty()) throw std::range_error("stack is empty");
  // create new node that points to head
  node<T> *node = head;
  //made head points to previous element
  head = head->next;
  //delete node that that point to the first element
  delete node;
  //deicrement counter
  counter --;
}

