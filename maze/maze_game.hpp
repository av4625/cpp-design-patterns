#ifndef MAZE_MAZE_GAME_HPP
#define MAZE_MAZE_GAME_HPP

#include <memory>

class maze; // Forward declaration

class maze_game
{
public:
    std::unique_ptr<maze> create_maze();
};

#endif /* MAZE_MAZE_GAME_HPP */
