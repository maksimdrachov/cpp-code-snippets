## C++ Code Snippets

### 0-hello-world

A classic example.

```bash
cd 0-hello-world
g++ -std=c++17 hello-world.cpp -o hello
./hello
```

![hello-world](images/0-hello-world.png)

### 1-command-line-arguments

Prints out the number of arguments entered and the arguments.

```bash
g++ -std=c++17 main.cpp -o main
./main argument1 argument2
```

![command-line-arguments](images/1-command-line-arguments.png)

### 2-enum

Defines and prints out the values of an [enum](https://en.cppreference.com/w/cpp/language/enum)

```bash
g++ -std=c++17 main.cpp -o main
./main
```

![enum](images/2-enum.png)

### 3-enum-class

Defines a enum class (with overriden output handler).

![enum-class](images/3-enum-class.png)

### 4-singleton

[source](https://refactoring.guru/design-patterns/singleton/cpp/example#example-1)

