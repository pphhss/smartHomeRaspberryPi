set(TEST_SOURCE_PATH ${PROJECT_SOURCE_DIR}/test)
file(GLOB TEST_SOURCE_LIST ${TEST_SOURCE_PATH}/*.cpp)

add_executable(unitTest ${TEST_SOURCE_LIST})
target_link_libraries(unitTest 
    /usr/lib/libgtest.a 
    /usr/lib/libgtest_main.a
    pthread)
target_link_libraries(unitTest source)
add_test(NAME unittest COMMAND unitTest)