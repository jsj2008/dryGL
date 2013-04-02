//
//  Attrib.cpp
//  dryGL
//
//  Created by Jordi Ros on 15/02/13.
//  Copyright (c) 2013 Jordi Ros. All rights reserved.
//

#include "dry.h"
#include "Attrib.h"

using namespace dry;


//------------------------------------------------------------------------------------------------
// SetVbo
//
//------------------------------------------------------------------------------------------------
void Attrib::SetVbo(Vbo *vbo)
{
    // TODO: assert(m_GLType == Vbo->GetGLType())
    m_Vbo = vbo;
}


//------------------------------------------------------------------------------------------------
// Bind
//
//------------------------------------------------------------------------------------------------
void Attrib::Bind()
{
    if (m_Vbo)
        m_Vbo->Bind(m_Location);
}


//------------------------------------------------------------------------------------------------
// Unbind
//
//------------------------------------------------------------------------------------------------
void Attrib::Unbind()
{
    if (m_Vbo)
        m_Vbo->Unbind();
}
