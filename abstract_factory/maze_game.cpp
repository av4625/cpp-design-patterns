#include <maze_game.hpp>

std::unique_ptr<maze> maze_game::create_maze(maze_factory& factory)
{
    std::unique_ptr<maze> a_maze = factory.make_maze();
    std::shared_ptr<room> r1 = factory.make_room(1);
    std::shared_ptr<room> r2 = factory.make_room(2);
    std::shared_ptr<door> the_door = factory.make_door(r1, r2);

    a_maze->add_room(r1);
    a_maze->add_room(r2);

    r1->set_side(north, factory.make_wall());
    r1->set_side(east, the_door);
    r1->set_side(south, factory.make_wall());
    r1->set_side(west, factory.make_wall());

    r2->set_side(north, factory.make_wall());
    r2->set_side(east, factory.make_wall());
    r2->set_side(south, factory.make_wall());
    r2->set_side(west, the_door);

    return std::move(a_maze);
}
