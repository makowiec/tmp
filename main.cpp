#include "main.h"
#include "start.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Start *start = new Start(wxT("Learn 2015"));

    start->Show(true);

    return true;
}
