#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include <FiguraGeometrica.h>
#include <Sculptor.h>
class CutVoxel : public FiguraGeometrica
{
protected:
    int x,y,z;
public:
    CutVoxel(int _x,int _y,int _z);
    void draw(Sculptor &screen);
};

#endif // CUTVOXEL_H
