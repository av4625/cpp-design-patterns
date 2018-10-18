# Factory Design Pattern

The factory takes the knoweledge of the object that the calling class needs,
out of the class and creates the correct object for the calling class. Factory
methods eliminate the need to bind application-specific classes into your code.
You can make multiple different types of mazes easily by by inheriting from
`maze_game` like `bomebed_maze_game` did. Not all factory functions have to be
overridded just the ones that you want to make different. For example
`bombed_maze_game` only overrode two factory functions.
The difference in abstract factories and factories is that abstract factories
have a common base type, which makes it easy to pass them into a function, the
function will take the base type as an argument, but any derived class can be
passed in. The function doesn't need to know which derived class is passed in
as it will make the object in the same way and you will get your derived object
out.
