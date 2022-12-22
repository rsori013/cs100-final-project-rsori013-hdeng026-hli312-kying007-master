cmake_minimum_required(VERSION 3.20)

project(test)

add_library(simpleLibrary ../src/Player.cpp ../src/Archer.cpp ../src/inventory.cpp ../src/main.cpp ../src/Wizard.cpp ../src/StoryBoard.cpp ../src/Mob.cpp ../src/Monk.cpp ../src/Warrior.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")
add_subdirectory(googletest)



add_executable(test
  test.cpp
)

target_link_libraries(test gtest)
target_link_libraries(test simpleLibrary)


