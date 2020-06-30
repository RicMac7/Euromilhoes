//---------------------------------------------------------------------------
//
// Name:        Project7App.cpp
// Author:      formando39
// Created:     05/12/2019 14:30:47
// Description: 
//
//---------------------------------------------------------------------------

#include "Project7App.h"
#include "Project7Frm.h"

IMPLEMENT_APP(Project7FrmApp)

bool Project7FrmApp::OnInit()
{
    Project7Frm* frame = new Project7Frm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Project7FrmApp::OnExit()
{
	return 0;
}
