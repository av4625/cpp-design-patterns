#include <standard_maze_builder.hpp>
#include <room.hpp>
#include <door.hpp>
#include <wall.hpp>
#include <maze.hpp>

void standard_maze_builder::build_maze()
{
    current_maze_ = std::make_unique<maze>();
}

std::unique_ptr<maze> standard_maze_builder::get_maze()
{
    return std::move(current_maze_);
}

void standard_maze_builder::build_room(int room_num)
{
    if (!current_maze_->room_no(room_num))
    {
        std::shared_ptr<room> room(std::make_shared<room>(room_num));
        current_maze_->add_room(room);

        room->set_side(north, std::make_shared<wall>());
        room->set_side(south, std::make_shared<wall>());
        room->set_side(east, std::make_shared<wall>());
        room->set_side(west, std::make_shared<wall>());
    }
}

void standard_maze_builder::build_door(int room1, int room2)
{
    std::shared_ptr<room> r1(current_maze_->room_no(room1));
    std::shared_ptr<room> r2(current_maze_->room_no(room2));
    std::shared_ptr<door> d(std::make_shared<door>(r1, r2));

    r1->set_side(common_wall(r1, r2), d);
    r2->set_side(common_wall(r2, r1), d);
}
