#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <Sculptor.h>
class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){};
    virtual void draw(Sculptor &screen)=0;
};

#endif // FIGURAGEOMETRICA_H
