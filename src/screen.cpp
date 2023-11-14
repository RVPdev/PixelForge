#include "Screen/screen.h"

// Constructor: Initializes window with given size and title
Screen::Screen(int width, int height, const char *title)
    : originalWidth(width), originalHeight(height), aspectRatio((float)width / height)
{
    InitWindow(width, height, title);
    SetWindowState(FLAG_WINDOW_RESIZABLE);
}

// Destructor: Closes the window
Screen::~Screen()
{
    CloseWindow();
}

// Update: Adjusts viewport if window size changes
void Screen::Update()
{
    if (IsWindowResized())
    {
        AdjustViewport();
    }
}

// Adjusts viewport to maintain aspect ratio on window resize
void Screen::AdjustViewport()
{
    // Get the current width and height of the screen
    int newWidth = GetScreenWidth();
    int newHeight = GetScreenHeight();

    // Calculate the new aspect ratio based on current dimensions
    float newAspectRatio = (float)newWidth / newHeight;
    int viewportWidth, viewportHeight;

    // Determine the dimensions of the new viewport to maintain the original aspect ratio
    if (newAspectRatio > aspectRatio)
    {
        // If the window is wider than the original aspect ratio, adjust height and scale width
        viewportHeight = newHeight;
        viewportWidth = (int)(viewportHeight * aspectRatio);
    }
    else
    {
        // If the window is taller than the original aspect ratio, adjust width and scale height
        viewportWidth = newWidth;
        viewportHeight = (int)(viewportWidth / aspectRatio);
    }

    // Calculate the position to center the viewport in the window
    int viewportX = (newWidth - viewportWidth) / 2;
    int viewportY = (newHeight - viewportHeight) / 2;

    // Apply the new viewport settings
    SetViewport(viewportX, viewportY, viewportWidth, viewportHeight);
}

// Sets the drawing area in the window
void Screen::SetViewport(int x, int y, int width, int height)
{
    BeginScissorMode(x, y, width, height);
    // Rendering code should be placed here
    EndScissorMode();
}
