#include "raylib.h"

int main(void) {
  InitWindow(800, 600, "My Game");

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawText("Welcome Player", 200, 200, 40, RED);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
