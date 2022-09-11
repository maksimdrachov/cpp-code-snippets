#include <iostream>
#include <string>

enum class LightState {
    Off,
    Low,
    Medium,
    High
};

std::string LightStateString[4] = {
    "Off",
    "Low",
    "Medium",
    "High"
};

std::ostream& operator<<(std::ostream& os, LightState ls)
{
    return os << LightStateString[static_cast<int>(ls)];
}

int main() {
LightState LightOff = LightState::Off;
LightState LightLow = LightState::Low;
LightState LightMedium = LightState::Medium;
LightState LightHigh = LightState::High;

std::cout << LightOff << std::endl;
std::cout << LightLow << std::endl;
std::cout << LightMedium << std::endl;
std::cout << LightHigh << std::endl;


return EXIT_SUCCESS;
}