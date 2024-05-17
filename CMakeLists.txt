cmake_minimum_required(VERSION 3.27)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
  CACHE STRING "Vcpkg toolchain file")
PROJECT(demo)

find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
AUX_SOURCE_DIRECTORY(. DIR_SRCS)
ADD_EXECUTABLE(demo ${DIR_SRCS})

target_link_libraries(demo  PRIVATE spdlog::spdlog)
