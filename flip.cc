#include "flip.h"

Flip::Flip(Image * component): Decorator{component}{}

Flip::~Flip() {
    delete component;
}

void Flip::render(PPM & ppm) {
    component->render(ppm);
    std::vector<Pixel> p = ppm.getPixels();
    for (int i = 0; i < ppm.getHeight(); ++i) {
        for (int j = 0; i < ppm.getWidth() / 2; ++j) {
            Pixel temp = p[(i*ppm.getWidth())+ 1];
            p[(i*ppm.getWidth())+ 1] = p[(i*ppm.getWidth()) + (ppm.getWidth() - j - i)];
            p[(i*ppm.getWidth()) + (ppm.getWidth() - j - i)] = temp;
        }
    }
}