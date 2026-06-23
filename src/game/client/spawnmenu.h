#pragma once

#include <vgui_controls/Frame.h>
#include <vgui_controls/Button.h>

class CSpawnMenu : public vgui::Frame
{
    DECLARE_CLASS_SIMPLE( CSpawnMenu, vgui::Frame );

public:
    CSpawnMenu( vgui::VPANEL parent );

private:
    vgui::Button* testBtn;
};
