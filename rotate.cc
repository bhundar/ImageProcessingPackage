#include "rotate.h"

Rotate::Rotate(Image * component): Decorator{component}{}

Rotate::~Rotate() {
        delete component;
}

void Rotate::render(PPM & ppm) {
    component->render(ppm);
    PPM pNew = ppm;
    std::vector<Pixel> &newPixel = pNew.getPixels();
    std::vector<Pixel> pix = ppm.getPixels();
    for (int j = 0; j < ppm.getWidth(); ++j) {
        for (int i = 0; i < ppm.getHeight(); ++i) {
            newPixel[j * ppm.getHeight() + i] = pix[ppm.getWidth() * (ppm.getHeight() - i - 1) + j];
        }
    }
    ppm = pNew;     
}  