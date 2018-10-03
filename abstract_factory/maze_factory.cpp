#include <maze_factory.hpp>

std::unique_ptr<maze> maze_factory::make_maze() const
{
    return std::make_unique<maze>();
}

std::shared_ptr<wall> maze_factory::make_wall() const
{
    return std::make_shared<wall>();
}

std::shared_ptr<room> maze_factory::make_room(int n) const
{
    return std::make_shared<room>(n);
}

std::shared_ptr<door> maze_factory::make_door(std::shared_ptr<room> r1,
                                              std::shared_ptr<room> r2) const
{
    return std::make_shared<door>(r1, r2);
}

