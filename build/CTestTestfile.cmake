# CMake generated Testfile for 
# Source directory: C:/Users/matias/Desktop/Pruebafallo
# Build directory: C:/Users/matias/Desktop/Pruebafallo/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(UnitTests "runUnitTests")
set_tests_properties(UnitTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/matias/Desktop/Pruebafallo/CMakeLists.txt;21;add_test;C:/Users/matias/Desktop/Pruebafallo/CMakeLists.txt;0;")
subdirs("ext/googletest")
