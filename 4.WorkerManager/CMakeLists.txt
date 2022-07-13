cmake_minimum_required(VERSION 3.21)
project(4_)
ADD_SUBDIRECTORY(src)
INCLUDE_DIRECTORIES(include)
set(CMAKE_CXX_STANDARD 14)

ADD_EXECUTABLE(4_ main.cpp include/worker.h include/employee.h include/manager.h include/boss.h)

TARGET_LINK_LIBRARIES(4_ WorkerManager)
