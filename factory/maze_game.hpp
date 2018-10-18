#ifndef FACTORY_MAZE_GAME_HPP
#define FACTORY_MAZE_GAME_HPP

#include <memory>
#include <maze.hpp>
#include <room.hpp>
#include <wall.hpp>
#include <door.hpp>

class maze_game
{
public:
    std::unique_ptr<maze> create_maze();

    // Factory methods
    virtual std::unique_ptr<maze>make_maze() const
    {
        return std::make_unique<maze>();
    }
    virtual std::shared_ptr<room>make_room(int room_num) const
    {
        return std::make_shared<room>(room_num);
    }
    virtual std::shared_ptr<wall>make_wall() const
    {
        return std::make_shared<wall>();
    }
    virtual std::shared_ptr<door>make_door(
            std::shared_ptr<room> r1, std::shared_ptr<room> r2) const
    {
        return std::make_shared<door>(r1, r2);
    }
};

#endif /* FACTORY_MAZE_GAME_HPP */
