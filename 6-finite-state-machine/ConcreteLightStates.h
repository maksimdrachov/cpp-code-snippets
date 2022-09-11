#pragma once
#include "LightState.h"
#include "Light.h"
#include <iostream>

class LightOff : public LightState
{
public:
    void enter(Light* light) {
        std::cout << "Enter LightOff" << std::endl;
    }
    void toggle(Light* light);
    void exit(Light* light) {
        std::cout << "Exit LightOff" << std::endl;
    }
    static LightState& getInstance();

private:
    LightOff() {}
    LightOff(const LightOff& other);
    LightOff& operator=(const LightOff& other);
};

class LowIntensity : public LightState
{
public:
	void enter(Light* light) {
        std::cout << "Enter LowIntensity" << std::endl;
    }
	void toggle(Light* light);
	void exit(Light* light) {
        std::cout << "Exit LowIntensity" << std::endl;
    }
	static LightState& getInstance();

private:
	LowIntensity() {}
	LowIntensity(const LowIntensity& other);
	LowIntensity& operator=(const LowIntensity& other);
};

class MediumIntensity : public LightState
{
public:
	void enter(Light* light) {
        std::cout << "Enter MediumIntensity" << std::endl;
    }
	void toggle(Light* light);
	void exit(Light* light) {
        std::cout << "Exit MediumIntensity" << std::endl;
    }
	static LightState& getInstance();

private:
	MediumIntensity() {}
	MediumIntensity(const MediumIntensity& other);
	MediumIntensity& operator=(const MediumIntensity& other);
};

class HighIntensity : public LightState
{
public:
	void enter(Light* light) {
        std::cout << "Enter HighIntensity" << std::endl;
    }
	void toggle(Light* light);
	void exit(Light* light) {
        std::cout << "Exit HighIntensity" << std::endl;
    }
	static LightState& getInstance();

private:
	HighIntensity() {}
	HighIntensity(const HighIntensity& other);
	HighIntensity& operator=(const HighIntensity& other);
};