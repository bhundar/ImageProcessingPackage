#include "decorator.h"

class Flip: public Decorator {
    int width;
    int height;
    std::vector<Pixel> pixels;
    public:
        Flip(Image * component);
        ~Flip();
        void render(PPM & ppm) override;
}