object Form1: TForm1
  Left = 367
  Top = 207
  Width = 849
  Height = 502
  AutoSize = True
  Caption = #1048#1075#1088#1072' "'#1046#1080#1079#1085#1100'"'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 512
    Top = 0
    Width = 329
    Height = 449
  end
  object DrawGrid1: TDrawGrid
    Left = 0
    Top = 0
    Width = 489
    Height = 449
    BorderStyle = bsNone
    ColCount = 100
    DefaultColWidth = 24
    FixedCols = 0
    RowCount = 100
    FixedRows = 0
    TabOrder = 0
    OnDrawCell = DrawGrid1DrawCell
    OnSelectCell = DrawGrid1SelectCell
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24
      24
      25
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24)
  end
  object BitBtn1: TBitBtn
    Left = 552
    Top = 368
    Width = 113
    Height = 41
    Caption = #1057#1090#1072#1088#1090
    TabOrder = 1
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 696
    Top = 368
    Width = 105
    Height = 41
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1087#1086#1083#1077
    TabOrder = 2
    OnClick = BitBtn2Click
  end
  object GroupBox1: TGroupBox
    Left = 536
    Top = 24
    Width = 273
    Height = 113
    Caption = #1057#1090#1072#1090#1080#1089#1090#1080#1082#1072
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Lucida Console'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    object Label1: TLabel
      Left = 13
      Top = 37
      Width = 84
      Height = 20
      Caption = #1055#1086#1082#1086#1083#1077#1085#1080#1077
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 126
      Top = 37
      Width = 11
      Height = 20
      Caption = '0'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 12
      Top = 69
      Width = 149
      Height = 20
      Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1092#1080#1096#1077#1082
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 190
      Top = 69
      Width = 11
      Height = 20
      Caption = '0'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object GroupBox2: TGroupBox
    Left = 536
    Top = 160
    Width = 273
    Height = 185
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Lucida Console'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    DesignSize = (
      273
      185)
    object Label5: TLabel
      Left = 24
      Top = 48
      Width = 70
      Height = 16
      Caption = #1052#1072#1089#1096#1090#1072#1073
    end
    object CheckBox1: TCheckBox
      Left = 16
      Top = 128
      Width = 233
      Height = 41
      Anchors = [akLeft, akBottom]
      Caption = #1040#1085#1080#1084#1072#1094#1080#1103' (     '#1093#1086#1076#1086#1074')'
      TabOrder = 1
    end
    object TrackBar1: TTrackBar
      Left = 16
      Top = 72
      Width = 241
      Height = 33
      Cursor = crHandPoint
      Hint = #1052#1072#1089#1096#1090#1072#1073
      HelpType = htKeyword
      HelpKeyword = #1052#1072#1089#1096#1090#1072#1073
      Max = 6
      Orientation = trHorizontal
      ParentShowHint = False
      Frequency = 1
      Position = 2
      SelEnd = 0
      SelStart = 0
      ShowHint = True
      TabOrder = 0
      TickMarks = tmBottomRight
      TickStyle = tsAuto
      OnChange = TrackBar1Change
    end
    object StaticText1: TStaticText
      Left = 136
      Top = 144
      Width = 34
      Height = 20
      Alignment = taCenter
      Anchors = [akLeft, akBottom]
      Caption = '100'
      TabOrder = 2
    end
  end
  object MainMenu1: TMainMenu
    Left = 64
    Top = 8
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N4: TMenuItem
        Caption = #1053#1086#1074#1072#1103' '#1080#1075#1088#1072
        OnClick = N4Click
      end
      object N7: TMenuItem
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
        OnClick = N7Click
      end
      object N2: TMenuItem
        Caption = #1047#1072#1082#1088#1099#1090#1100
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N6: TMenuItem
        Caption = #1055#1088#1072#1074#1080#1083#1072' '#1080#1075#1088#1099
        OnClick = N6Click
      end
      object N8: TMenuItem
        Caption = #1050#1072#1082' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1089#1103' '#1087#1088#1086#1075#1088#1072#1084#1084#1086#1081
        OnClick = N8Click
      end
      object N5: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N5Click
      end
    end
  end
end
