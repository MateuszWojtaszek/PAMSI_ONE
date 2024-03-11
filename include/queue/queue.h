#pragma once
#include"q_node.h"

template<class T>
class Queue{
int queue_size=0;
q_node<T> *head;
q_node<T> *tail;
public:
Queue(){
  //on start head and tail points to nothing
  head=tail=nullptr;
};
~Queue()=default;

T first()const {return head->data;};
T last()const {return tail->data;};

void en_queue(const T &data){
 q_node<T> *new_data = new q_node<T>(data);
  // if queue is empty then new node is front and back at the same time
  if(is_empty()){
    head=tail=new_data;
    queue_size++;
    return;
  }
  tail->next=new_data;
  tail=new_data;
  queue_size++;
};
// first, create a temporary pointer to head, now make head points to it previous value,
// reduce queue_size, if queue size is 0 then tail must point to nullptr, delete temporary pointer
void de_queue(){
  if(is_empty()) throw std::range_error("queue is empty");
  q_node<T> *temp = head;
  head = head->next;
  queue_size--;
  if(queue_size==0) tail=nullptr;
  delete(temp);
};

bool is_empty() const{
  return queue_size==0;
};
int size() const{return queue_size;};
void print() const{
  q_node<T> *tmp=head;
  for(int i =0; i<queue_size; i++){
    std::cout<<tmp->data<<" ";
    tmp=tmp->next;
  }
  std::cout<<"\n";
  delete(tmp);
}
};