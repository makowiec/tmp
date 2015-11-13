#ifndef RWIN_H
#define RWIN_H

/*
============================================================================
Name 		: rwin.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Okno dla danych z North ;)
============================================================================
*/

#include <wx/wx.h>

class Rwin : public wxFrame
{
public:

    Rwin(const wxString& title);

    void OnQuit(wxCommandEvent & event);

    wxGridSizer *gs_r;
    wxButton *button_job_r[10];
    wxButton *button_info_r[10];
    wxButton *button_sys_r[10];
    wxButton *button_pic_r[10];
    wxButton *button_res_r[10];

};

#endif
