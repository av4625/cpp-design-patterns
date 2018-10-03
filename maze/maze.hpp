#ifndef MAZE_MAZE_HPP
#define MAZE_MAZE_HPP

#include <memory>

class room; // Forward declaration

class maze
{
public:
    void add_room(std::shared_ptr<room> /*room*/){}
//    std::shared_ptr<room> room_no(int room_num) const;
};

#endif /* MAZE_MAZE_HPP */
