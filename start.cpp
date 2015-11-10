#include "start.h"

Start::Start(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 150))
{
//tworzenie panelu
    wxPanel *panel = new wxPanel(this, wxID_ANY);

// tworznie przycisku
    wxButton *button_1 = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(20, 20), wxSize(100, 100));
    wxButton *button_2 = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(120, 20), wxSize(100, 100));
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
