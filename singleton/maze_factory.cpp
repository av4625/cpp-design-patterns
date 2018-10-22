#include <maze_factory.hpp>

std::shared_ptr<maze_factory> maze_factory::instance_(nullptr);

std::shared_ptr<maze_factory> maze_factory::instance()
{
    if (!instance_)
    {
        // This struct is needed as 'make_shared' can't call the protected
        // constructor to contruct a 'maze_factory'
        struct make_shared_enabler : public maze_factory {};
        instance_ = std::make_shared<make_shared_enabler>();
    }

    return instance_;
}

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

