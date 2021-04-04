/***************************************************************
 * Name:      CGPACalcApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2018-02-24
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "CGPACalcApp.h"
#include "CGPACalcMain.h"

IMPLEMENT_APP(CGPACalcApp);

bool CGPACalcApp::OnInit()
{
    CGPACalcFrame* frame = new CGPACalcFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}
