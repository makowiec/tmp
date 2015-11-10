#include "start.h"

Start::Start(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
  SetIcon(wxIcon(wxT("transmission.xpm"))); //ikona okna
  Centre();
}
