#ifndef SINGLETON_MAZE_FACTORY_HPP
#define SINGLETON_MAZE_FACTORY_HPP

#include <memory>
#include <maze.hpp>
#include <room.hpp>
#include <door.hpp>
#include <wall.hpp>

class maze_factory
{
public:
    static std::shared_ptr<maze_factory> instance();
    virtual std::unique_ptr<maze> make_maze() const;
    virtual std::shared_ptr<wall> make_wall() const;
    virtual std::shared_ptr<room> make_room(int n) const;
    virtual std::shared_ptr<door> make_door(std::shared_ptr<room> r1,
                                            std::shared_ptr<room> r2) const;

protected:
    // Throws linker errors if the '= default' is not here
    maze_factory() = default;

private:
    static std::shared_ptr<maze_factory> instance_;
};

#endif /* SINGLETON_MAZE_FACTORY_HPP */

