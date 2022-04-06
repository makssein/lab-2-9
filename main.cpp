#include "inc/bmp.hpp"

int main() {
    BMP image;
    image.readBMP("/Users/maksimsein/Documents/gitKraken/lab-2-9/in");

    image.inverseFilter();

    image.writeBMP("/Users/maksimsein/Documents/gitKraken/lab-2-9/out");

    return 0;
}
