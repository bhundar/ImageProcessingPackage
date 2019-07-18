#include "decorator.h"

class Rotate: public Decorator {
    int width;
    int height;
    std::vector<Pixel> pixels;
    public:
        Rotate(Image * component);
        ~Rotate();
        void render(PPM & ppm) override;
}