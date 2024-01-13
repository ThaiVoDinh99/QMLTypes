cmake_minimum_required(VERSION 3.10)
project(TextInput)

# Cài đặt Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Gui Quick Core)

set(CMAKE_PREFIX_PATH "~/Qt/6.5.3/gcc_64/lib/cmake")

add_executable(ExeTextInput main.cpp main.qml)

target_link_libraries(ExeTextInput Qt6::Quick Qt6::Gui)