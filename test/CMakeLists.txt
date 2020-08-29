set(test1_source main.cpp)
set(test2_source main2.cpp)

add_executable(test1 ${test1_source})
add_executable(test2 ${test2_source})

add_test(NAME Test_calculator COMMAND test1)
add_test(NAME Test_assert     COMMAND test2)