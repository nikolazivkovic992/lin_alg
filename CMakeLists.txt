cmake_minimum_required(VERSION 3.16)

# set the project name
project(TestLinAlg VERSION 1.0)

configure_file(${PROJECT_NAME}Config.h.in ${PROJECT_NAME}Config.h)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the LinAlgebra library
add_subdirectory(LinAlgebra)

# add the executable
add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC LinAlgebra)

target_include_directories(${PROJECT_NAME} PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/LinAlgebra"
                          )