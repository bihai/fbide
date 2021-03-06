/*
 * This file is part of FBIde, an open-source (cross-platform) IDE for
 * FreeBasic compiler.
 * Copyright (C) 2005 - 2006 Albert Varaksin
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Contact e-mail: Albert Varaksin <vongodric@hotmail.com>
 * Program URL   : http://fbide.sourceforge.net
 */

#include "inc/manager.h"
#include "inc/uimanager.h"



/**
 * Constructor of the Manager class
 *
 * Is private to avoid duplicate instace creation of the manager
 */
Manager::Manager()
{
  m_isShuttingDown = false;
  return;
}



/**
 * Destroy all active managers
 */
Manager::~Manager()
{
}



/**
 * Returns an instance to Manager
 * @return Manager *
 */
Manager * Manager::Get()
{
	static Manager instance;
    return &instance;
}



/**
 * Shut down managers
 */
void Manager::ShutDown()
{

  m_isShuttingDown = true;

  DocManager::Free();
  UiManager::Free();
  RegManager::Free();
}
