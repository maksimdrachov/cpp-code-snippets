#include <iostream>

enum LightState {
    Off,
    Low,
    Medium,
    High
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

    return EXIT_SUCCESS;
}