cmake_minimum_required(VERSION 3.10)
project(CuentaBancaria)

set(CMAKE_CXX_STANDARD 17)

add_executable(cuenta_bancaria
    src/CuentaBancaria.cpp
    src/main.cpp
)

target_include_directories(cuenta_bancaria PRIVATE include)