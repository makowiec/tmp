#ifndef START_H
#define START_H

#include <wx/wx.h>

class Start : public wxFrame
{
public:
    Start(const wxString& title);


    void OnQuit(wxCommandEvent & event);
    void OnNorth(wxCommandEvent & event);
    void OnSouth(wxCommandEvent & event);
};
#endif
