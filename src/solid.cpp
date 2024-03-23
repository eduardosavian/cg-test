#ifndef SOLID_CPP
#define SOLID_CPP


#include "solid.hpp"

solid create_solid(double position_x, double position_y, double size, int num_sides) {
    
}
void draw(solid solid);
void move(solid& solid, double distance, double angle);
void scale(solid& solid, double scale_x, double scale_y);
void rotate(solid& solid, double angle);
void display();
void redraw(int value);
void keyboard(unsigned char key, int x, int y);
void keyboard_special(int key, int x, int y);


#endif