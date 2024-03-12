project(Project_ONE)

add_library(stack stack.cpp)
add_library(queue queue.cpp)
add_library(binaryTree binaryTree.cpp)

target_include_directories(stack
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include) 

target_include_directories(queue
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/../include) 

target_include_directories(binaryTree
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/../include) 