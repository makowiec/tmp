#include "start.h"
#include <iostream>
#include <wx/event.h>

Start::Start(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 215))

{
// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// tworzenie panelu
    wxPanel *panel = new wxPanel(this, wxID_ANY);

// tworznie przycisku
    wxButton *button_start1 = new wxButton(panel, wxID_EXIT, wxT("North"), wxPoint(30, 30), wxSize(100, 75));
    wxButton *button_start2 = new wxButton(panel, wxID_EXIT, wxT("South"), wxPoint(170, 30), wxSize(100, 75));
    wxButton *button_start3 = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(100, 135), wxSize(100, 50));

// akcja - klikniecie
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnQuit));

// ustawienie zacznika na okreslony przycisk - taka ramka do przejscia tabulatorem
    //button_1->SetFocus();
    //button_2->SetFocus();

// wysrodkowania okna
    Centre();
 }

// funkcja zamykajaca okno
void Start::OnQuit(wxCommandEvent & WXUNUSED(event))
{
    Close(true);
}
