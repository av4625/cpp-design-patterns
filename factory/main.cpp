#include <maze.hpp>
#include <maze_game.hpp>
#include <bombed_maze_game.hpp>

int main()
{
    maze_game maze_game;
    bombed_maze_game bombed_maze_game;
    std::unique_ptr<maze> standard_maze = maze_game.create_maze();
    std::unique_ptr<maze> bombed_maze = bombed_maze_game.create_maze();

    return 1;
}
