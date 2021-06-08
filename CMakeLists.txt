cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

find_package( DD4hep REQUIRED COMPONENTS DDCore DDG4 )

dd4hep_add_plugin(athena_ideal_rich SOURCES athena_ideal_rich.cpp)
target_link_libraries(athena_ideal_rich PUBLIC DD4hep::DDCore DD4hep::DDRec)
