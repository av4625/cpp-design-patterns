#include <standard_maze_builder.hpp>
#include <maze_game.hpp>
#include <maze.hpp>

int main()
{
    standard_maze_builder builder;
    maze_game game;
    std::unique_ptr<maze> maze = game.create_maze(builder);

    return 1;
}
