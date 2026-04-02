add_library(MyLibrary)


target_sources(MyLibrary
                    PRIVATE src/Library.cpp
                    PUBLIC FILE_SET headers
                    TYPE HEADERS BASE_DIRS include 
                    FILES include/LibraryHeader.h
)

target_include_directories(MyLibrary 
                                PUBLIC include)
    