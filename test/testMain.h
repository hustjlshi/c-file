/***************************************************************
 * Name:      testMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2019-05-06
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef TESTMAIN_H
#define TESTMAIN_H

//(*Headers(testFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class testFrame: public wxFrame
{
    public:

        testFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~testFrame();

    private:

        //(*Handlers(testFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(testFrame)
        static const long ID_STATUSBAR1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        //*)

        //(*Declarations(testFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TESTMAIN_H
