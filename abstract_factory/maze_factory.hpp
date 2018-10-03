#ifndef ABSTRACT_FACTORY_MAZE_FACTORY_HPP
#define ABSTRACT_FACTORY_MAZE_FACTORY_HPP

#include <memory>
#include <maze.hpp>
#include <room.hpp>
#include <door.hpp>
#include <wall.hpp>

class maze_factory
{
public:
    virtual std::unique_ptr<maze> make_maze() const;
    virtual std::shared_ptr<wall> make_wall() const;
    virtual std::shared_ptr<room> make_room(int n) const;
    virtual std::shared_ptr<door> make_door(std::shared_ptr<room> r1,
                                            std::shared_ptr<room> r2) const;
};

#endif /* ABSTRACT_FACTORY_MAZE_FACTORY_HPP */

