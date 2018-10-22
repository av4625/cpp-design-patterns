add_executable(singleton main.cpp maze_factory.cpp)

target_include_directories(singleton PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(singleton PUBLIC maze)

