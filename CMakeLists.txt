cmake_minimum_required(VERSION 3.5.0)
project(c_test VERSION 0.1.0 LANGUAGES C CXX)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(c_test main.cpp)

# 使用/bin/sh -c 启动shell环境执行命令 - 语法简单
add_custom_target(clean-a
    COMMAND /bin/sh -c "rm -rf ${CMAKE_BINARY_DIR}/*"
)