## Implementing a Finite State Machine

Instead of using a state transition table and a `LightState` *enum*, what if we make each concrete light state its own class? That way, we can delegate the task of determining the next state to the current state that a light is in. In other words, I'm proposing that we do something like this, where invoking a light's `toggle` method in turn invokes the current state's `toggle` method (because remember –– we're now going to use classes instead of enums for the states):

Each class implements a common `LighState` interface (or, in C++ terms, an abstract class) that exposes the following three methods:

- `enter(Light*)`: what should happen as we enter this state?
- `toggle(Light*)`: what should happen when we're in this state?
- `exit(Light*)`: what should happen as we're exiting this state?

All three methods accept a pointer to the `Light` object with which the state is associated. How do they gain access to this pointer? Well, recall that we invoked `toggle` in our `Light` class like so:

```cpp
void Light::toggle()
{
    currentState->toggle(this);
}
```

Basically, a `Light` passes in a pointer to itself (`this`). 

One final note: each state class typically follows the singleton design pattern to avoid unnecessary memory allocations and deallocations as we transition from one state to another, and then potentially back to a state that we were already in at one point. With our lights, if we didn't use singletons, we'd have to recreate our states every time we made a transition, and that would be wasteful. Plus, this design pattern is more efficient if we have multiple lights since the states are not tied to any particular instance - remember, the accept a pointer to an instance whenever any of their methods are called.