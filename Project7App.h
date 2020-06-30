//---------------------------------------------------------------------------
//
// Name:        Project7App.h
// Author:      formando39
// Created:     05/12/2019 14:30:47
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROJECT7FRMApp_h__
#define __PROJECT7FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Project7FrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
