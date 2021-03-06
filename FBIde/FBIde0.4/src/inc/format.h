/*
* This file is part of FBIde, an open-source (cross-platform) IDE for
* FreeBasic compiler.
* Copyright (C) 2005  Albert Varaksin
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
* Contact e-mail: Albert Varaksin <vongodric@hotmail.com>
* Program URL   : http://fbide.sourceforge.net
*/

#ifndef __VwX_MyDlg_H__
#define __VwX_MyDlg_H__
#include <wx/settings.h>
#include <wx/dialog.h>

#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/choice.h>

class format:public wxDialog {
    friend class formatEvt;
public:
    format(wxWindow* parent, wxWindowID id = -1, const wxString& title = wxT(""), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX|wxDIALOG_NO_PARENT|wxDEFAULT_DIALOG_STYLE, const wxString& name = wxT("dialogBox"));
    wxStaticText *st5;
    wxStaticLine *lno6;
    wxButton *button_ok;
    wxStaticBox *sb9;
    wxStaticText *preview;
    wxChoice *chc15;
    wxButton *bt16;
    MyFrame * Parent;
    wxString guts;
    wxString output;
    wxButton *bt17;
    ~format();
    void OnClose(wxCloseEvent &event);
    void initkeywords();
    wxArrayString keyw[4];
protected:
    void VwXVwXEvOnButtonClick(wxCommandEvent& event);
    void VwXVwXEvOnChoiceSelect(wxCommandEvent& event);
    void chc15_VwXEvOnChoiceSelect(wxCommandEvent& event,int index=-1);
    void button_ok_VwXEvOnButtonClick(wxCommandEvent& event,int index=-1);
    void bt17_VwXEvOnButtonClick(wxCommandEvent& event,int index=-1);
    void bt16_VwXEvOnButtonClick(wxCommandEvent& event,int index=-1);
    wxString hex(wxColour clr);
    bool format::isNumeric(wxString kw);
    int isKeyword(wxString kw);
    DECLARE_EVENT_TABLE()
#define VwX_INIT_OBJECTS_format
};

#endif
