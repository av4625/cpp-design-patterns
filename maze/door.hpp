#ifndef MAZE_DOOR_HPP
#define MAZE_DOOR_HPP

#include <map_site.hpp>
#include <memory>

class room; // Forward declaration

class door : public map_site
{
public:
    door(std::shared_ptr<room> room1, std::shared_ptr<room> room2)
        : room1_(room1), room2_(room2){};
    virtual void enter(){};
//    std::shared_ptr<room> other_side_from(std::shared_ptr<room> room);

private:
    std::shared_ptr<room> room1_;
    std::shared_ptr<room> room2_;
    bool _is_open;
};

#endif /* MAZE_DOOR_HPP */
