object OKBottomDlg: TOKBottomDlg
  Left = 245
  Top = 108
  BorderStyle = bsDialog
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
  ClientHeight = 214
  ClientWidth = 313
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object OKBtn: TButton
    Left = 79
    Top = 180
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 0
    OnClick = OKBtnClick
  end
  object CancelBtn: TButton
    Left = 159
    Top = 180
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 1
    OnClick = CancelBtnClick
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 8
    Width = 281
    Height = 153
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080' '#1072#1085#1080#1084#1072#1094#1080#1080
    TabOrder = 2
    object Label1: TLabel
      Left = 24
      Top = 72
      Width = 101
      Height = 13
      Caption = #1057#1082#1086#1088#1086#1089#1090#1100' '#1072#1085#1080#1084#1072#1094#1080#1080
    end
    object Label2: TLabel
      Left = 16
      Top = 136
      Width = 38
      Height = 13
      Caption = #1041#1099#1089#1090#1088#1086
    end
    object Label3: TLabel
      Left = 112
      Top = 136
      Width = 58
      Height = 13
      Caption = #1053#1086#1088#1084#1072#1083#1100#1085#1086
    end
    object Label4: TLabel
      Left = 216
      Top = 136
      Width = 51
      Height = 13
      Caption = #1052#1077#1076#1083#1077#1085#1085#1086
    end
    object Label5: TLabel
      Left = 24
      Top = 40
      Width = 104
      Height = 13
      Caption = #1055#1088#1086#1076#1086#1083#1078#1080#1090#1077#1083#1100#1085#1086#1089#1090#1100
    end
    object Label6: TLabel
      Left = 184
      Top = 40
      Width = 29
      Height = 13
      Caption = #1093#1086#1076#1086#1074
    end
    object TrackBar2: TTrackBar
      Left = 24
      Top = 96
      Width = 225
      Height = 41
      Max = 2
      Orientation = trHorizontal
      Frequency = 1
      Position = 0
      SelEnd = 0
      SelStart = 0
      TabOrder = 0
      TickMarks = tmBottomRight
      TickStyle = tsAuto
    end
    object Edit1: TEdit
      Left = 144
      Top = 40
      Width = 33
      Height = 21
      TabOrder = 1
      Text = '100'
    end
  end
end
