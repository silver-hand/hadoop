cmake_minimum_required(VERSION 2.6) 

project(hadoop_ex)
set(HADOOP_HOME "/usr/local/hadoop")
include_directories(${HADOOP_HOME}/include)
link_directories(${HADOOP_HOME}/lib/native)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(wordcount)