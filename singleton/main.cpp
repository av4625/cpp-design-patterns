#include <maze_factory.hpp>
#include <maze.hpp>
#include <memory>

int main()
{
    std::shared_ptr<maze_factory> factory(maze_factory::instance());
    std::unique_ptr<maze> mazey(factory->make_maze());

    return 1;
}
