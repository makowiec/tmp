/*
============================================================================
Name 		: rwin.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Okno dla danych z North ;)
============================================================================
*/
/*
https://forums.wxwidgets.org/viewtopic.php?t=21168
*/

#include "rwin.h"
#include <iostream>
#include <cstdio>

Rwin::Rwin(const wxString& title)
    : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(800, 600))

{

// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// wysrodkowania okna
    Centre();

// tworzenie panelu
   wxPanel *panel_r = new wxPanel(this, -1);

// tworzenie tabeli

    gs_r = new wxGridSizer(11, 5, 10, 10);

    panel_r -> SetSizer (gs_r);

// tworznie przycisku

    button_job_r[0] = new wxButton(panel_r, -1, wxT("Zadanie 1"));
    button_job_r[1] = new wxButton(panel_r, -1, wxT("Zadanie 2"));
    button_job_r[2] = new wxButton(panel_r, -1, wxT("Zadanie 3"));
    button_job_r[3] = new wxButton(panel_r, -1, wxT("Zadanie 4"));
    button_job_r[4] = new wxButton(panel_r, -1, wxT("Zadanie 5"));
    button_job_r[5] = new wxButton(panel_r, -1, wxT("Zadanie 6"));
    button_job_r[6] = new wxButton(panel_r, -1, wxT("Zadanie 7"));
    button_job_r[7] = new wxButton(panel_r, -1, wxT("Zadanie 8"));
    button_job_r[8] = new wxButton(panel_r, -1, wxT("Zadanie 9"));
    button_job_r[9] = new wxButton(panel_r, -1, wxT("Zadanie 10"));

    button_info_r[0] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[1] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[2] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[3] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[4] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[5] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[6] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[7] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[8] = new wxButton(panel_r, -1, wxT("Info"));
    button_info_r[9] = new wxButton(panel_r, -1, wxT("Info"));

    button_sys_r[0] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[1] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[2] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[3] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[4] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[5] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[6] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[7] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[8] = new wxButton(panel_r, -1, wxT("Szukanie"));
    button_sys_r[9] = new wxButton(panel_r, -1, wxT("Szukanie"));

    button_pic_r[0] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[1] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[2] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[3] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[4] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[5] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[6] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[7] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[8] = new wxButton(panel_r, -1, wxT("Cel"));
    button_pic_r[9] = new wxButton(panel_r, -1, wxT("Cel"));

    button_res_r[0] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[1] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[2] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[3] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[4] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[5] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[6] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[7] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[8] = new wxButton(panel_r, -1, wxT("Wynik"));
    button_res_r[9] = new wxButton(panel_r, -1, wxT("Wynik"));

    wxButton *button_rwin_Q = new wxButton(panel_r, wxID_EXIT, wxT("Quit"));
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::OnQuit));
    //gs_r -> Add (st);

    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("Rrrr")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);

    gs_r -> Add (button_job_r[0], 1, wxEXPAND);
    gs_r -> Add (button_info_r[0], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[0], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[0], 1, wxEXPAND);
    gs_r -> Add (button_res_r[0], 1, wxEXPAND);

    gs_r -> Add (button_job_r[1], 1, wxEXPAND);
    gs_r -> Add (button_info_r[1], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[1], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[1], 1, wxEXPAND);
    gs_r -> Add (button_res_r[1], 1, wxEXPAND);

    gs_r -> Add (button_job_r[2], 1, wxEXPAND);
    gs_r -> Add (button_info_r[2], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[2], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[2], 1, wxEXPAND);
    gs_r -> Add (button_res_r[2], 1, wxEXPAND);

    gs_r -> Add (button_job_r[3], 1, wxEXPAND);
    gs_r -> Add (button_info_r[3], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[3], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[3], 1, wxEXPAND);
    gs_r -> Add (button_res_r[3], 1, wxEXPAND);

    gs_r -> Add (button_job_r[4], 1, wxEXPAND);
    gs_r -> Add (button_info_r[4], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[4], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[4], 1, wxEXPAND);
    gs_r -> Add (button_res_r[4], 1, wxEXPAND);

    gs_r -> Add (button_job_r[5], 1, wxEXPAND);
    gs_r -> Add (button_info_r[5], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[5], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[5], 1, wxEXPAND);
    gs_r -> Add (button_res_r[5], 1, wxEXPAND);

    gs_r -> Add (button_job_r[6], 1, wxEXPAND);
    gs_r -> Add (button_info_r[6], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[6], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[6], 1, wxEXPAND);
    gs_r -> Add (button_res_r[6], 1, wxEXPAND);

    gs_r -> Add (button_job_r[7], 1, wxEXPAND);
    gs_r -> Add (button_info_r[7], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[7], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[7], 1, wxEXPAND);
    gs_r -> Add (button_res_r[7], 1, wxEXPAND);

    gs_r -> Add (button_job_r[8], 1, wxEXPAND);
    gs_r -> Add (button_info_r[8], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[8], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[8], 1, wxEXPAND);
    gs_r -> Add (button_res_r[8], 1, wxEXPAND);

    gs_r -> Add (button_job_r[9], 1, wxEXPAND);
    gs_r -> Add (button_info_r[9], 1, wxEXPAND);
    gs_r -> Add (button_sys_r[9], 1, wxEXPAND);
    gs_r -> Add (button_pic_r[9], 1, wxEXPAND);
    gs_r -> Add (button_res_r[9], 1, wxEXPAND);

    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(new wxStaticText(panel_r, -1, wxT("")), 0, wxEXPAND);
    gs_r -> Add(button_rwin_Q, 1, wxEXPAND);

}

void Rwin::OnQuit(wxCommandEvent & WXUNUSED(event))
{
    Close(true);
}
