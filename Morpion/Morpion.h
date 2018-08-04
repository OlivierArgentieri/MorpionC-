#pragma once

#include "windows.h"

bool gameover;
const int cols = 3;
const int rows = 3;
int gameGrid[cols][rows];
int nJoueur;
bool null;

HANDLE output;
CONSOLE_SCREEN_BUFFER_INFO consoleInformation;

void Setup();
void Draw();
void Input();
void Logic();