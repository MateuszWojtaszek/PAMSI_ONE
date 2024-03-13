#include<iostream>
#include "stack/stack.h"
#include "queue/queue.h"
#include "binaryTree/binaryTree.h"

int main(){
  BinaryTree<int> b1;
  b1.add(10);
  b1.add(9);
  b1.add(8);
  b1.add(7);
  b1.add(6);
  b1.add(5);
  b1.add(4);
  b1.add(3);
  b1.add(2);
  b1.add(4);
  b1.add(10);
  b1.add(9);
  b1.add(8);
  b1.add(7);
  b1.add(6);
  b1.add(5);
  b1.add(4);
  b1.add(3);
  b1.add(2);
  b1.add(4);
  b1.display();
  std::cout<<"w drzewie jest: "<<b1.num_of_elements()<<" elementow\n";
  b1.display_sorted();
  return 0;
}