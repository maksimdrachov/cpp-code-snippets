#include <iostream>
#include <string>

enum LightState {
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

int main() {
    LightState LightOff = Off;
    LightState LightLow = Low;
    LightState LightMedium = Medium;
    LightState LightHigh = High;

    std::cout << LightOff << std::endl;
    std::cout << LightLow << std::endl;
    std::cout << LightMedium << std::endl;
    std::cout << LightHigh << std::endl;

    std::cout << std::endl;

    std::cout << LightStateString[LightOff] << std::endl;
    std::cout << LightStateString[LightLow] << std::endl;
    std::cout << LightStateString[LightMedium] << std::endl;
    std::cout << LightStateString[LightHigh] << std::endl;

    return EXIT_SUCCESS;
}