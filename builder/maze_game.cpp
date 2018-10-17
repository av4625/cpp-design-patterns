#include <maze_game.hpp>
#include <maze_builder.hpp>
#include <maze.hpp>
#include <iostream>

std::unique_ptr<maze> maze_game::create_maze(maze_builder& builder)
{
    std::cout << "1" << std::endl;
    builder.build_maze();
    std::cout << "2" << std::endl;
    builder.build_room(1);
    std::cout << "3" << std::endl;
    builder.build_room(2);
    std::cout << "4" << std::endl;
    builder.build_door(1, 2);
    std::cout << "5" << std::endl;

    return std::move(builder.get_maze());
}
