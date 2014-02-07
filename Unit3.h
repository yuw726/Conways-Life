//----------------------------------------------------------------------------
#ifndef Unit3H
#define Unit3H
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
#include <ComCtrls.hpp>
//----------------------------------------------------------------------------
class TOKBottomDlg : public TForm
{
__published:
	TButton *OKBtn;
	TButton *CancelBtn;
        TGroupBox *GroupBox1;
        TTrackBar *TrackBar2;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TEdit *Edit1;
        TLabel *Label6;
        void __fastcall OKBtnClick(TObject *Sender);
        void __fastcall CancelBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall TOKBottomDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TOKBottomDlg *OKBottomDlg;
//----------------------------------------------------------------------------
#endif
