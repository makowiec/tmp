#include <wx/wx.h>

class Start : public wxFrame
{
public:
    Start(const wxString& title);

    void OnQuit(wxCommandEvent & event);
};
