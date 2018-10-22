# Singleton Design Pattern

The singleton design pattern ensures that a class only has one instance and
provides a global point of access to it.
The constructer is protected as this ensures that no one else can create a
`maze_factory`. The `instance` function will create a `maze_factory` if one
isn't already created and return it or it will just return a reference to the
already created one. 
The `instance` function could take a parameter if a different type of
`maze_factory` needed to be created (a base class type for example). It would
then just create the base class and return it. The only downside to this is that
the `instance` function would need to be added to everytime a new base class is
added.

