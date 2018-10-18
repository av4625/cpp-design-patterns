#include <maze_game.hpp>

std::unique_ptr<maze> maze_game::create_maze()
{
    std::unique_ptr<maze> maze = make_maze();
    std::shared_ptr<room> r1 = make_room(1);
    std::shared_ptr<room> r2 = make_room(2);
    std::shared_ptr<door> the_door = make_door(r1, r2);

    maze->add_room(r1);
    maze->add_room(r2);

    r1->set_side(north, make_wall());
    r1->set_side(east, the_door);
    r1->set_side(south, make_wall());
    r1->set_side(west, make_wall());

    r2->set_side(north, make_wall());
    r2->set_side(east, make_wall());
    r2->set_side(south, make_wall());
    r2->set_side(west, the_door);

    return std::move(maze);
}
