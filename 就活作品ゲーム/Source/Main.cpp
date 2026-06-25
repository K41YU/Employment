#include "DxLib.h"
#include "Floor/Floor.h"

int main()
{
    ChangeWindowMode(TRUE);
    SetGraphMode(1280, 720, 32);

    if (DxLib_Init() == -1)
    {
        return -1;
    }

    SetDrawScreen(DX_SCREEN_BACK);
    SetUseZBuffer3D(TRUE);
    SetWriteZBuffer3D(TRUE);

    Floor floor;
    floor.Init();
    floor.Load();
    floor.Start();

    SetCameraNearFar(1.0f, 10000.0f);

    const VECTOR cameraPos = VGet(0.0f, 260.0f, -520.0f);
    const VECTOR cameraTarget = VGet(0.0f, 0.0f, 260.0f);
    SetCameraPositionAndTarget_UpVecY(cameraPos, cameraTarget);

    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {
        ClearDrawScreen();

        floor.Step();
        floor.Update();
        floor.Draw();

        ScreenFlip();
    }

    DxLib_End();
    return 0;
}
