/***************************************************************
 * Name:      CS1231App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mark ()
 * Created:   2020-10-07
 * Copyright: Mark ()
 * License:
 **************************************************************/

#include "CS1231App.h"

//(*AppHeaders
#include "CS1231Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CS1231App);

bool CS1231App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CS1231Frame* Frame = new CS1231Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
