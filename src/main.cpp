#include <raylib.h>

int main()
{
    InitWindow(1280, 720, "PixelForge");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    return 0;
}