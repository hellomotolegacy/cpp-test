//Include our libraries
#include "stdafx.h"		//Comment me if NOT using VisualStudio!
#include <iostream>
#include <string>

//Include files related to project
#include "main.h"

void calcCoords()
{
  switch(direction)
  {
    case 1: playerY++; break;
    case 2: playerX++; break;
    case 3: playerY--; break;
    case 4: playerY--; break;
  }
}

void getCord()
{
  cout << "X: " << playerX << " Y: " << playerY << endl;
}