#include "Light.h"

Light::Light()
{
    // All lights are initially turned off
    currentState = &LightOff::getInstance();
}

void Light::setState(LightState& newState)
{
    currentState->exit(this); // do stuff before we change state

    currentState = &newState; // change state

    currentState-> enter(this); // do stuff after we change state
}

void Light::toggle()
{
    // Delegate the task of determining the next state to the current state
    currentState->toggle(this);
}

