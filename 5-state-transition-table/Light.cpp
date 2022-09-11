#include "Light.h"

Light::Light()
{
    m_currentState = LightState::Off;
}

void Light::toggle()
{
    m_currentState = lightTransitions[m_currentState];
}

