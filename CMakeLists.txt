cmake_minimum_required(VERSION 3.13)
project(GameCollector)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH D:/Qt/Qt5.12.10/5.12.10/mingw73_64)
find_package(Qt5 COMPONENTS Widgets)
# add QT5

set(INCLUDES Games)
set(INCLUDES ${INCLUDES} Collector/CollectorWindow)

aux_source_directory(Games  SRCS)
aux_source_directory(Collector/CollectorWindow  SRCS)

include_directories(${INCLUDES})

link_directories(${INCLUDES})

add_executable(GameCollector main.cpp ${SRCS})

target_link_libraries(GameCollector Qt5::Widgets)