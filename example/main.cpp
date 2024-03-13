#include<iostream>
#include "stack/stack.h"
#include "queue/queue.h"
#include "binaryTree/binaryTree.h"

int main(){
  BinaryTree<int> b1;
  b1.add(10);
  b1.add(8);
  b1.add(9);
  b1.add(11);
  b1.add(11);
  b1.add(10);
  b1.add(8);
  b1.add(9);
  b1.add(11);
  b1.add(11);
  b1.display();
  std::cout<<"w drzewie jest: "<<b1.num_of_elements()<<" elementow\n";
  return 0;
}