#ifndef BUILDER_STANDARD_MAZE_BUILDER_HPP
#define BUILDER_STANDARD_MAZE_BUILDER_HPP

#include <memory>
#include <map_site.hpp>
#include <maze_builder.hpp>

enum direction; // Forward declaration
class maze; // Forward declaration
class room; // Forward declaration

class standard_maze_builder : public maze_builder
{
public:
    standard_maze_builder() : current_maze_(nullptr){};

    virtual void build_maze();
    virtual void build_room(int room_num);
    virtual void build_door(int room1, int room2);
    virtual std::unique_ptr<maze> get_maze();
private:
    // Determines the direction of the common wall between two rooms
    direction common_wall(
            std::shared_ptr<room> room1, std::shared_ptr<room> room2)
    {
        return north;
    }
    std::unique_ptr<maze> current_maze_;
};

#endif /* BUILDER_STANDARD_MAZE_BUILDER_HPP */
