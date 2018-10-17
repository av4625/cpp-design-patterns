add_executable(builder main.cpp maze_game.cpp standard_maze_builder.cpp)

target_include_directories(builder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(builder PUBLIC maze)

