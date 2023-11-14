# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(Student-Record-System)

# Set C standard to C99
set(CMAKE_C_STANDARD 99)

# Add executable
add_executable(target_exec src/main.c src/dynarray.c src/student.c src/studentdata.c src/constants.c)

# Add include directories
target_include_directories(target_exec PUBLIC src)

# Optionally, you can add compiler flags
target_compile_options(target_exec PRIVATE -g -Wall -Wextra)

