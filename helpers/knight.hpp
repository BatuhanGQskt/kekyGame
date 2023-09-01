#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "warriors.hpp"
#include<string>

class Knight : public Warriors {
    public:
        Knight(const std::string& specialPower_name = "Shall the king rise again!", int inc_atk_range = 0);
        
        void performAction();
        void displayStatus() const;

        std::string getSpecialPowerName() const;
        float getAdditionalAttackRange() const;

        void setSpecialPowerName(const std::string);
        void setAdditionalAttackRange(float); 
    private:
        std::string sp_name;
        float inc_atk_range_;
};

#endif