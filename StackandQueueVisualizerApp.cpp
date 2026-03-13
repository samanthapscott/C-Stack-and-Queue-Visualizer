/***************************************************************
 * Name:      StackandQueueVisualizerApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Samantha Scott (sscot068@fiu.edu)
 * Created:   2025-11-28
 * Copyright: Samantha Scott ()
 * License:
 **************************************************************/

#include "wx_pch.h" //Include precompiled header used by wxWidgets projects
#include "StackandQueueVisualizerApp.h" //Include Corresponding App header file

//(*AppHeaders
#include "StackandQueueVisualizerMain.h"  //Include header fie for the application frame
#include <wx/image.h> //Include system header that provides image-handling support for wxWidgets
//*)

IMPLEMENT_APP(StackandQueueVisualizerApp); //IMPLEMENT_APP - macro that connects the wxWidgets framework to the application class

bool StackandQueueVisualizerApp::OnInit() //function definition
{
    //(*AppInitialize
    bool wxsOK = true; //Flag that indicates if initialization was successful, set to true by default
    wxInitAllImageHandlers(); //Function that initializes all image handlers
    if ( wxsOK )
    {
        //Create a new StackandQueVisualizerFrame object and set the Frame pointer to it's address.
        StackandQueueVisualizerFrame* Frame = new StackandQueueVisualizerFrame(0);

        Frame->Show(); //Dereference the Frame pointer and call the Show() function

        SetTopWindow(Frame); //Function ensures that this frame/window is the main application window
    }
    //*)
    return wxsOK; //if wxsOK is false the application will immediately terminate
}
