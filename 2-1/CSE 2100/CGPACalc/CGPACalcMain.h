/***************************************************************
 * Name:      CGPACalcMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2018-02-24
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CGPACALCMAIN_H
#define CGPACALCMAIN_H



#include "CGPACalcApp.h"


#include "GUIFrame.h"

class CGPACalcFrame: public GUIFrame
{
    public:
        CGPACalcFrame(wxFrame *frame);
        ~CGPACalcFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // CGPACALCMAIN_H
