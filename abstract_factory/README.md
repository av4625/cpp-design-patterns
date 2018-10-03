# Abstract Factory Design Pattern

This solution shows the abstract factory design pattern.
You are able to pass a factory into the `create_maze` funtion and get a created
maze returned. If you wanted to extend this to have an enchanged maze, all
you need to do is have a new factory class that is derived from the
`maze_factory` class that creates the new enchanted rooms, doors, walls and
mazes. Then you would pass that factory into the `create_maze` function and it
would create an enchanted maze without the need to edit the `create_maze`
function.
