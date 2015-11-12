#include "start.h"
#include <iostream>

Start::Start(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 215))

{
// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// tworzenie panelu
    wxPanel *panel = new wxPanel(this, wxID_ANY);

// tworznie przycisku
    wxButton *button_start_N = new wxButton(panel, wxID_ANY, wxT("North"), wxPoint(30, 30), wxSize(100, 75));
    wxButton *button_start_S = new wxButton(panel, wxID_ANY, wxT("South"), wxPoint(170, 30), wxSize(100, 75));
    wxButton *button_start_Q = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(100, 135), wxSize(100, 50));

// akcja - klikniecie
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnQuit));
    button_start_N -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnNorth));
    button_start_S -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnSouth));

// ustawienie zacznika na okreslony przycisk - taka ramka do przejscia tabulatorem
    //button_1->SetFocus();
    //button_2->SetFocus();

// wysrodkowania okna
    Centre();
 }

// funkcja zamykajaca okno - przycisk utton_start_Q
void Start::OnQuit(wxCommandEvent & WXUNUSED(event))
{
    Close(true);
}
// funkcja dla przucisku button_start_N
void Start::OnNorth(wxCommandEvent & WXUNUSED(event))
{

}
//funkcja dla przycisku button_start_S
void Start::OnSouth(wxCommandEvent & WXUNUSED(event))
{

}
