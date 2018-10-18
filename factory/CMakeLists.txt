add_executable(factory main.cpp maze_game.cpp)

target_include_directories(factory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(factory PUBLIC maze)

