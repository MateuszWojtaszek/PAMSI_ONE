add_test([=[StackTEST.IS_EMPTY]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/stack_test [==[--gtest_filter=StackTEST.IS_EMPTY]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTEST.IS_EMPTY]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[StackTEST.RANGE_ERROR]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/stack_test [==[--gtest_filter=StackTEST.RANGE_ERROR]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTEST.RANGE_ERROR]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[StackTEST.PUSH_TEST]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/stack_test [==[--gtest_filter=StackTEST.PUSH_TEST]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTEST.PUSH_TEST]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[StackTEST.POP_TEST]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/stack_test [==[--gtest_filter=StackTEST.POP_TEST]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTEST.POP_TEST]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[StackTEST.STACK_OVERFLOW]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/stack_test [==[--gtest_filter=StackTEST.STACK_OVERFLOW]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[StackTEST.STACK_OVERFLOW]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  stack_test_TESTS StackTEST.IS_EMPTY StackTEST.RANGE_ERROR StackTEST.PUSH_TEST StackTEST.POP_TEST StackTEST.STACK_OVERFLOW)
