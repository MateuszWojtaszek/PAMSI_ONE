add_test([=[BinaryTreeTest.add_100000000_TEST]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/binaryTree_test [==[--gtest_filter=BinaryTreeTest.add_100000000_TEST]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[BinaryTreeTest.add_100000000_TEST]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[BinaryTreeTest.print_100_TEST]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/binaryTree_test [==[--gtest_filter=BinaryTreeTest.print_100_TEST]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[BinaryTreeTest.print_100_TEST]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  binaryTree_test_TESTS BinaryTreeTest.add_100000000_TEST BinaryTreeTest.print_100_TEST)
