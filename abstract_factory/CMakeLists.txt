add_executable(abstract_factory main.cpp maze_factory.cpp maze_game.cpp)

target_include_directories(abstract_factory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(abstract_factory PUBLIC maze)

