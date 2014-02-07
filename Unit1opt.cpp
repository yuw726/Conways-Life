//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

// Neightbours - ��� �������� ������
// ������ ������ ����� ������ �������
#define neightbours (((a[i-1][j-1])+(a[i-1][j])+(a[i-1][j+1])+(a[i][j-1])+(a[i][j+1])+(a[i+1][j-1])+(a[i+1][j])+(a[i+1][j+1])))
int neightbourhood; // ����� �������� ���� �������� ������ ������ ������

#include "Unit1opt.h"
#include "About.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#define NUM 299   // ����������� ���� 
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CreateArray()   // �������� ������� ����
{
        for (int i=0; i<(NUM+1); i++)
        for (int j=0; j<(NUM+1); j++)
        a[i][j] = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)  // ��������� ��������
{
        magnifier = 2;
        alive = 0;
        stepcount = 1;

        DrawGrid1->ColCount = NUM+1;
        DrawGrid1->RowCount = NUM+1;
        CreateArray();
        ResizeCell();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DrawGrid1DrawCell(TObject *Sender, int ACol,
      int ARow, TRect &Rect, TGridDrawState State)
{
        // ������������ ������

        if (a[ACol][ARow]!=0)
        DrawGrid1->Canvas->Brush->Color = clGray;
        else
        DrawGrid1->Canvas->Brush->Color = clWindow;

        DrawGrid1->Canvas->FillRect(Rect);

        // �� ������������ ��������� ���������� ������

        if (State.Contains(gdFocused))
        DrawGrid1->Canvas->DrawFocusRect(Rect);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DrawGrid1SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect)
{
        if (a[ACol][ARow] == 0)
        a[ACol][ARow] = 1;
        else a[ACol][ARow] = 0;

        CountFishki();
        DrawGrid1->OnDrawCell;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LifeOrDeath()
{
        // �������� ��������� "��������" ����� ������

        for (i=1; i<NUM; i++)
        for (j=1; j<NUM; j++)
        {
   	        neightbourhood = neightbours;
   	        if (a[i][j]==0)
                {
   	 	        while (neightbourhood >= 9)           // �� �������� ������ �� ������ ������ ��� �������� ������
   		        {
                                neightbourhood = neightbourhood - 9;
   		        }
   		        if ( neightbourhood==3)
   		        a[i][j] = 9;                         // ������������ ����� �������� ������ ����� ������,
   		                                             // ����� �������� ������ �������� ���������
                }
        }

        // ��������� "��������" ������

        for (i=1; i<NUM; i++)
        for (j=1; j<NUM; j++)
        {
                neightbourhood = neightbours;
                if (a[i][j]==1)
                {
                        while (neightbourhood < 0)
   		        {
	 			neightbourhood = neightbourhood + 91;
   		        }
      	                while (neightbourhood >= 9)
   		        {
	 		        neightbourhood = neightbourhood - 9;
   	        	}
      	                if (neightbourhood<2 || neightbourhood>3)
                        a[i][j] = -90;                                // ��������� ������ �������� -90, ��� ���������� ��������
                }
        }

        // ������ �������� ������ ���������, ��������� - ������

        for (i=1; i<NUM; i++)
        for (j=1; j<NUM; j++)
        {
   	        switch (a[i][j])
                {
      	                case 9: a[i][j] = 1;
         			break;
                        case -90: a[i][j] = 0;
         			break;
                }
        }
        gencntr = gencntr + 1;    // ������� ��������� (�����)

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CountFishki()     // ������� ���������� ����� �����
{
        alive = 0;
        for (i=0; i<(NUM+1); i++)
        for (j=0; j<(NUM+1); j++)
        {
                if (a[i][j] == 1)
                alive++;
        }
        Label4->Caption = IntToStr(alive);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DoAnimation()
{
        // ���������� �������� (���� �������� ��������)

        if (Form1->CheckBox1->Checked == 1)
        switch (OKBottomDlg->TrackBar2->Position)
        {
                case 0: Sleep(0); break;
                case 1: Sleep(50); break;
                case 2: Sleep(100); break;
        }

        if (Form1->CheckBox1->Checked == 1)
        stepcount = StrToInt(OKBottomDlg->Edit1->Text);
        else stepcount = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)  // ������ "�����"
{
        for (long i = 0; i<stepcount; i++)
        {
                LifeOrDeath();
                CountFishki();
                Label2->Caption = IntToStr(gencntr);
                DoAnimation();

                DrawGrid1->OnDrawCell;
                DrawGrid1->Repaint();

                Application->ProcessMessages();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ResizeCell()   // ��������� ������� �����
{
        int m; //������ ������
        switch (magnifier)
        {
                case 0: m = 1; break;
                case 1: m = 2; break;
                case 2: m = 5; break;
                case 3: m = 7; break;
                case 4: m = 10; break;
                case 5: m = 12; break;
                case 6: m = 15; break;
        }

        DrawGrid1->DefaultColWidth=m;
        DrawGrid1->DefaultRowHeight=m;

        DrawGrid1->OnDrawCell;
        DrawGrid1->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)   // ������ "��������"
{
        CreateArray();
        gencntr = 0;
        CountFishki();
        Label2->Caption = IntToStr(gencntr);

        DrawGrid1->OnDrawCell;
        DrawGrid1->Repaint();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar1Change(TObject *Sender)  // ��������� ��������
{
        switch (TrackBar1->Position)
        {
                case 0: magnifier = 0; break;
                case 1: magnifier = 1; break;
                case 2: magnifier = 2; break;
                case 3: magnifier = 3; break;
                case 4: magnifier = 4; break;
                case 5: magnifier = 5; break;
        }
        ResizeCell();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)   // ������� ����
{
        BitBtn2->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)   // ��������� ���������
{
        Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)   // ����� �������� � ���������
{
        AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)  // ������� ����
{
        Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)  // ��������� ��������
{
        OKBottomDlg->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N8Click(TObject *Sender)
{
        Form4->Show();
}
//---------------------------------------------------------------------------

