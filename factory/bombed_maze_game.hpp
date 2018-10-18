#ifndef FACTORY_BOMBED_MAZE_GAME_HPP
#define FACTORY_BOMBED_MAZE_GAME_HPP

#include <maze_game.hpp>

class bombed_maze_game : public maze_game
{
public:
    // Factory methods
    virtual std::shared_ptr<room> make_room(int room_num) const
    {
        // This function would make a bombed room not a room
        return std::make_shared<room>(room_num);
    }
    virtual std::shared_ptr<wall> make_wall() const
    {
        // This function would make a bombed wall not a wall
        return std::make_shared<wall>();
    }
};

#endif /* FACTORY_BOMBED_MAZE_GAME_HPP */
