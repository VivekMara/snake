#include "raylib.h"

int main(){
    InitWindow(800, 400, "snake");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello darthman", 400, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
