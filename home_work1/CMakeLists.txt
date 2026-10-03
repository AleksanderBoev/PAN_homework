cmake_minimum_required(VERSION 3.15)
project(PAN_BOEV VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES "*.cpp")

# 2. Перебираем каждый найденный файл в цикле
foreach(SOURCE_FILE ${SOURCES})
    # Получаем имя файла без расширения и без пути (например, "main" из "src/main.cpp")
    get_filename_component(BINARY_NAME ${SOURCE_FILE} NAME_WE)
    
    # Добавляем исполняемый файл
    add_executable(${BINARY_NAME} ${SOURCE_FILE})
endforeach()