//
//  CameraOrthogonal.h
//  dryGL
//
//  Created by Jordi Ros on 15/02/13.
//  Copyright (c) 2013 Jordi Ros. All rights reserved.
//

#pragma once

#include "Camera.h"

namespace dry {
    
class CameraOrthogonal : public Camera
{
public:
                        CameraOrthogonal    ();
    virtual            ~CameraOrthogonal    () { }

    void                Init                (float left, float top, float right, float bottom, float near, float far);

    glm::mat4 const    &GetMatProj          () { return m_MatProj; }

protected:

    void                UpdateProjection    ();
    
protected:
    
    float               m_Left;
    float               m_Top;
    float               m_Right;
    float               m_Bottom;
    float               m_Near;
    float               m_Far;
    glm::mat4           m_MatProj;
};

}