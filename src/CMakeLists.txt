set(SRC_PATH ${PROJECT_SOURCE_DIR}/src)

add_library(source
    ${SRC_PATH}/connection.cpp
    )


add_executable(main
    ${SRC_PATH}/main.cpp)

target_link_libraries(main source)