///-----------------------------------------------------------------
///
/// @file      Project7Frm.h
/// @author    formando39
/// Created:   05/12/2019 14:30:47
/// @section   DESCRIPTION
///            Project7Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJECT7FRM_H__
#define __PROJECT7FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef Project7Frm_STYLE
#define Project7Frm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Project7Frm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Project7Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Project7"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Project7Frm_STYLE);
		virtual ~Project7Frm();
		void WxButton1Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxTextCtrl *WxEdit15;
		wxTextCtrl *WxEdit14;
		wxTextCtrl *WxEdit13;
		wxTextCtrl *WxEdit12;
		wxTextCtrl *WxEdit11;
		wxTextCtrl *WxEdit10;
		wxTextCtrl *WxEdit9;
		wxTextCtrl *WxEdit8;
		wxTextCtrl *WxEdit7;
		wxTextCtrl *WxEdit6;
		wxTextCtrl *WxEdit5;
		wxTextCtrl *WxEdit4;
		wxTextCtrl *WxEdit3;
		wxTextCtrl *WxEdit2;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxButton *WxButton1;
		wxStaticText *WxStaticText1;
		wxTextCtrl *WxEdit1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXEDIT15 = 1021,
			ID_WXEDIT14 = 1020,
			ID_WXEDIT13 = 1019,
			ID_WXEDIT12 = 1018,
			ID_WXEDIT11 = 1017,
			ID_WXEDIT10 = 1016,
			ID_WXEDIT9 = 1015,
			ID_WXEDIT8 = 1014,
			ID_WXEDIT7 = 1011,
			ID_WXEDIT6 = 1010,
			ID_WXEDIT5 = 1009,
			ID_WXEDIT4 = 1008,
			ID_WXEDIT3 = 1007,
			ID_WXEDIT2 = 1006,
			ID_WXSTATICTEXT3 = 1005,
			ID_WXSTATICTEXT2 = 1004,
			ID_WXBUTTON1 = 1003,
			ID_WXSTATICTEXT1 = 1002,
			ID_WXEDIT1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
