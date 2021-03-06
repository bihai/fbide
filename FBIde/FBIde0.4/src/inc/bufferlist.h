/*
* This file is part of FBIde, an open-source (cross-platform) IDE for
* FreeBasic compiler.
* Copyright (C) 2005  Albert Varaksin
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


#ifndef BufferList_H
#define BufferList_H

#include <wx/dynarray.h>

class BufferList {
public:
    BufferList();
    ~BufferList();

    Buffer* AddBuffer(const wxString& highlighter = "Text");
    Buffer* AddFileBuffer(const wxString& fileName,
                          const wxString& highlighter);

    void SetBufferModified(int index, bool status);
    void SetBufferUnModified(int index);
    bool GetBufferModified(int index);

    int GetModifiedCount();
    int GetBufferCount();

    Buffer* GetBuffer(int index);
    Buffer* operator[](int index);
    void SetBuffer(int index, Buffer* buff);
    Buffer* GetLastBuffer();
    void RemoveBuffer(int index);
    int FileLoaded ( wxString FileName );
    void DecrModCount () {
        modifiedCount --;
    }
    void IncrModCount () {
        modifiedCount ++;
    }

private:
    BufferArray buffers;
    int modifiedCount;
};

#endif
