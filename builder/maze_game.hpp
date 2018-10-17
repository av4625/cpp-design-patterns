#ifndef BUILDER_MAZE_GAME_HPP
#define BUILDER_MAZE_GAME_HPP

#include <memory>

class maze; // Forward declaration
class maze_builder; // Forward declaration

class maze_game
{
public:
    std::unique_ptr<maze> create_maze(maze_builder& builder);
};

#endif /* BUILDER_MAZE_GAME_HPP */
