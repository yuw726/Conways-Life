//---------------------------------------------------------------------------

#ifndef Unit1optH
#define Unit1optH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TDrawGrid *DrawGrid1;    // ����� �������� ����
        TBevel *Bevel1;
        TBitBtn *BitBtn1;        // ������ "�����"
        TBitBtn *BitBtn2;        // ������ "��������"
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TMainMenu *MainMenu1;    // ������� ����
        TMenuItem *N1;           // "����"
        TMenuItem *N2;           // "����->�������"
        TMenuItem *N3;           // "�������"
        TMenuItem *N4;           // "����->����� ����"
        TMenuItem *N5;           // "�������->� ���������"
        TMenuItem *N6;           // "�������->������� ����"
        TMenuItem *N7;           // "����->��c������"
        TGroupBox *GroupBox2;
        TTrackBar *TrackBar1;
        TCheckBox *CheckBox1;
        TStaticText *StaticText1;
        TMenuItem *N8;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall DrawGrid1DrawCell(TObject *Sender, int ACol,
          int ARow, TRect &Rect, TGridDrawState State);
        void __fastcall DrawGrid1SelectCell(TObject *Sender, int ACol,
          int ARow, bool &CanSelect);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
private:	// User declarations
        unsigned int i,j;  // ���������� ������
        unsigned int gencntr;  // Generation counter - ������� ���������
        int a[300][300];  // ������� ����
        unsigned int alive; // ����� �����
        unsigned short magnifier;    // ����������� ���������� ��������
        unsigned long stepcount;   // ������� ����� ��� ��������

        void __fastcall CreateArray();  // �������� ������� ����
        void __fastcall LifeOrDeath();  // �������� �������
        void __fastcall ResizeCell();   // ��������� ������� �����
        void __fastcall CountFishki();  // ������� ���������� ����� �����
        void __fastcall DoAnimation();
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
