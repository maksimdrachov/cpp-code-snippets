#pragma once

#include <map>
#include <string>

enum class LightState {
    Off,
    Low,
    Medium,
    High
};

static std::string LightStateString[4] = 
{
    "Off",
    "Low",
    "Medium",
    "High"
};

static std::map<LightState, LightState> lightTransitions = 
{
    {LightState::Off, LightState::Low},
    {LightState::Low, LightState::Medium},
    {LightState::Medium, LightState::High},
    {LightState::High, LightState::Off} 
};

class Light
{
public:
    Light();
    void toggle();
    LightState getCurrentState() const {
        return m_currentState;
    }
    std::string printCurrentState() const {
        return LightStateString[static_cast<int>(m_currentState)];
    }

private:
    LightState m_currentState;
};

