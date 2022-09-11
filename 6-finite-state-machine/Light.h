#pragma once

#include "LightState.h"
#include "ConcreteLightStates.h"

// Forward declaration to resolve circular dependency/include
class LightState;

class Light
{
public:
    Light();
    inline LightState* getCurrentState() const {
        return currentState;
    }
    void toggle();
    void setState(LightState& newState);

private:
    LightState* currentState;
};

