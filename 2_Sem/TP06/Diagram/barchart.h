#pragma once
#include "diagram.h"
#include <windows.h>
#include <iomanip>
#include <sstream>
#include <tchar.h>
#include "task2.h"
#include <iostream>
class BarChart : public Diagram
{
    public:
        BarChart();
        void draw(HDC &hdc, RECT drawingArea);
    private:
        int getFontWidth(int freeSpace);
};
