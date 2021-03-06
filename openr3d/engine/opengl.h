#ifndef OPENGL_H
#define OPENGL_H

#define _USE_MATH_DEFINES
#include <cmath>
#include <QOpenGLFunctions>

class GL : public QOpenGLFunctions
{

public:

    QOpenGLContext& context;
    GLuint defaultFBO;

    GL(QOpenGLContext& context);
    ~GL();

    void printInfo();
    void configure();

};

extern GL* gl;

#endif // OPENGL_H
