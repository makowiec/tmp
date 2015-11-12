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
    wxGridSizer *gs_r;
};

#endif
