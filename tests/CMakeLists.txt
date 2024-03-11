project(Project_ONE)

include(FetchContent)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_GetProperties(googletest)

if (NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR}
    ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

FetchContent_MakeAvailable(googletest)

add_executable(
  stack_test
  stack_test.cpp
)

add_executable(
  queue_test
  queue_test.cpp
)
target_link_libraries(
  stack_test
  GTest::gtest_main
  stack
)

target_link_libraries(
  queue_test
  GTest::gtest_main
  queue
)

include(GoogleTest)
gtest_discover_tests(stack_test)

include(GoogleTest)
gtest_discover_tests(queue_test)
