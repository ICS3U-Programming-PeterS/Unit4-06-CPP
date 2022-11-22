// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program will show every possible color
#include <iostream>
#include <iomanip>

int main() {
    // Initialize variables
    int green = 0, blue = 0, red = 0;

    // for loop to print every color possibility
    for (red = 0; red <= 255; red++) {
        // print color
        printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)\n",
        red, green, blue, red, green, blue);

        // for loop to print every color possibility
        for (green = 0; green <= 255; green++) {
            // print color
            printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)\n",
            red, green, blue, red, green, blue);

            // for loop to print every color possibility
            for (blue = 0; blue <= 255; blue++) {
                // print color
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)\n",
                red, green, blue, red, green, blue);
            }
        }
    } std::cout << "Thanks for playing!";
}
