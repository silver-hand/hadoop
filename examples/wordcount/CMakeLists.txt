
add_executable(wordcount wordcount.cc wordcount_main.cc)
target_link_libraries(wordcount hadooppipes crypto hadooputils pthread)