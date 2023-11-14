#include <raylib.h>

int main()
{
    // Initialize the window
    InitWindow(1280, 720, "PixelForge");

    // Make window resizable
    SetWindowState(FLAG_WINDOW_RESIZABLE);

    SetTargetFPS(60);

    // main loop
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    return 0;
}