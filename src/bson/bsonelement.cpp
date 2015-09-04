//
//  bsonelement.cpp
//  bson
//
//  Created by void on 9/4/15.
//  Copyright (c) 2015 Timur Losev. All rights reserved.
//

#include "bsonelement.h"
#include "bsonobj.h"

namespace _bson {
    bsonelement bsonelement::operator[](const std::string &field) const
    {
        bsonobj o = Obj();
        return o[field];
    }
}