#include <iostream>
#include "dice.h"
#include <raylib.h>
#include <ctime>
#include <sstream>

// Just includes we've seen this before
using namespace std;

//Class dice where the roll is made and sides is stored

string getDice(int num){
    string tex = "Images/Dice_";
    tex += to_string(num) + ".png";
    return tex;
}

int main(void){

    srand(time(0));
    InitWindow(1000,800, "RayDice!");
    SetTargetFPS(60);

    Texture2D dice;

    //Make variable and dice object
    int x;
    Dice sixDie(6);
    bool woo = false;

    while(!WindowShouldClose()){

        //Roll Dice on space key pressed
        if(IsKeyPressed(KEY_SPACE)){
            UnloadTexture(dice);
            x = sixDie.roll();
            dice = LoadTexture(getDice(x).c_str());
            }

        BeginDrawing();
            ClearBackground(DARKPURPLE);

            DrawText("Press SPACE to roll dice!",400,700,30,BLACK);
            DrawTexture(dice,400,300,WHITE);

        EndDrawing();
    }

    UnloadTexture(dice);

    CloseWindow();
    return 0;
}