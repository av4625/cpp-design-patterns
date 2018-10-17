#ifndef MAZE_MAZE_HPP
#define MAZE_MAZE_HPP

#include <memory>
#include <vector>
#include <room.hpp>

class maze
{
public:
    maze() : maze_(10){}
    void add_room(std::shared_ptr<room> room)
    {
        maze_.insert(maze_.begin() + room->get_number(), room);
    }
    std::shared_ptr<room> room_no(int room_num) const
    {
        return maze_.at(room_num);
    };
private:
    std::vector<std::shared_ptr<room>> maze_;
};

#endif /* MAZE_MAZE_HPP */
