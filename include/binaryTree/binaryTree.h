#pragma once
#include "bT_node.h"


template<class T>
class BinaryTree{
bT_node<T> *root=nullptr;
int elements =0;
// passing pointer by reference to change it in this function
void addNext(bT_node<T>* &rootNode,bT_node<T>* &newNode){
  if(rootNode==nullptr){
    rootNode=newNode;
    elements++;
}
  else if(rootNode->data>newNode->data){
   addNext(rootNode->l_child,newNode);
  }
  else{
    addNext(rootNode->r_child,newNode);
  }
}

void displayHelper(bT_node<T>* rootNode) const{
  if(rootNode==nullptr){
    return;
  }
   else {
    std::cout<<rootNode->data<<"\n";
    displayHelper(rootNode->l_child);
    displayHelper(rootNode->r_child);
   }
}
void display_sortedHelper(bT_node<T>* rootNode){
if(rootNode==nullptr){
      return;
} 
else{
  display_sortedHelper(rootNode->l_child);
  std::cout << rootNode->data << "\n";
  display_sortedHelper(rootNode->r_child);
}
}
public:
BinaryTree()=default;

void add(const T &value){
  bT_node<T> *new_data = new bT_node<T>(value);
  if(root==nullptr){
    root=new_data;
    elements++;
}
  else if(root->data>new_data->data){
    addNext(root->l_child,new_data);
  }
  else{
    addNext(root->r_child,new_data);
  }
}
void display() const{
  displayHelper(this->root);
}


int num_of_elements()const {
  return elements;
  }

void display_sorted(){
  display_sortedHelper(this->root);
}
};
