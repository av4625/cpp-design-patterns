# Builder Design Pattern

This solution shows the builder design pattern.
It is similar to the abstract factory design pattern, but it hides away the
internal representation of the the `maze`. For example the classes that define
`rooms`, `doors` etc and how these classes are made up. This means the internal
representation can change and the person creating the maze doesnt need to care.
The main difference between abstract factory and builder is that builder lets
you build a complex object step by step and abstract factorys emphasis is on
families.
The builders methods are not pure virtual and empty by default so that the
derived class can decide which they want to implement.
A builder ofter build a `composite`.
