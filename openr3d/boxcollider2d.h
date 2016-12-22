#ifndef BOXCOLLIDER2D_H
#define BOXCOLLIDER2D_H

#include "collider2d.h"

class BoxCollider2D : public Collider2D
{
public:

    BoxCollider2D(SceneObject *sceneObject, bool isStatic = false);

    void updateCollider();

};

#endif // BOXCOLLIDER2D_H
