#include <raylib.h>
#include <iostream>
int main()
{
    InitWindow(500, 500, "Window");
    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(150, 150, 200, 200, RED);
        EndDrawing();
    }
    return 0;
}
