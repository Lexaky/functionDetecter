#ifndef NEWDIALOG_H
#define NEWDIALOG_H

//(*Headers(NewDialog)
#include <wx/dialog.h>
//*)

class NewDialog: public wxDialog
{
	public:

		NewDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~NewDialog();

		//(*Declarations(NewDialog)
		//*)

	protected:

		//(*Identifiers(NewDialog)
		//*)

	private:

		//(*Handlers(NewDialog)
		void OnAuiNotebook1PageClose(wxAuiNotebookEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
