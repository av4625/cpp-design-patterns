#ifndef MAZE_WALL_HPP
#define MAZE_WALL_HPP

#include <map_site.hpp>

class wall : public map_site
{
public:
    virtual void enter(){};
};

#endif /* MAZE_WALL_HPP */
