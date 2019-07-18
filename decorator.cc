#include "decorator.h"

Decorator::Decorator(Image * component): component{component}{}

Decorator::~Decorator() {
    delete component;
}