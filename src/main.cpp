#include <raylib.h>
#include "include/screen.h"

int main()
{
    // Initialize the window
    Screen screen(1280,720, "Pixel Forge");

    // Make window resizable
    SetWindowState(FLAG_WINDOW_RESIZABLE);

    SetTargetFPS(60);

    // main loop
    while (!WindowShouldClose())
    {
        screen.Update();

        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    return 0;
}