cmake_minimum_required(VERSION 3.10)
project(CoreDS C)

# 自动寻找所有头文件路径，省去你写 ../../ 的烦恼
include_directories(include/List include/Stack include/Queue include/graph include/array)

# 自动搜寻 src 目录下所有的 .c 文件
file(GLOB_RECURSE SOURCES "src/*.c")

# 编译生成名为 main 的程序
add_executable(main ${SOURCES})