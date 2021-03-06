/////////////////////////////////////////////////////////////////////////////
// Name:        fbide.cpp
// Purpose:     
// Author:      VonGodric
// Modified by: 
// Created:     08/03/05 14:21:36
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#include "inc/wxall.h"
#include "inc/fbide.h"
#include "inc/fb_frame.h"


IMPLEMENT_APP( FBIde )
IMPLEMENT_CLASS( FBIde, wxApp )

/*!
 * Initialisation for FBIde
 */

bool FBIde::OnInit()
{    
    new FB_Frame( NULL );
    return true;
}

/*!
 * Cleanup for FBIde
 */
int FBIde::OnExit()
{    

    return wxApp::OnExit();

}

