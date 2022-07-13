INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

AUX_SOURCE_DIRECTORY(./ WorkerManager_SRC)

ADD_LIBRARY(WorkerManager STATIC ${WorkerManager_SRC} employee.cpp manager.cpp boss.cpp)