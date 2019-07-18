#include "decorator.h"

class Sepia: public Decorator {
    int width;
    int height;
    std::vector<Pixel> pixels;
    public:
        Sepia(Image * component);
        ~Sepia();
        void render(PPM & ppm) override;
}