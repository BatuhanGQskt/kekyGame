// warriors.cpp
#include "warriors.hpp"
#include <iostream>

Warriors::Warriors(int curr_health, int max_health, float attack_range, int shield, float absorb_percentage) :
    curr_health(curr_health), max_health(max_health), attack_range(attack_range), shield(shield), absorb_percentage(absorb_percentage) {}

Warriors::~Warriors() {}

void Warriors::displayStatus() const {
    std::cout << "Current health: " << this->getCurrent_Health() << '\n';
    std::cout << "Max health: " << this->getMax_Health() << '\n';
    std::cout << "Attack range: " << this->getAttack_Range() << '\n';
    std::cout << "Shield: " << this->getShield() << '\n';
    std::cout << "Absorb Percentage: " << this->getAbsorb_Percentage() << '\n';
}

int Warriors::getCurrent_Health() const {
    return curr_health;
}

int Warriors::getMax_Health() const {
    return max_health;
}

float Warriors::getAttack_Range() const {
    return attack_range;
}

int Warriors::getShield() const {
    return shield;
}

float Warriors::getAbsorb_Percentage() const {
    return absorb_percentage*100;
}

void Warriors::setCurrent_Health(int health)  {
    curr_health = health;
}

void Warriors::setMax_Health(int health) {
    max_health = health;
}

void Warriors::setAttack_Range(float range) {
    if(range > 2.5) {
        attack_range = 2.5;
    } else {
        attack_range = range;
    }
}

void Warriors::setShield(int value) {
    shield = value;
}

void Warriors::setAbsorb_Percentage(float percentage) {
    absorb_percentage = percentage;
}
