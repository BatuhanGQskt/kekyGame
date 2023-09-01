#include "knight.hpp"
#include <iostream>

Knight::Knight(const std::string& name, int inc_atk_range)
    : Warriors(), sp_name(name), inc_atk_range_(inc_atk_range) {}

void Knight::performAction() {
    setAttack_Range(getAttack_Range() + inc_atk_range_ ); 
}

void Knight::displayStatus() const {
    Warriors::displayStatus();

    std::cout << "###############" << '\n';
    std::cout << "SPECIAL POWER:" << '\n';
    std::cout << this->sp_name << "\n" << "Increase the attack range by " << this->getAttack_Range() << '\n';
}

std::string Knight::getSpecialPowerName() const {
    return this->sp_name;
}

float Knight::getAdditionalAttackRange() const {
    return this->inc_atk_range_;
}

void Knight::setSpecialPowerName(std::string sp_name) {
    this->sp_name = sp_name;
}

void Knight::setAdditionalAttackRange(float inc_attack_range) {
    this->inc_atk_range_ = inc_attack_range;
}