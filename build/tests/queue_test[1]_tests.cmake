add_test([=[QueueTEST.BASIC_TEST]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/queue_test [==[--gtest_filter=QueueTEST.BASIC_TEST]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[QueueTEST.BASIC_TEST]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[QueueTEST.RANGE_ERROR]=]  /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests/queue_test [==[--gtest_filter=QueueTEST.RANGE_ERROR]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[QueueTEST.RANGE_ERROR]=]  PROPERTIES WORKING_DIRECTORY /Users/mateuszwojtaszek/projects/pamsi/project_one/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  queue_test_TESTS QueueTEST.BASIC_TEST QueueTEST.RANGE_ERROR)
