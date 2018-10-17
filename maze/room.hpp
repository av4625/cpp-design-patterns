#ifndef MAZE_ROOM_HPP
#define MAZE_ROOM_HPP

#include <map_site.hpp>
#include <memory>

class room : public map_site
{
public:
    room(int room_no) : room_number_(room_no){};

    std::shared_ptr<map_site> get_side(direction direction) const
    {
        return sides_[direction];
    }

    void set_side(direction direction, std::shared_ptr<map_site> map_site)
    {
        sides_[direction] = map_site;
    }

    int get_number() const
    {
        return room_number_;
    }

    virtual void enter(){};

private:
    std::shared_ptr<map_site> sides_[4];
    int room_number_;
};

#endif /* MAZE_ROOM_HPP */
