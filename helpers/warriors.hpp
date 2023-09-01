#ifndef WARRIORS_HPP
#define WARRIORS_HPP

class Warriors {
    public:
        Warriors(int curr_health = 100, int max_health = 100, float attack_range = 1.0, int shield = 1, float absorb_percentage = 0.0);
        ~Warriors();

        void displayStatus() const;

        int getCurrent_Health() const;
        int getMax_Health() const;
        float getAttack_Range() const;
        int getShield() const;
        float getAbsorb_Percentage() const;

        void setCurrent_Health(int);
        void setMax_Health(int);
        void setAttack_Range(float);
        void setShield(int);
        void setAbsorb_Percentage(float);

        virtual void performAction() = 0;
    private:
        int curr_health;
        int max_health;
        float attack_range;
        int shield;
        float absorb_percentage;
};

#endif