cmake_minimum_required(VERSION 2.8)

project(libstaticlib_project)

include_directories(/development/nacl_sdk/pepper_49/toolchain/linux_pnacl/le32-nacl/usr/include/winpr2)

add_library(staticlibtest STATIC staticlibtest.c)

target_link_libraries(staticlibtest winpr ssl crypto)


install(TARGETS staticlibtest DESTINATION lib)
install(FILES staticlibtest.h DESTINATION include)
