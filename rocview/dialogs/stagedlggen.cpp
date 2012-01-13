///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Sep 12 2010)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!///////////////////////////////////////////////////////////////////////////#include "stagedlggen.h"///////////////////////////////////////////////////////////////////////////stagedlggen::stagedlggen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxDefaultSize, wxDefaultSize );		wxBoxSizer* bSizer6;	bSizer6 = new wxBoxSizer( wxVERTICAL );		m_Notebook = new wxNotebook( this, ID_STAGEBOOK, wxDefaultPosition, wxDefaultSize, 0 );	m_General = new wxPanel( m_Notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );	wxBoxSizer* bSizer7;	bSizer7 = new wxBoxSizer( wxVERTICAL );		wxFlexGridSizer* fgSizer4;	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );	fgSizer4->AddGrowableCol( 1 );	fgSizer4->SetFlexibleDirection( wxBOTH );	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labID = new wxStaticText( m_General, wxID_ANY, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0 );	m_labID->Wrap( -1 );	fgSizer4->Add( m_labID, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );		m_ID = new wxTextCtrl( m_General, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );	fgSizer4->Add( m_ID, 0, wxALL|wxEXPAND, 5 );		m_labDescription = new wxStaticText( m_General, wxID_ANY, wxT("Description"), wxDefaultPosition, wxDefaultSize, 0 );	m_labDescription->Wrap( -1 );	fgSizer4->Add( m_labDescription, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );		m_Description = new wxTextCtrl( m_General, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );	fgSizer4->Add( m_Description, 0, wxALL|wxEXPAND, 5 );		bSizer7->Add( fgSizer4, 0, wxEXPAND, 5 );		m_staticline1 = new wxStaticLine( m_General, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );	bSizer7->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );		wxFlexGridSizer* fgSizer6;	fgSizer6 = new wxFlexGridSizer( 0, 2, 0, 0 );	fgSizer6->AddGrowableCol( 1 );	fgSizer6->SetFlexibleDirection( wxBOTH );	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labSectionLength = new wxStaticText( m_General, wxID_ANY, wxT("Section length"), wxDefaultPosition, wxDefaultSize, 0 );	m_labSectionLength->Wrap( -1 );	fgSizer6->Add( m_labSectionLength, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );		m_SectionLength = new wxSpinCtrl( m_General, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 999, 0 );	fgSizer6->Add( m_SectionLength, 0, wxALL, 5 );		m_labTrainGap = new wxStaticText( m_General, wxID_ANY, wxT("Train gap"), wxDefaultPosition, wxDefaultSize, 0 );	m_labTrainGap->Wrap( -1 );	fgSizer6->Add( m_labTrainGap, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );		m_TrainGap = new wxSpinCtrl( m_General, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 99, 0 );	fgSizer6->Add( m_TrainGap, 0, wxALL, 5 );		m_labEnterSensor = new wxStaticText( m_General, wxID_ANY, wxT("Enter"), wxDefaultPosition, wxDefaultSize, 0 );	m_labEnterSensor->Wrap( -1 );	fgSizer6->Add( m_labEnterSensor, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );		m_EnterSensor = new wxComboBox( m_General, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 	fgSizer6->Add( m_EnterSensor, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );		bSizer7->Add( fgSizer6, 1, wxEXPAND, 5 );		m_General->SetSizer( bSizer7 );	m_General->Layout();	bSizer7->Fit( m_General );	m_Notebook->AddPage( m_General, wxT("General"), false );	m_Sections = new wxPanel( m_Notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );	wxBoxSizer* bSizer8;	bSizer8 = new wxBoxSizer( wxVERTICAL );		m_SectionList = new wxListBox( m_Sections, wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), 0, NULL, 0 ); 	bSizer8->Add( m_SectionList, 1, wxALL|wxEXPAND, 5 );		wxFlexGridSizer* fgSizer5;	fgSizer5 = new wxFlexGridSizer( 0, 4, 0, 0 );	fgSizer5->SetFlexibleDirection( wxBOTH );	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labSectionID = new wxStaticText( m_Sections, wxID_ANY, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0 );	m_labSectionID->Wrap( -1 );	fgSizer5->Add( m_labSectionID, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );		m_SectionID = new wxTextCtrl( m_Sections, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );	fgSizer5->Add( m_SectionID, 0, wxALL, 5 );		m_labSectionSensor = new wxStaticText( m_Sections, wxID_ANY, wxT("Sensor"), wxDefaultPosition, wxDefaultSize, 0 );	m_labSectionSensor->Wrap( -1 );	fgSizer5->Add( m_labSectionSensor, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );		m_SectionSensor = new wxComboBox( m_Sections, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY|wxCB_SIMPLE ); 	fgSizer5->Add( m_SectionSensor, 0, wxALL, 5 );		bSizer8->Add( fgSizer5, 0, wxEXPAND, 5 );		wxFlexGridSizer* fgSizer41;	fgSizer41 = new wxFlexGridSizer( 0, 2, 0, 0 );	fgSizer41->AddGrowableCol( 1 );	fgSizer41->SetFlexibleDirection( wxBOTH );	fgSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labSectionLocoId = new wxStaticText( m_Sections, wxID_ANY, wxT("Loco ID"), wxDefaultPosition, wxDefaultSize, 0 );	m_labSectionLocoId->Wrap( -1 );	fgSizer41->Add( m_labSectionLocoId, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );		m_SectionLocoId = new wxComboBox( m_Sections, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 	fgSizer41->Add( m_SectionLocoId, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );		bSizer8->Add( fgSizer41, 0, wxEXPAND, 5 );		wxBoxSizer* m_SectionButtons;	m_SectionButtons = new wxBoxSizer( wxHORIZONTAL );		m_AddSection = new wxButton( m_Sections, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );	m_SectionButtons->Add( m_AddSection, 0, wxALL, 5 );		m_ModifySection = new wxButton( m_Sections, wxID_ANY, wxT("Modify"), wxDefaultPosition, wxDefaultSize, 0 );	m_SectionButtons->Add( m_ModifySection, 0, wxALL, 5 );		m_DeleteSection = new wxButton( m_Sections, wxID_ANY, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );	m_SectionButtons->Add( m_DeleteSection, 0, wxALL, 5 );		m_FreeSection = new wxButton( m_Sections, wxID_ANY, wxT("Set loco"), wxDefaultPosition, wxDefaultSize, 0 );	m_SectionButtons->Add( m_FreeSection, 0, wxALL, 5 );		bSizer8->Add( m_SectionButtons, 0, wxEXPAND, 5 );		m_Sections->SetSizer( bSizer8 );	m_Sections->Layout();	bSizer8->Fit( m_Sections );	m_Notebook->AddPage( m_Sections, wxT("Sections"), true );		bSizer6->Add( m_Notebook, 1, wxEXPAND | wxALL, 5 );		m_stdButton = new wxStdDialogButtonSizer();	m_stdButtonOK = new wxButton( this, wxID_OK );	m_stdButton->AddButton( m_stdButtonOK );	m_stdButtonCancel = new wxButton( this, wxID_CANCEL );	m_stdButton->AddButton( m_stdButtonCancel );	m_stdButton->Realize();	bSizer6->Add( m_stdButton, 0, wxEXPAND|wxALL, 5 );		this->SetSizer( bSizer6 );	this->Layout();	bSizer6->Fit( this );		// Connect Events	m_SectionList->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( stagedlggen::OnSectionList ), NULL, this );	m_AddSection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnSectionAdd ), NULL, this );	m_ModifySection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnSectionModify ), NULL, this );	m_DeleteSection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnSectionDelete ), NULL, this );	m_FreeSection->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnFreeSection ), NULL, this );	m_stdButtonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnCancel ), NULL, this );	m_stdButtonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnOK ), NULL, this );}stagedlggen::~stagedlggen(){	// Disconnect Events	m_SectionList->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( stagedlggen::OnSectionList ), NULL, this );	m_AddSection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnSectionAdd ), NULL, this );	m_ModifySection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnSectionModify ), NULL, this );	m_DeleteSection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnSectionDelete ), NULL, this );	m_FreeSection->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnFreeSection ), NULL, this );	m_stdButtonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnCancel ), NULL, this );	m_stdButtonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( stagedlggen::OnOK ), NULL, this );	}