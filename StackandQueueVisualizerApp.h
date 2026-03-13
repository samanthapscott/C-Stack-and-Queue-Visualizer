/***************************************************************
 * Name:      StackandQueueVisualizerApp.h
 * Purpose:   Defines Application Class
 * Author:    Samantha Scott (sscot068@fiu.edu)
 * Created:   2025-11-28
 * Copyright: Samantha Scott ()
 * License:
 **************************************************************/

#ifndef STACKANDQUEUEVISUALIZERAPP_H //header guard if not defined - if it's true the variable has not been defined
#define STACKANDQUEUEVISUALIZERAPP_H //preprocessor directive that defines STACKANDQUEVISUALIZERAPP_H as preprocessor variable

#include <wx/app.h> //System header file that includes the base wxApp class that is used to create applications

//The Main Application
//wxWidgets requires that all GUI programs define a class derived from wxApp
//StackandQueueVisualizerApp class initializes the program on start up
class StackandQueueVisualizerApp : public wxApp //inherits from th wxApp class at the public level
{
    public:
        //Called automatically when we open the application
        virtual bool OnInit(); //function prototype of the OnInit function
};

#endif //header guard ensures the compiler processes everything up to this
