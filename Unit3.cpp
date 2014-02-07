//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TOKBottomDlg *OKBottomDlg;
//---------------------------------------------------------------------
__fastcall TOKBottomDlg::TOKBottomDlg(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall TOKBottomDlg::OKBtnClick(TObject *Sender)
{
        Form1->StaticText1->Caption = OKBottomDlg->Edit1->Text;
        OKBottomDlg->Close();
}
//---------------------------------------------------------------------------

void __fastcall TOKBottomDlg::CancelBtnClick(TObject *Sender)
{
        OKBottomDlg->Close();
}
//---------------------------------------------------------------------------


