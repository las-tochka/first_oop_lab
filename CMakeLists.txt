cmake_minimum_required(VERSION 3.16)
project(MyCppLab VERSION 1.0.0)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Включение всех предупреждений
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

# Добавление исполняемого файла
add_executable(${PROJECT_NAME}
    src/main.cpp
)

# Включение директории с заголовками
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Установка выходного каталога (опционально)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)