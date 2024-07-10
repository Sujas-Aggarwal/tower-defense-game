#include "raylib.h"
using namespace std;
int main()
{
    InitWindow(800, 600, "Tower Defense Game");
    SetTargetFPS(60);

    Font font = LoadFontEx("assets/fonts/pixel/pixel-var.ttf", 64, 0, 0);
    Texture2D base = LoadTexture("assets/sprites/game/4.png");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        DrawTextEx(font, "Defend It!", {260, 100}, 64, 0, WHITE);
        DrawRectangle(260, 200, 280, 60, BLUE);
        DrawTextEx(font, "START", {360, 213}, 32, 0, WHITE);
        if (CheckCollisionPointRec(GetMousePosition(), {260, 280, 280, 60}) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            CloseWindow();
            break;
        }
        DrawRectangle(260, 280, 280, 60, RED);
        DrawTextEx(font, "EXIT", {370, 292}, 32, 0, WHITE);
        DrawTexture(base, 0, 0, WHITE);
        EndDrawing();
    }
    return 0;
}