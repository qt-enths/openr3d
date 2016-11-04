#include "component.h"
#include <iostream>

Component::Component(Component::Type type)
    : type(type)
{
}

void Component::update()
{
    //Default: Nothing to update
}

void Component::draw() const
{
    //Default: Nothing to draw
}