#pragma once
#include "bT_node.h"


template<class T>
class BinaryTree{
bT_node<T> *root=nullptr;
int elements =0;
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

void display(){
  std::cout<<root->data<<"\n";
  std::cout<<root->l_child->data<<"\n";
  std::cout<<root->l_child->r_child->data<<"\n";
}
};
