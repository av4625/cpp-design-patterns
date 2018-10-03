#ifndef MAZE_MAP_SITE_HPP
#define MAZE_MAP_SITE_HPP

enum direction { north, south, east, west };

class map_site
{
public:
    virtual ~map_site(){}
    virtual void enter() = 0;
};

#endif /* MAZE_MAP_SITE_HPP */
