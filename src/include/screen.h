#pragma once
#include <raylib.h>

// Screen class to manage game window properties
class Screen
{
public:
    Screen(int width, int height, const char *title); // Constructor: Sets up the window
    ~Screen();                                        // Destructor: Cleans up the window
    void Update();                                    // Updates window state (e.g., checks for resize)

private:
    int originalWidth, originalHeight;                     // Original window dimensions
    int minWidth, minHeight;                               // Set Minimun With and Height
    float aspectRatio;                                     // Window aspect ratio
    void AdjustViewport();                                 // Adjusts viewport to maintain aspect ratio
    void SetViewport(int x, int y, int width, int height); // Sets drawing area in window
};
