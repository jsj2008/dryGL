//
//  GeometryPlane.h
//  dryGL
//
//  Created by Jordi Ros on 15/02/13.
//  Copyright (c) 2013 Jordi Ros. All rights reserved.
//

#pragma once

#include "../Geometry.h"

namespace dry {

class GeometryPlane : public Geometry
{
public:
                    GeometryPlane   () { }
                   ~GeometryPlane   () { Free(); }
    
    bool            Init            (float w, float h, int segw, int segh, glm::vec3 const &up);
    void            Free            ();

protected:

};
    
}
