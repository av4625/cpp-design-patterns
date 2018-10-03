#ifndef ABSTRACT_FACTORY_MAZE_GAME_HPP
#define ABSTRACT_FACTORY_MAZE_GAME_HPP

#include <memory>
#include <maze_factory.hpp>

class maze; // Forward declaration

class maze_game
{
public:
    std::unique_ptr<maze> create_maze(maze_factory& factory);
};

#endif /* ABSTRACT_FACTORY_MAZE_GAME_HPP */
