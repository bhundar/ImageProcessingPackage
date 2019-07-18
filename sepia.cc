#include "sepia.h"

Sepia::Sepia(Image * component): Decorator{component}, {}

Sepia::~Sepia() {
    delete component;
}

void Sepia::render(PPM & ppm) {
    component->render(ppm);
    std::vector<Pixel> p = ppm.getPixels();
    std::vector<Pixel> temp;
    for (int i = 0; i < p.size(); ++i) {
        Pixel np;
        np.r = p[i].r *.393 + p[i].g * .769 + p[i]b * .189
        np.g = p[i].r *.349 + p[i].g * .686 + p[i].b * .168
        np.b = p[i].r *.272 + p[i].g * .534 + p[i].b * .131
        temp[i] = np;
    }
    for (int i = 0; i < p.size(); ++i) {
        p[i] = temp[i];
    }
}