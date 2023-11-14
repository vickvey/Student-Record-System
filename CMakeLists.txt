# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(Student-Record-System)

# Set C standard to C99
set(CMAKE_C_STANDARD 99)

# Add executable
add_executable(target_exec src/main.c src/dynarray.c src/student.c src/studentdata.c)

# Add include directories
target_include_directories(target_exec PUBLIC src)

# You can add more source files as needed
# add_executable(YourExecutableName src/main.c src/dynarray.c src/student.c src/studentdata.c ...)

# If you have additional libraries, add them here
# target_link_libraries(YourExecutableName YourLibraryName)

# If you have additional dependencies, add them here
# find_package(YourDependency REQUIRED)
# target_link_libraries(YourExecutableName YourDependency::YourLibrary)

# Optionally, you can add compiler flags
target_compile_options(target_exec PRIVATE -Wall -Wextra)

# You can specify the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

