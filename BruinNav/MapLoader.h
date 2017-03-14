//
//  MapLoader.h
//  BruinNav
//
//  Created by Clark Minor on 3/11/17.
//  Copyright © 2017 Clark Minor. All rights reserved.
//

#ifndef MapLoader_h
#define MapLoader_h

#include <string>

class MapLoader
{
public:
    MapLoader();
    ~MapLoader();
    bool load(std::string mapFile);
    size_t getNumSegments() const;
    bool getSegment(size_t segNum, StreetSegment& seg) const;
};


#endif /* MapLoader_h */
