#ifndef DICE_H
#define DICE_H

class Dice{
    private:
        int sides;

    public:
        //constructors
        Dice();
        Dice(int r);
        //roll function that takes sides and outputs an integer
        int roll();
};

#endif