#include "image.h"
#include "ppm.h"

class Decorator: public Image {
    protected:
        Image * component;
    public:
        Decorator(Image * component);
        ~Decorator();
}