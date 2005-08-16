/////////////////////////////////////////////////////////////////////////////
// Name:        fb_config.h
// Purpose:     
// Author:      VonGodric
// Modified by: 
// Created:     08/03/05 14:23:04
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _FB_CONFIG_H_
#define _FB_CONFIG_H_

#include "wx/fileconf.h"
#include "wx/wfstream.h"
#include "wx/filesys.h"
#include "wx/datetime.h"
#include "wx/file.h"
#include "wx/filename.h"
#include "wx/app.h"

extern wxApp* wxGetApp();

typedef unsigned int uint;
struct Style_STC_FB {    
    struct Style{
        uint        Face;
        uint        Back;
        wxString 	Font;
        int    		Size;
        int    		Style;
        int    		Case;
    }Style[16];
    uint        LineNumberFace;
    uint        LineNumberBack;
    uint        SelectFace;
    uint        SelectBack;
    uint        CaretFace;
    uint        BraceFace;
    uint        BraceBack;
    int         BraceStyle;
    uint        BadBraceFace;
    uint        BadBraceBack;
    int         BadBraceStyle;
};

class FB_Config
{
    public:
        bool SyntaxHighlight,
             IndentGuide,
             DisplayEOL,
             LineNumber,
             WhiteSpace,
             AutoIndent,
             BraceHighlight,
             FolderMargin,
             ShowConsole, 
             ShowProject,
             ShowToolBar, 
             ShowStatusBar,
             ShowExitCode,
             CurrentLine,
             RightMargin,
             SplashScreen;
        int  TabLimit;
        int  TabSize;
        int  EdgeColumn;
        
        int winx, winy, winw, winh;
        
        Style_STC_FB STC_FB;
        wxString FB_Keywords;
        
        wxString CompilerPath;
        wxString EditorPath;
        wxString SyntaxFile;
        wxString ThemeFile;
        
        FB_Config(  );
        ~FB_Config();
        void LoadFBTheme ( wxString file );
        void LoadConfig  ( wxString file );
        void SaveConfig  ( wxString file );
};


#endif
