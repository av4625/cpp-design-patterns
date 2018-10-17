#ifndef BUILDER_MAZE_BUILDER_HPP
#define BUILDER_MAZE_BUILDER_HPP

#include <memory>

class maze; // Forward declaration

class maze_builder
{
public:
    virtual void build_maze(){}
    virtual void build_room(int room){}
    virtual void build_door(int room_from, int room_to){}
    virtual std::unique_ptr<maze> get_maze() { return nullptr; }
};

#endif /* BUILDER_MAZE_BUILDER_HPP */
