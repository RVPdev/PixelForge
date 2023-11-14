#pragma once
#include <raylib.h>

class Screen
{
public:
    Screen(int width, int height, const char* title);
    ~Screen();
    void Update();
private:
    int originalWidth, originalHeight;
    float aspectRatio;
    void AdjustViewport();
    void SetViewport();
};