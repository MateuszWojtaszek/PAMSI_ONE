if(EXISTS "/Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/binaryTree_test[1]_tests.cmake")
  include("/Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/binaryTree_test[1]_tests.cmake")
else()
  add_test(binaryTree_test_NOT_BUILT binaryTree_test_NOT_BUILT)
endif()
