cmake_minimum_required(VERSION 3.15)
project(ProjetC)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(ProjetC main.cpp perso.cpp map.cpp fonctionnement.cpp perso.h map.h fonctionnement.h obstacle.cpp obstacle.h ligne.cpp ligne.h)
target_link_libraries(ProjetC ${CONAN_LIBS})