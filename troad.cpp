#ifndef TROAD_H
#define TROAD_H

#include "road.h"

class TRoad
{
public:
    TRoad(int length = 0, int width = 0, int lanes = 0);

    int getLength() const;
    void setLength(int length);

    int getWidth() const;
    void setWidth(int width);

    int getLanes() const;
    void setLanes(int lanes);

    Road getRoad() const;

private:
    int length;
    int width;
    int lanes;
};

#endif // TROAD_H
