/*
 Rocrail - Model Railroad Software

 Copyright (C) Rob Versluis <r.j.versluis@rocrail.net>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 3
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef __cbusnodedlg__
#define __cbusnodedlg__

/**
@file
Subclass of cbusnodedlggen, which is generated by wxFormBuilder.
*/
#include "wx/timer.h"

#include "cbusnodedlggen.h"
#include "rocs/public/node.h"
#include "rocs/public/queue.h"

typedef struct {
  int cfg;
  int addr;
  int nn;
} Port;


/** Implementing cbusnodedlggen */
class CBusNodeDlg : public cbusnodedlggen
{
  Port m_Ports[16];
  int m_SOD;
  bool m_SaveOutputState;
  bool m_ShortEvents;
  int m_PulseTime;
  int m_GC2IgnorePortTest;

  void init(iONode event);
  void initIndex();
  void initVarList(iONode node);
  void initEvtList(iONode node);
  void initType(int manu, int mtype, const char* ver);
  const char* getTypeString( int manu, int mtype );
  iONode getNode(int nr, int mtype, int manu, const char* ver);
  iONode getNodeVar(int nn, int mtype, int nr, int val);
  iONode getNodeEvent(int nn, int mtype, int evnn, int evaddr, int evnr, int evval);
  void gc2GetPort(int port, int* conf, int* nn, int* addr);
  void gc2SetPort(int port, int conf, int nn, int addr);
  void varGet(int nr);
  void varSet( int idx, int val, bool update );
  void eventGetAll();
  void initGC2Var(int nr, int val);
  void initGC2Event(int idx, int nn, int addr);
  void setLearn();
  void setUnlearn();
  void eventSet( int nn, int addr, int idx, int val, bool update );

  wxTimer* m_Timer;
  iOQueue m_Queue;
  int m_GC2SetIndex;

  int m_SetPage;
  bool m_bGC2GetAll;
  bool m_bGC2SetAll;

protected:
	// Handlers for cbusnodedlggen events.
	void onOK( wxCommandEvent& event );
  void onCancel( wxCommandEvent& event );
  void onSetNodeNumber( wxCommandEvent& event );
  void onIndexSelect( wxCommandEvent& event );
  void onIndexDelete( wxCommandEvent& event );
  void onVarSelect( wxCommandEvent& event );
  void onVarValue( wxSpinEvent& event );
  void onVarBit( wxCommandEvent& event );
  void onVarGet( wxCommandEvent& event );
  void onVarSet( wxCommandEvent& event );
  void onEventSelect( wxCommandEvent& event );
  void onEventGetAll( wxCommandEvent& event );
  void onEventAdd( wxCommandEvent& event );
  void onEventDelete( wxCommandEvent& event );
  void onEvtGetVar( wxCommandEvent& event );
  void onEV( wxSpinEvent& event );
  void onEVBit( wxCommandEvent& event );
  void onLearn( wxCommandEvent& event );
  void onUnlearn( wxCommandEvent& event );
  void onEvtClearAll( wxCommandEvent& event );
  void onHexFile( wxCommandEvent& event );
  void onHEXFileSend( wxCommandEvent& event );
  void onBootmode( wxCommandEvent& event );
  void onResetBoot( wxCommandEvent& event );
  void onGC2GetAll( wxCommandEvent& event );
  void onGC2SetAll( wxCommandEvent& event );
  void onGC2Test( wxCommandEvent& event );
  void onGC2Set( wxCommandEvent& event );
  void onSoD( wxCommandEvent& event );
  void onVarValueText( wxCommandEvent& event );
  void onEVText( wxCommandEvent& event );


public:
	/** Constructor */
	CBusNodeDlg( wxWindow* parent, iONode event );
  CBusNodeDlg( wxWindow* parent );
  void event( iONode event );
  void onSetPage(wxCommandEvent& event);
  void OnTimer(wxTimerEvent& event);

};

#endif // __cbusnodedlg__
