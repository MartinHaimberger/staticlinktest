cmake_minimum_required(VERSION 2.8)

project(libstaticlib_project)

add_library(staticlibtest STATIC staticlibtest.c)

install(TARGETS staticlibtest DESTINATION lib)
install(FILES staticlibtest.h DESTINATION include)
