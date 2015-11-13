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

    gs_r = new wxGridSizer(10, 5, 10, 10);

    panel_r -> SetSizer (gs_r);

// tworznie przycisku

    wxButton *button_job_r0 = new wxButton(panel_r, -1, wxT("Zadanie 1"));
    wxButton *button_job_r1 = new wxButton(panel_r, -1, wxT("Zadanie 2"));
    wxButton *button_job_r2 = new wxButton(panel_r, -1, wxT("Zadanie 3"));
    wxButton *button_job_r3 = new wxButton(panel_r, -1, wxT("Zadanie 4"));
    wxButton *button_job_r4 = new wxButton(panel_r, -1, wxT("Zadanie 5"));
    wxButton *button_job_r5 = new wxButton(panel_r, -1, wxT("Zadanie 6"));
    wxButton *button_job_r6 = new wxButton(panel_r, -1, wxT("Zadanie 7"));
    wxButton *button_job_r7 = new wxButton(panel_r, -1, wxT("Zadanie 8"));
    wxButton *button_job_r8 = new wxButton(panel_r, -1, wxT("Zadanie 9"));
    wxButton *button_job_r9 = new wxButton(panel_r, -1, wxT("Zadanie 10"));

    wxButton *button_info_r0 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r1 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r2 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r3 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r4 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r5 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r6 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r7 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r8 = new wxButton(panel_r, -1, wxT("Info"));
    wxButton *button_info_r9 = new wxButton(panel_r, -1, wxT("Info"));

    wxButton *button_sys_r0 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r1 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r2 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r3 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r4 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r5 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r6 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r7 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r8 = new wxButton(panel_r, -1, wxT("Szukanie"));
    wxButton *button_sys_r9 = new wxButton(panel_r, -1, wxT("Szukanie"));

    wxButton *button_pic_r0 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r1 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r2 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r3 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r4 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r5 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r6 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r7 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r8 = new wxButton(panel_r, -1, wxT("Cel"));
    wxButton *button_pic_r9 = new wxButton(panel_r, -1, wxT("Cel"));

    wxButton *button_res_r0 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r1 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r2 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r3 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r4 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r5 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r6 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r7 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r8 = new wxButton(panel_r, -1, wxT("Wynik"));
    wxButton *button_res_r9 = new wxButton(panel_r, -1, wxT("Wynik"));


    //gs_r -> Add (st);
    gs_r -> Add (button_job_r0, 1, wxEXPAND);
    gs_r -> Add (button_info_r0, 1, wxEXPAND);
    gs_r -> Add (button_sys_r0, 1, wxEXPAND);
    gs_r -> Add (button_pic_r0, 1, wxEXPAND);
    gs_r -> Add (button_res_r0, 1, wxEXPAND);

    gs_r -> Add (button_job_r1, 1, wxEXPAND);
    gs_r -> Add (button_info_r1, 1, wxEXPAND);
    gs_r -> Add (button_sys_r1, 1, wxEXPAND);
    gs_r -> Add (button_pic_r1, 1, wxEXPAND);
    gs_r -> Add (button_res_r1, 1, wxEXPAND);

    gs_r -> Add (button_job_r2, 1, wxEXPAND);
    gs_r -> Add (button_info_r2, 1, wxEXPAND);
    gs_r -> Add (button_sys_r2, 1, wxEXPAND);
    gs_r -> Add (button_pic_r2, 1, wxEXPAND);
    gs_r -> Add (button_res_r2, 1, wxEXPAND);

    gs_r -> Add (button_job_r3, 1, wxEXPAND);
    gs_r -> Add (button_info_r3, 1, wxEXPAND);
    gs_r -> Add (button_sys_r3, 1, wxEXPAND);
    gs_r -> Add (button_pic_r3, 1, wxEXPAND);
    gs_r -> Add (button_res_r3, 1, wxEXPAND);

    gs_r -> Add (button_job_r4, 1, wxEXPAND);
    gs_r -> Add (button_info_r4, 1, wxEXPAND);
    gs_r -> Add (button_sys_r4, 1, wxEXPAND);
    gs_r -> Add (button_pic_r4, 1, wxEXPAND);
    gs_r -> Add (button_res_r4, 1, wxEXPAND);

    gs_r -> Add (button_job_r5, 1, wxEXPAND);
    gs_r -> Add (button_info_r5, 1, wxEXPAND);
    gs_r -> Add (button_sys_r5, 1, wxEXPAND);
    gs_r -> Add (button_pic_r5, 1, wxEXPAND);
    gs_r -> Add (button_res_r5, 1, wxEXPAND);

    gs_r -> Add (button_job_r6, 1, wxEXPAND);
    gs_r -> Add (button_info_r6, 1, wxEXPAND);
    gs_r -> Add (button_sys_r6, 1, wxEXPAND);
    gs_r -> Add (button_pic_r6, 1, wxEXPAND);
    gs_r -> Add (button_res_r6, 1, wxEXPAND);

    gs_r -> Add (button_job_r7, 1, wxEXPAND);
    gs_r -> Add (button_info_r7, 1, wxEXPAND);
    gs_r -> Add (button_sys_r7, 1, wxEXPAND);
    gs_r -> Add (button_pic_r7, 1, wxEXPAND);
    gs_r -> Add (button_res_r7, 1, wxEXPAND);

    gs_r -> Add (button_job_r8, 1, wxEXPAND);
    gs_r -> Add (button_info_r8, 1, wxEXPAND);
    gs_r -> Add (button_sys_r8, 1, wxEXPAND);
    gs_r -> Add (button_pic_r8, 1, wxEXPAND);
    gs_r -> Add (button_res_r8, 1, wxEXPAND);

    gs_r -> Add (button_job_r9, 1, wxEXPAND);
    gs_r -> Add (button_info_r9, 1, wxEXPAND);
    gs_r -> Add (button_sys_r9, 1, wxEXPAND);
    gs_r -> Add (button_pic_r9, 1, wxEXPAND);
    gs_r -> Add (button_res_r9, 1, wxEXPAND);


    button_res_r9 -> Disable();
    button_res_r8 -> Disable();
    button_res_r7 -> Disable();
    button_res_r6 -> Disable();
    button_res_r5 -> Disable();
    button_res_r4 -> Disable();
    button_res_r3 -> Disable();
    button_res_r2 -> Disable();
    button_res_r1 -> Disable();
    button_res_r0 -> Disable();

/*

    gs_r -> Add(button_job_r0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 1);
    gs_r -> Add(button_info_r0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 1);
    gs_r -> Add(button_sys_r0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 1);
    gs_r -> Add(button_pic_r0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 1);
    gs_r -> Add(button_res_r0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 1);

    gs_r -> Add(button_job_r1, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r1, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r1, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r1, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r1, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r2, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r2, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r2, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r2, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r2, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r3, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r3, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r3, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r3, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r3, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r4, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r4, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r4, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r4, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r4, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r5, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r5, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r5, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r5, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r5, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r6, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r6, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r6, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r6, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r6, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r7, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r7, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r7, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r7, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r7, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r8, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r8, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r8, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r8, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r8, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);

    gs_r -> Add(button_job_r9, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_info_r9, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_sys_r9, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_pic_r9, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
    gs_r -> Add(button_res_r9, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 1);
*/
    /*gs_r->Add (button_job_r0, 0, wxEXPAND);
    gs_r->Add (button_job_r1, 0, wxEXPAND);
    gs_r->Add (button_job_r2, 0, wxEXPAND);
    gs_r->Add (button_job_r3, 0, wxEXPAND);
    gs_r->Add (button_job_r4, 0, wxEXPAND);
    gs_r->Add (button_job_r5, 0, wxEXPAND);
*/
//  sizer->Add(gs_r, 1, wxEXPAND);
  //SetSizer(sizer);
  //SetMinSize(wxSize(270, 220));



/*
button_job_r[10], // wywolywanie zadan
button_info_r[10], // biezaca informacja o obiekcie
button_sys_r[10], // archiwalna informacja o obiekcie
button_pic_r[10], // podglad obiektu w zewnetrznym programie
button_res_r[10]; // podglad rezultatu
		button_info_r[i].add_pixlabel("./icons/info_icon.png", "Info");
		button_sys_r[i].add_pixlabel("./icons/search_icon.png", "Szukanie");
		button_pic_r[i].add_pixlabel("./icons/rtg_icon.png", "Cel");
		button_res_r[i].add_pixlabel("./icons/gear_icon.png", "Wynik");
 */




/*


  wxStaticText *thetitle = new wxStaticText(panel_R, -1, wxT("Title"));
  wxStaticText *author = new wxStaticText(panel_R, -1, wxT("Author"));
  wxStaticText *review = new wxStaticText(panel_R, -1, wxT("Review"));

  wxTextCtrl *tc1 = new wxTextCtrl(panel_R, -1);
  wxTextCtrl *tc2 = new wxTextCtrl(panel_R, -1);
  wxTextCtrl *tc3 = new wxTextCtrl(panel_R, -1, wxT(""), wxPoint(-1, -1), wxSize(-1, -1), wxTE_MULTILINE);

  fgs->Add(thetitle);
  fgs->Add(tc1, 1, wxEXPAND);
  fgs->Add(author);
  fgs->Add(tc2, 1, wxEXPAND);
  fgs->Add(review, 1, wxEXPAND);
  fgs->Add(tc3, 1, wxEXPAND);

  fgs->AddGrowableRow(2, 1);
  fgs->AddGrowableCol(1, 1);

  hbox->Add(fgs, 1, wxALL | wxEXPAND, 15);
  panel_R->SetSizer(hbox);
*/
}
