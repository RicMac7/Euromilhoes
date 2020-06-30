///-----------------------------------------------------------------
///
/// @file      Project7Frm.cpp
/// @author    formando39
/// Created:   05/12/2019 14:30:48
/// @section   DESCRIPTION
///            Project7Frm class implementation
///
///------------------------------------------------------------------

#include "Project7Frm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Project7Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Project7Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Project7Frm::OnClose)
	EVT_BUTTON(ID_WXBUTTON1,Project7Frm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

Project7Frm::Project7Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Project7Frm::~Project7Frm()
{
}

void Project7Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxEdit15 = new wxTextCtrl(this, ID_WXEDIT15, _(""), wxPoint(84, 292), wxSize(253, 40), 0, wxDefaultValidator, _("WxEdit15"));
	WxEdit15->Enable(false);

	WxEdit14 = new wxTextCtrl(this, ID_WXEDIT14, _(""), wxPoint(334, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit14"));
	WxEdit14->Enable(false);

	WxEdit13 = new wxTextCtrl(this, ID_WXEDIT13, _(""), wxPoint(292, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit13"));
	WxEdit13->Enable(false);

	WxEdit12 = new wxTextCtrl(this, ID_WXEDIT12, _(""), wxPoint(188, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit12"));
	WxEdit12->Enable(false);

	WxEdit11 = new wxTextCtrl(this, ID_WXEDIT11, _(""), wxPoint(143, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit11"));
	WxEdit11->Enable(false);

	WxEdit10 = new wxTextCtrl(this, ID_WXEDIT10, _(""), wxPoint(104, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit10"));
	WxEdit10->Enable(false);

	WxEdit9 = new wxTextCtrl(this, ID_WXEDIT9, _(""), wxPoint(62, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit9"));
	WxEdit9->Enable(false);

	WxEdit8 = new wxTextCtrl(this, ID_WXEDIT8, _(""), wxPoint(21, 233), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit8"));
	WxEdit8->Enable(false);

	WxEdit7 = new wxTextCtrl(this, ID_WXEDIT7, _(""), wxPoint(327, 55), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit7"));

	WxEdit6 = new wxTextCtrl(this, ID_WXEDIT6, _(""), wxPoint(284, 55), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit6"));

	WxEdit5 = new wxTextCtrl(this, ID_WXEDIT5, _(""), wxPoint(169, 56), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit5"));

	WxEdit4 = new wxTextCtrl(this, ID_WXEDIT4, _(""), wxPoint(131, 56), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit4"));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, _(""), wxPoint(92, 56), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit3"));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(51, 56), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit2"));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Numeros Sorteados:"), wxPoint(143, 198), wxDefaultSize, 0, _("WxStaticText3"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Escolha 2 Estrelas de 1 a 12"), wxPoint(250, 30), wxDefaultSize, 0, _("WxStaticText2"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Sortear Euromilhões"), wxPoint(125, 106), wxSize(178, 67), 0, wxDefaultValidator, _("WxButton1"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Escolha 5 numeros de 1 a 50"), wxPoint(28, 31), wxDefaultSize, 0, _("WxStaticText1"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(12, 56), wxSize(34, 27), 0, wxDefaultValidator, _("WxEdit1"));

	SetTitle(_("Project7"));
	SetIcon(wxNullIcon);
	SetSize(8,8,422,400);
	Center();
	
	////GUI Items Creation End
}

void Project7Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}


/*
 * WxButton1Click
 */
void Project7Frm::WxButton1Click(wxCommandEvent& event)

{
    double n1,n2,n3,n4,n5,n6,n7,numeros;
    int res1,res2,res3,res4,res5,res6,res7,estrel1,estrel2,resultado,e,j,h,i;
    //bool comparanum=false,comparaestrel=false;
    int result[5]={res1,res2,res3,res4,res5};
    int estrel[2]={res6,res7};
    //double num[5]={n1,n2,n3,n4,n5};
    //double nes[2]={n6,n7};
    bool numrepetido,estrepetida;
    
    WxEdit1 -> GetValue().ToDouble (&n1);         
    WxEdit2 -> GetValue().ToDouble (&n2);
    WxEdit3 -> GetValue().ToDouble (&n3);
    WxEdit4 -> GetValue().ToDouble (&n4);
    WxEdit5 -> GetValue().ToDouble (&n5);
    WxEdit6 -> GetValue().ToDouble (&n6);
    WxEdit7 -> GetValue().ToDouble (&n7); 
    
        //for(i=0;i<4;i++)
            //{
          //num[i];
        //}
        //for(i=0;i<1;i++)
            //{
         // nes[i];
        //}                   
            srand(time(0));
            while (numrepetido=true)
            {
            for(i=0;i<4;i++)
            do
             numrepetido=true;                   
            result[i] = 1 + rand()%50;
            
            for(j=0;j<4;j++)
             if (result[i]==numrepetido)
            numrepetido=false;
    }
                                          
              for(e=0;e<4;e++)
            do
            {  estrepetida=true;                   
            estrel[e] = 1 + rand()%50;
            
            for(h=0;h<4;h++)
             if (estrel[e]==estrepetida)
            estrepetida=false;
        }
        while (estrepetida=true); 
            //srand(time(0));
            //res1 = 1 + rand()%1; 
            //res2 = 1 + rand()%1;
            //res3 = 1 + rand()%1;
            //res4 = 1 + rand()%1;
            //res5 = 1 + rand()%1;
            //estrel1 = 1 + rand()%1;
            //estrel2 = 1 + rand()%1;            
                          
            WxEdit8 -> SetValue(wxString::Format(wxT("%d"),result[0])); 
            WxEdit9 -> SetValue(wxString::Format(wxT("%d"),result[1]));
            WxEdit10 -> SetValue(wxString::Format(wxT("%d"),result[2]));
            WxEdit11 -> SetValue(wxString::Format(wxT("%d"),result[3]));
            WxEdit12 -> SetValue(wxString::Format(wxT("%d"),result[4]));
            WxEdit13 -> SetValue(wxString::Format(wxT("%d"),estrel[0]));
            WxEdit14 -> SetValue(wxString::Format(wxT("%d"),estrel[1]));
            
            //resultado= res1 && res2 && res3 && res4 && res5 && estrel1 && estrel2;
            //numeros= n1 && n2 && n3 && n4 && n5 && n6 && n7;             
        
             if (n1 == res1)
             {
               WxEdit15 -> SetValue(wxString::Format("Parabens e o vencedor!!!")); 
               }        
                  else
                   {
                     WxEdit15 -> SetValue(wxString::Format("nao acertou tente novamente"));   
                    }
}
