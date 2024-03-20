#include<iostream>
#include "stack/stack.h"
#include "queue/queue.h"
#include "binaryTree/binaryTree.h"

int main(){
  BinaryTree<int> b1;
  std::cout<<"w drzewie jest: "<<b1.num_of_elements()<<" elementow\n";
  b1.display_sorted();
  return 0;
}