///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "rocnetnodegen.h"

///////////////////////////////////////////////////////////////////////////

rocnetnodegen::rocnetnodegen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_NodeBook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_IndexPanel = new wxPanel( m_NodeBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxHORIZONTAL );
	
	m_RocNetLogo = new wxStaticBitmap( m_IndexPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_RocNetLogo, 0, wxALL, 5 );
	
	m_GCALogo = new wxStaticBitmap( m_IndexPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_GCALogo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer10->Add( bSizer101, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_NodeList = new wxListCtrl( m_IndexPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL );
	bSizer10->Add( m_NodeList, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Shutdown = new wxButton( m_IndexPanel, wxID_ANY, wxT("Shutdown"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_Shutdown, 0, wxALL, 5 );
	
	m_ShutdownAll = new wxButton( m_IndexPanel, wxID_ANY, wxT("Shutdown all"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_ShutdownAll, 0, wxALL, 5 );
	
	m_Show = new wxButton( m_IndexPanel, wxID_ANY, wxT("Show"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_Show, 0, wxALL, 5 );
	
	m_Query = new wxButton( m_IndexPanel, wxID_ANY, wxT("Query"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_Query, 0, wxALL, 5 );
	
	m_Report = new wxButton( m_IndexPanel, wxID_ANY, wxT("Report..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_Report, 0, wxALL, 5 );
	
	bSizer10->Add( bSizer93, 0, wxALIGN_RIGHT, 5 );
	
	m_IndexPanel->SetSizer( bSizer10 );
	m_IndexPanel->Layout();
	bSizer10->Fit( m_IndexPanel );
	m_NodeBook->AddPage( m_IndexPanel, wxT("Index"), false );
	m_RocNetPanel = new wxPanel( m_NodeBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	m_labNodemap = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("Nodemap"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labNodemap->Wrap( -1 );
	m_labNodemap->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 93, 92, false, wxEmptyString ) );
	
	bSizer16->Add( m_labNodemap, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_NodeTree = new wxTreeCtrl( m_RocNetPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_SINGLE );
	bSizer16->Add( m_NodeTree, 1, wxALL|wxEXPAND, 5 );
	
	bSizer13->Add( bSizer16, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticline1 = new wxStaticLine( m_RocNetPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer13->Add( m_staticline1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5->AddGrowableCol( 1 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_labIID = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("IID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labIID->Wrap( -1 );
	fgSizer5->Add( m_labIID, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_IID = new wxTextCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_IID, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labID = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labID->Wrap( -1 );
	fgSizer5->Add( m_labID, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );
	
	m_ID = new wxSpinCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer5->Add( m_ID, 0, wxALL, 5 );
	
	m_labLocation = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("Location"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labLocation->Wrap( -1 );
	fgSizer5->Add( m_labLocation, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Location = new wxSpinCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );
	fgSizer5->Add( m_Location, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labVendor = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("Vendor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labVendor->Wrap( -1 );
	fgSizer5->Add( m_labVendor, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );
	
	m_VendorName = new wxTextCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer5->Add( m_VendorName, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labProduct = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("Product"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labProduct->Wrap( -1 );
	fgSizer5->Add( m_labProduct, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ProductName = new wxTextCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), wxTE_READONLY );
	m_ProductName->SetMinSize( wxSize( 200,-1 ) );
	
	fgSizer5->Add( m_ProductName, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labIO = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("I/O"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labIO->Wrap( -1 );
	fgSizer5->Add( m_labIO, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_IO = new wxTextCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer5->Add( m_IO, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labSubIP = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("SubIP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labSubIP->Wrap( -1 );
	fgSizer5->Add( m_labSubIP, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_SubIP = new wxTextCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer5->Add( m_SubIP, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labVersion = new wxStaticText( m_RocNetPanel, wxID_ANY, wxT("Revision"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labVersion->Wrap( -1 );
	fgSizer5->Add( m_labVersion, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Version = new wxTextCtrl( m_RocNetPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer5->Add( m_Version, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer14->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_RocnetWrite = new wxButton( m_RocNetPanel, wxID_ANY, wxT("Write"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_RocnetWrite, 0, wxALL, 5 );
	
	bSizer14->Add( bSizer9, 0, wxALIGN_RIGHT, 5 );
	
	bSizer13->Add( bSizer14, 0, wxEXPAND, 5 );
	
	bSizer6->Add( bSizer13, 1, wxEXPAND, 5 );
	
	m_RocNetPanel->SetSizer( bSizer6 );
	m_RocNetPanel->Layout();
	bSizer6->Fit( m_RocNetPanel );
	m_NodeBook->AddPage( m_RocNetPanel, wxT("RocNet"), true );
	m_OptionsPanel = new wxPanel( m_NodeBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxVERTICAL );
	
	m_RocNetOptionBox = new wxStaticBoxSizer( new wxStaticBox( m_OptionsPanel, wxID_ANY, wxT("Options") ), wxVERTICAL );
	
	m_SecAck = new wxCheckBox( m_OptionsPanel, wxID_ANY, wxT("Acknowledge sensor events"), wxDefaultPosition, wxDefaultSize, 0 );
	m_RocNetOptionBox->Add( m_SecAck, 0, wxALL, 5 );
	
	m_UsePB = new wxCheckBox( m_OptionsPanel, wxID_ANY, wxT("Activate push button"), wxDefaultPosition, wxDefaultSize, 0 );
	m_RocNetOptionBox->Add( m_UsePB, 0, wxALL, 5 );
	
	m_RFID = new wxCheckBox( m_OptionsPanel, wxID_ANY, wxT("RFID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_RocNetOptionBox->Add( m_RFID, 0, wxALL, 5 );
	
	wxString m_IOTypeChoices[] = { wxT("I2C-1"), wxT("I2C-0") };
	int m_IOTypeNChoices = sizeof( m_IOTypeChoices ) / sizeof( wxString );
	m_IOType = new wxRadioBox( m_OptionsPanel, wxID_ANY, wxT("I2C"), wxDefaultPosition, wxDefaultSize, m_IOTypeNChoices, m_IOTypeChoices, 1, wxRA_SPECIFY_ROWS );
	m_IOType->SetSelection( 0 );
	m_RocNetOptionBox->Add( m_IOType, 0, wxALL, 5 );
	
	wxString m_DCCTypeChoices[] = { wxT("none"), wxT("dcc232"), wxT("sprog") };
	int m_DCCTypeNChoices = sizeof( m_DCCTypeChoices ) / sizeof( wxString );
	m_DCCType = new wxRadioBox( m_OptionsPanel, wxID_ANY, wxT("DCC Type"), wxDefaultPosition, wxDefaultSize, m_DCCTypeNChoices, m_DCCTypeChoices, 1, wxRA_SPECIFY_ROWS );
	m_DCCType->SetSelection( 0 );
	m_RocNetOptionBox->Add( m_DCCType, 0, wxALL, 5 );
	
	wxString m_DCCDeviceChoices[] = { wxT("/dev/ttyUSB0"), wxT("/dev/ttyUSB1"), wxT("/dev/ttyACM0") };
	int m_DCCDeviceNChoices = sizeof( m_DCCDeviceChoices ) / sizeof( wxString );
	m_DCCDevice = new wxRadioBox( m_OptionsPanel, wxID_ANY, wxT("DCC Device"), wxDefaultPosition, wxDefaultSize, m_DCCDeviceNChoices, m_DCCDeviceChoices, 1, wxRA_SPECIFY_COLS );
	m_DCCDevice->SetSelection( 0 );
	m_RocNetOptionBox->Add( m_DCCDevice, 0, wxALL, 5 );
	
	bSizer91->Add( m_RocNetOptionBox, 0, wxEXPAND|wxALL, 5 );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );
	
	m_NodeOptionsRead = new wxButton( m_OptionsPanel, wxID_ANY, wxT("Read"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer92->Add( m_NodeOptionsRead, 0, wxALL, 5 );
	
	m_NodeOptionsWrite = new wxButton( m_OptionsPanel, wxID_ANY, wxT("Write"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer92->Add( m_NodeOptionsWrite, 0, wxALL, 5 );
	
	bSizer91->Add( bSizer92, 0, wxALIGN_RIGHT, 5 );
	
	m_OptionsPanel->SetSizer( bSizer91 );
	m_OptionsPanel->Layout();
	bSizer91->Fit( m_OptionsPanel );
	m_NodeBook->AddPage( m_OptionsPanel, wxT("Options"), false );
	m_PortSetupPanel = new wxPanel( m_NodeBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_labPort = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort->Wrap( -1 );
	fgSizer6->Add( m_labPort, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_labType = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labType->Wrap( -1 );
	fgSizer6->Add( m_labType, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT|wxALIGN_BOTTOM, 5 );
	
	m_labDelay = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Delay"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labDelay->Wrap( -1 );
	fgSizer6->Add( m_labDelay, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT|wxALIGN_BOTTOM, 5 );
	
	m_labBlink = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Blink"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labBlink->Wrap( -1 );
	fgSizer6->Add( m_labBlink, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT|wxALIGN_BOTTOM, 5 );
	
	m_labPortInv = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Invert"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPortInv->Wrap( -1 );
	fgSizer6->Add( m_labPortInv, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_labPortTest = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Test"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPortTest->Wrap( -1 );
	fgSizer6->Add( m_labPortTest, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_labPortEventID = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPortEventID->Wrap( -1 );
	fgSizer6->Add( m_labPortEventID, 0, wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_labPortEventPort = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPortEventPort->Wrap( -1 );
	fgSizer6->Add( m_labPortEventPort, 0, wxTOP|wxRIGHT|wxLEFT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_labPort1 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort1->Wrap( -1 );
	m_labPort1->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort1, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxString m_Type1Choices[] = { wxT("0"), wxT("1") };
	int m_Type1NChoices = sizeof( m_Type1Choices ) / sizeof( wxString );
	m_Type1 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type1NChoices, m_Type1Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type1->SetSelection( 0 );
	fgSizer6->Add( m_Type1, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_Delay1 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay1, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_Blink1 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink1, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortInv1 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortTest1 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventID1 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID1, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventPort1 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort1, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_labPort2 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort2->Wrap( -1 );
	m_labPort2->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort2, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxString m_Type2Choices[] = { wxT("0"), wxT("1") };
	int m_Type2NChoices = sizeof( m_Type2Choices ) / sizeof( wxString );
	m_Type2 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type2NChoices, m_Type2Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type2->SetSelection( 0 );
	fgSizer6->Add( m_Type2, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay2 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay2, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_Blink2 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink2, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortInv2 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortTest2 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest2, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventID2 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID2, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventPort2 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort2, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_labPort3 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort3->Wrap( -1 );
	m_labPort3->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_Type3Choices[] = { wxT("0"), wxT("1") };
	int m_Type3NChoices = sizeof( m_Type3Choices ) / sizeof( wxString );
	m_Type3 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type3NChoices, m_Type3Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type3->SetSelection( 0 );
	fgSizer6->Add( m_Type3, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay3 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay3, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_Blink3 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink3, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortInv3 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv3, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortTest3 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest3, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventID3 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID3, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventPort3 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labPort4 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort4->Wrap( -1 );
	m_labPort4->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_Type4Choices[] = { wxT("0"), wxT("1") };
	int m_Type4NChoices = sizeof( m_Type4Choices ) / sizeof( wxString );
	m_Type4 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type4NChoices, m_Type4Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type4->SetSelection( 0 );
	fgSizer6->Add( m_Type4, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay4 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Blink4 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink4, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortInv4 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv4, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortTest4 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventID4 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID4, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventPort4 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labPort5 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort5->Wrap( -1 );
	m_labPort5->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_Type5Choices[] = { wxT("0"), wxT("1") };
	int m_Type5NChoices = sizeof( m_Type5Choices ) / sizeof( wxString );
	m_Type5 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type5NChoices, m_Type5Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type5->SetSelection( 0 );
	fgSizer6->Add( m_Type5, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay5 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Blink5 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortInv5 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortTest5 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventID5 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventPort5 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort5, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_labPort6 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("6"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort6->Wrap( -1 );
	m_labPort6->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_Type6Choices[] = { wxT("0"), wxT("1") };
	int m_Type6NChoices = sizeof( m_Type6Choices ) / sizeof( wxString );
	m_Type6 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type6NChoices, m_Type6Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type6->SetSelection( 0 );
	fgSizer6->Add( m_Type6, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay6 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Blink6 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortInv6 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortTest6 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest6, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_PortEventID6 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventPort6 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labPort7 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("7"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort7->Wrap( -1 );
	m_labPort7->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_Type7Choices[] = { wxT("0"), wxT("1") };
	int m_Type7NChoices = sizeof( m_Type7Choices ) / sizeof( wxString );
	m_Type7 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type7NChoices, m_Type7Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type7->SetSelection( 0 );
	fgSizer6->Add( m_Type7, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay7 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Blink7 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortInv7 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortTest7 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventID7 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventPort7 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labPort8 = new wxStaticText( m_PortSetupPanel, wxID_ANY, wxT("8"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPort8->Wrap( -1 );
	m_labPort8->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer6->Add( m_labPort8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_Type8Choices[] = { wxT("0"), wxT("1") };
	int m_Type8NChoices = sizeof( m_Type8Choices ) / sizeof( wxString );
	m_Type8 = new wxRadioBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, m_Type8NChoices, m_Type8Choices, 1, wxRA_SPECIFY_ROWS );
	m_Type8->SetSelection( 0 );
	fgSizer6->Add( m_Type8, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_Delay8 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_Delay8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Blink8 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_Blink8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortInv8 = new wxCheckBox( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_PortInv8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortTest8 = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 35,-1 ), 0 );
	fgSizer6->Add( m_PortTest8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventID8 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer6->Add( m_PortEventID8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PortEventPort8 = new wxSpinCtrl( m_PortSetupPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), wxSP_ARROW_KEYS, 0, 128, 0 );
	fgSizer6->Add( m_PortEventPort8, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer7->Add( fgSizer6, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_PortPrev = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("<"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer8->Add( m_PortPrev, 0, wxALL, 5 );
	
	m_PortNext = new wxButton( m_PortSetupPanel, wxID_ANY, wxT(">"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer8->Add( m_PortNext, 0, wxALL, 5 );
	
	m_PortRemove = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_PortRemove, 0, wxALL, 5 );
	
	m_PortRead = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("Get"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_PortRead, 0, wxALL, 5 );
	
	m_PortWrite = new wxButton( m_PortSetupPanel, wxID_ANY, wxT("Set"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_PortWrite, 0, wxALL, 5 );
	
	bSizer7->Add( bSizer8, 0, wxALIGN_RIGHT, 5 );
	
	m_PortSetupPanel->SetSizer( bSizer7 );
	m_PortSetupPanel->Layout();
	bSizer7->Fit( m_PortSetupPanel );
	m_NodeBook->AddPage( m_PortSetupPanel, wxT("Port Setup"), false );
	m_MacroPanel = new wxPanel( m_NodeBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_labMacroNr = new wxStaticText( m_MacroPanel, wxID_ANY, wxT("Number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labMacroNr->Wrap( -1 );
	fgSizer3->Add( m_labMacroNr, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );
	
	m_MacroNr = new wxSpinCtrl( m_MacroPanel, wxID_ANY, wxT("1"), wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 1, 128, 1 );
	fgSizer3->Add( m_MacroNr, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer11->Add( fgSizer3, 0, 0, 5 );
	
	m_MacroLines = new wxGrid( m_MacroPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_MacroLines->CreateGrid( 8, 5 );
	m_MacroLines->EnableEditing( true );
	m_MacroLines->EnableGridLines( true );
	m_MacroLines->EnableDragGridSize( false );
	m_MacroLines->SetMargins( 0, 0 );
	
	// Columns
	m_MacroLines->EnableDragColMove( false );
	m_MacroLines->EnableDragColSize( true );
	m_MacroLines->SetColLabelSize( 20 );
	m_MacroLines->SetColLabelValue( 0, wxT("Port") );
	m_MacroLines->SetColLabelValue( 1, wxT("Delay") );
	m_MacroLines->SetColLabelValue( 2, wxT("Type") );
	m_MacroLines->SetColLabelValue( 3, wxT("Value") );
	m_MacroLines->SetColLabelValue( 4, wxT("Blink") );
	m_MacroLines->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_MacroLines->EnableDragRowSize( true );
	m_MacroLines->SetRowLabelSize( 40 );
	m_MacroLines->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_MacroLines->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer11->Add( m_MacroLines, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_MacroExport = new wxButton( m_MacroPanel, wxID_ANY, wxT("Export..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_MacroExport, 0, wxALL, 5 );
	
	m_MacroImport = new wxButton( m_MacroPanel, wxID_ANY, wxT("Import..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_MacroImport, 0, wxALL, 5 );
	
	m_MacroGet = new wxButton( m_MacroPanel, wxID_ANY, wxT("Get"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_MacroGet, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_MacroSet = new wxButton( m_MacroPanel, wxID_ANY, wxT("Set"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_MacroSet, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer11->Add( bSizer12, 0, wxALIGN_RIGHT, 5 );
	
	m_MacroPanel->SetSizer( bSizer11 );
	m_MacroPanel->Layout();
	bSizer11->Fit( m_MacroPanel );
	m_NodeBook->AddPage( m_MacroPanel, wxT("Macro"), false );
	m_UpdatePanel = new wxPanel( m_NodeBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer61;
	fgSizer61 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer61->AddGrowableCol( 1 );
	fgSizer61->SetFlexibleDirection( wxBOTH );
	fgSizer61->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_labUpdate = new wxStaticText( m_UpdatePanel, wxID_ANY, wxT("New revision"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labUpdate->Wrap( -1 );
	fgSizer61->Add( m_labUpdate, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_UpdateRevision = new wxTextCtrl( m_UpdatePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_UpdateRevision, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Update = new wxButton( m_UpdatePanel, wxID_ANY, wxT("Update"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_Update, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_UpdateOffline = new wxCheckBox( m_UpdatePanel, wxID_ANY, wxT("offline"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_UpdateOffline, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	fgSizer61->Add( fgSizer4, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_labRevisionInfo = new wxStaticText( m_UpdatePanel, wxID_ANY, wxT("Info"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labRevisionInfo->Wrap( -1 );
	fgSizer61->Add( m_labRevisionInfo, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );
	
	m_RevisionInfo = new wxTextCtrl( m_UpdatePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,60 ), wxTE_MULTILINE|wxTE_READONLY );
	fgSizer61->Add( m_RevisionInfo, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	bSizer15->Add( fgSizer61, 0, wxEXPAND, 5 );
	
	m_UpdatePanel->SetSizer( bSizer15 );
	m_UpdatePanel->Layout();
	bSizer15->Fit( m_UpdatePanel );
	m_NodeBook->AddPage( m_UpdatePanel, wxT("Update"), false );
	
	bSizer5->Add( m_NodeBook, 0, wxEXPAND | wxALL, 5 );
	
	m_StdButton = new wxStdDialogButtonSizer();
	m_StdButtonOK = new wxButton( this, wxID_OK );
	m_StdButton->AddButton( m_StdButtonOK );
	m_StdButton->Realize();
	bSizer5->Add( m_StdButton, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	this->SetSizer( bSizer5 );
	this->Layout();
	bSizer5->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( rocnetnodegen::onClose ) );
	m_RocNetLogo->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( rocnetnodegen::onRocNetLogo ), NULL, this );
	m_GCALogo->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( rocnetnodegen::onGCALogo ), NULL, this );
	m_NodeList->Connect( wxEVT_COMMAND_LIST_BEGIN_DRAG, wxListEventHandler( rocnetnodegen::onBeginListDrag ), NULL, this );
	m_NodeList->Connect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( rocnetnodegen::onListColClick ), NULL, this );
	m_NodeList->Connect( wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler( rocnetnodegen::onIndexSelected ), NULL, this );
	m_NodeList->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( rocnetnodegen::onIndexSelected ), NULL, this );
	m_Shutdown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onShutdown ), NULL, this );
	m_ShutdownAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onShutdownAll ), NULL, this );
	m_Show->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onShow ), NULL, this );
	m_Query->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onQuery ), NULL, this );
	m_Report->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onReport ), NULL, this );
	m_NodeTree->Connect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( rocnetnodegen::onBeginDrag ), NULL, this );
	m_NodeTree->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( rocnetnodegen::onItemActivated ), NULL, this );
	m_NodeTree->Connect( wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler( rocnetnodegen::onTreeItemRightClick ), NULL, this );
	m_NodeTree->Connect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( rocnetnodegen::onTreeSelChanged ), NULL, this );
	m_RocnetWrite->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onRocnetWrite ), NULL, this );
	m_IOType->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( rocnetnodegen::onIOType ), NULL, this );
	m_NodeOptionsRead->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onNodeOptionsRead ), NULL, this );
	m_NodeOptionsWrite->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onNodeOptionsWrite ), NULL, this );
	m_labPort1->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort2->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort3->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort4->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort5->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort6->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort7->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort8->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_PortPrev->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortPrev ), NULL, this );
	m_PortNext->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortNext ), NULL, this );
	m_PortRemove->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortRemove ), NULL, this );
	m_PortRead->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortRead ), NULL, this );
	m_PortWrite->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortWrite ), NULL, this );
	m_MacroNr->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( rocnetnodegen::onMacroNumber ), NULL, this );
	m_MacroLines->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( rocnetnodegen::onMacroLineChange ), NULL, this );
	m_MacroExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroExport ), NULL, this );
	m_MacroImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroImport ), NULL, this );
	m_MacroGet->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroGet ), NULL, this );
	m_MacroSet->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroSet ), NULL, this );
	m_UpdateRevision->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( rocnetnodegen::onNewRevisionNumber ), NULL, this );
	m_Update->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onUpdate ), NULL, this );
	m_StdButtonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onOK ), NULL, this );
}

rocnetnodegen::~rocnetnodegen()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( rocnetnodegen::onClose ) );
	m_RocNetLogo->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( rocnetnodegen::onRocNetLogo ), NULL, this );
	m_GCALogo->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( rocnetnodegen::onGCALogo ), NULL, this );
	m_NodeList->Disconnect( wxEVT_COMMAND_LIST_BEGIN_DRAG, wxListEventHandler( rocnetnodegen::onBeginListDrag ), NULL, this );
	m_NodeList->Disconnect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( rocnetnodegen::onListColClick ), NULL, this );
	m_NodeList->Disconnect( wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler( rocnetnodegen::onIndexSelected ), NULL, this );
	m_NodeList->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( rocnetnodegen::onIndexSelected ), NULL, this );
	m_Shutdown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onShutdown ), NULL, this );
	m_ShutdownAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onShutdownAll ), NULL, this );
	m_Show->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onShow ), NULL, this );
	m_Query->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onQuery ), NULL, this );
	m_Report->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onReport ), NULL, this );
	m_NodeTree->Disconnect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( rocnetnodegen::onBeginDrag ), NULL, this );
	m_NodeTree->Disconnect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( rocnetnodegen::onItemActivated ), NULL, this );
	m_NodeTree->Disconnect( wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler( rocnetnodegen::onTreeItemRightClick ), NULL, this );
	m_NodeTree->Disconnect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( rocnetnodegen::onTreeSelChanged ), NULL, this );
	m_RocnetWrite->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onRocnetWrite ), NULL, this );
	m_IOType->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( rocnetnodegen::onIOType ), NULL, this );
	m_NodeOptionsRead->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onNodeOptionsRead ), NULL, this );
	m_NodeOptionsWrite->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onNodeOptionsWrite ), NULL, this );
	m_labPort1->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort2->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort3->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort4->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort5->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort6->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort7->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_labPort8->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( rocnetnodegen::onPort1Drag ), NULL, this );
	m_PortTest8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortTest ), NULL, this );
	m_PortPrev->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortPrev ), NULL, this );
	m_PortNext->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortNext ), NULL, this );
	m_PortRemove->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortRemove ), NULL, this );
	m_PortRead->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortRead ), NULL, this );
	m_PortWrite->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onPortWrite ), NULL, this );
	m_MacroNr->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( rocnetnodegen::onMacroNumber ), NULL, this );
	m_MacroLines->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( rocnetnodegen::onMacroLineChange ), NULL, this );
	m_MacroExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroExport ), NULL, this );
	m_MacroImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroImport ), NULL, this );
	m_MacroGet->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroGet ), NULL, this );
	m_MacroSet->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onMacroSet ), NULL, this );
	m_UpdateRevision->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( rocnetnodegen::onNewRevisionNumber ), NULL, this );
	m_Update->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onUpdate ), NULL, this );
	m_StdButtonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( rocnetnodegen::onOK ), NULL, this );
	
}
