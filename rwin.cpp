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
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{

// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// wysrodkowania okna
    Centre();

// tworzenie panelu
   wxPanel *panel_r = new wxPanel(this, wxID_ANY);

// tworznie przycisków
    button_job_r[0] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 1"), wxPoint(10, 84), wxSize(148, 35));
    button_job_r[1] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 2"), wxPoint(10, 130), wxSize(148, 35));
    button_job_r[2] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 3"), wxPoint(10, 176), wxSize(148, 35));
    button_job_r[3] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 4"), wxPoint(10, 222), wxSize(148, 35));
    button_job_r[4] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 5"), wxPoint(10, 268), wxSize(148, 35));
    button_job_r[5] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 6"), wxPoint(10, 314), wxSize(148, 35));
    button_job_r[6] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 7"), wxPoint(10, 360), wxSize(148, 35));
    button_job_r[7] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 8"), wxPoint(10, 406), wxSize(148, 35));
    button_job_r[8] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 9"), wxPoint(10, 452), wxSize(148, 35));
    button_job_r[9] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 10"), wxPoint(10, 498), wxSize(148, 35));

    button_info_r[0] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 84), wxSize(148, 35));
    button_info_r[1] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 130), wxSize(148, 35));
    button_info_r[2] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 176), wxSize(148, 35));
    button_info_r[3] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 222), wxSize(148, 35));
    button_info_r[4] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 268), wxSize(148, 35));
    button_info_r[5] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 314), wxSize(148, 35));
    button_info_r[6] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 360), wxSize(148, 35));
    button_info_r[7] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 406), wxSize(148, 35));
    button_info_r[8] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 452), wxSize(148, 35));
    button_info_r[9] = new wxButton(panel_r, wxID_ANY, wxT("Info"), wxPoint(168, 498), wxSize(148, 35));

    button_sys_r[0] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 84), wxSize(148, 35));
    button_sys_r[1] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 130), wxSize(148, 35));
    button_sys_r[2] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 176), wxSize(148, 35));
    button_sys_r[3] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 222), wxSize(148, 35));
    button_sys_r[4] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 268), wxSize(148, 35));
    button_sys_r[5] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 314), wxSize(148, 35));
    button_sys_r[6] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 360), wxSize(148, 35));
    button_sys_r[7] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 406), wxSize(148, 35));
    button_sys_r[8] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 452), wxSize(148, 35));
    button_sys_r[9] = new wxButton(panel_r, wxID_ANY, wxT("Szukanie"), wxPoint(326, 498), wxSize(148, 35));

    button_pic_r[0] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 84), wxSize(148, 35));
    button_pic_r[1] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 130), wxSize(148, 35));
    button_pic_r[2] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 176), wxSize(148, 35));
    button_pic_r[3] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 222), wxSize(148, 35));
    button_pic_r[4] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 268), wxSize(148, 35));
    button_pic_r[5] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 314), wxSize(148, 35));
    button_pic_r[6] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 360), wxSize(148, 35));
    button_pic_r[7] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 406), wxSize(148, 35));
    button_pic_r[8] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 452), wxSize(148, 35));
    button_pic_r[9] = new wxButton(panel_r, wxID_ANY, wxT("Cel"), wxPoint(484, 498), wxSize(148, 35));

    button_res_r[0] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 84), wxSize(148, 35));
    button_res_r[1] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 130), wxSize(148, 35));
    button_res_r[2] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 176), wxSize(148, 35));
    button_res_r[3] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 222), wxSize(148, 35));
    button_res_r[4] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 268), wxSize(148, 35));
    button_res_r[5] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 314), wxSize(148, 35));
    button_res_r[6] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 360), wxSize(148, 35));
    button_res_r[7] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 406), wxSize(148, 35));
    button_res_r[8] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 452), wxSize(148, 35));
    button_res_r[9] = new wxButton(panel_r, wxID_ANY, wxT("Wynik"), wxPoint(642, 498), wxSize(148, 35));

// tworznie przycisku Quit
    wxButton *button_rwin_Q = new wxButton(panel_r, wxID_EXIT, wxT("Quit"), wxPoint(642, 544), wxSize(148, 35));
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::OnQuit));
}

void Rwin::OnQuit(wxCommandEvent & WXUNUSED(event))
{
    Close(true);
}
