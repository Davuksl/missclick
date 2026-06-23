#include "cbase.h"
#include "spawnmenu.h"
#include <vgui/IVGui.h>
#include <vgui_controls/Controls.h>
#include <ienginevgui.h>

using namespace vgui;

CSpawnMenu::CSpawnMenu( vgui::VPANEL parent ) : BaseClass( NULL, "spawnmenu" )
{
    SetParent( parent );

    // Panel size and position
    /*int width, height;
    vgui::Panel vPanel = vgui::ipanel()->GetPanel(parent, GetModuleName());
    vPanel.GetSize(width, height);*/

    SetSize( 800, 600 );
    SetPos( 100, 100 );
    SetVisible( true );
    SetCursor( dc_arrow );

    SetTitle( "Spawn Menu", true );
    SetMoveable( true );
    SetSizeable( false );

    testBtn = new vgui::Button( this, "testBtn", "Test" );
}


static CSpawnMenu* g_pMyMenu = NULL;

void OpenMyMenu()
{
    if ( !g_pMyMenu )
    {
        g_pMyMenu = new CSpawnMenu( enginevgui->GetPanel( PANEL_CLIENTDLL ) );
    }
    g_pMyMenu->SetVisible( true );
    g_pMyMenu->MoveToFront();
}

CON_COMMAND( open_my_menu, "Opens my menu" )
{
    OpenMyMenu();
}
