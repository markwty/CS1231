#include "wxmApp.hpp"
#include "CS1231Main.h"

bool wxmApp::OnInit()
{
    //(*AppInitialize
    CS1231Frame* Frame = new CS1231Frame(0);
    Frame->Show(true);
    SetTopWindow(Frame);
    //*)
    return true;

}
