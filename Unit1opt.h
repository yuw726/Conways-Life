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
        TDrawGrid *DrawGrid1;    // Сетка игрового поля
        TBevel *Bevel1;
        TBitBtn *BitBtn1;        // Кнопка "Старт"
        TBitBtn *BitBtn2;        // Кнопка "Очистить"
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TMainMenu *MainMenu1;    // Главное меню
        TMenuItem *N1;           // "Файл"
        TMenuItem *N2;           // "Файл->Закрыть"
        TMenuItem *N3;           // "Справка"
        TMenuItem *N4;           // "Файл->Новая игра"
        TMenuItem *N5;           // "Справка->О программе"
        TMenuItem *N6;           // "Справка->Правила игры"
        TMenuItem *N7;           // "Файл->Наcтройки"
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
        unsigned int i,j;  // Переменные циклов
        unsigned int gencntr;  // Generation counter - счётчик поколений
        int a[300][300];  // Игровое поле
        unsigned int alive; // Живые фишки
        unsigned short magnifier;    // Коэффициент увеличения масштаба
        unsigned long stepcount;   // Счётчик ходов при анимации

        void __fastcall CreateArray();  // Создание пустого поля
        void __fastcall LifeOrDeath();  // Основная функция
        void __fastcall ResizeCell();   // Изменение размера ячеек
        void __fastcall CountFishki();  // Считает количество живых фишек
        void __fastcall DoAnimation();
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
