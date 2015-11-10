#include "main.h"
#include "start.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Start *start = new Start(wxT("Pierwsze okno"));

    start->Show(true);

    return true;
}
