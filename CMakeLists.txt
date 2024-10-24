cmake_minimum_required(VERSION 3.10)
project(CrowServer)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Подключаем vcpkg через переменную окружения VCPKG_ROOT
if(DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "Vcpkg toolchain file")
else()
    message(FATAL_ERROR "Please define VCPKG_ROOT environment variable")
endif()

# Находим и подключаем пакет Crow через vcpkg
find_package(Crow CONFIG REQUIRED)

# Добавляем исполняемый файл
add_executable(CrowServer src/main.cpp)

# Линкуем библиотеку Crow с проектом
target_link_libraries(CrowServer PRIVATE Crow::Crow)