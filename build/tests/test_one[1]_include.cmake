if(EXISTS "/Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/test_one[1]_tests.cmake")
  include("/Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/test_one[1]_tests.cmake")
else()
  add_test(test_one_NOT_BUILT test_one_NOT_BUILT)
endif()