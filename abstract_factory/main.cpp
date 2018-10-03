#include <maze_game.hpp>
#include <maze_factory.hpp>
#include <maze.hpp>
#include <memory>

int main()
{
    maze_game maze_game;
    maze_factory factory;

    std::unique_ptr<maze> maze = maze_game.create_maze(factory);

    return 1;
}
