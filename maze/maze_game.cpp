#include <maze_game.hpp>
#include <maze.hpp>
#include <room.hpp>
#include <door.hpp>
#include <wall.hpp>

std::unique_ptr<maze> maze_game::create_maze()
{
    std::unique_ptr<maze> a_maze = std::make_unique<maze>();
    std::shared_ptr<room> r1 = std::make_shared<room>(1);
    std::shared_ptr<room> r2 = std::make_shared<room>(2);
    std::shared_ptr<door> the_door = std::make_shared<door>(r1, r2);

    a_maze->add_room(r1);
    a_maze->add_room(r2);

    r1->set_side(north, std::make_shared<wall>());
    r1->set_side(east, the_door);
    r1->set_side(south, std::make_shared<wall>());
    r1->set_side(west, std::make_shared<wall>());

    r2->set_side(north, std::make_shared<wall>());
    r2->set_side(east, std::make_shared<wall>());
    r2->set_side(south, std::make_shared<wall>());
    r2->set_side(west, the_door);

    return std::move(a_maze);
}
