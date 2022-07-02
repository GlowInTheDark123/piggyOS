#ifndef _KERNAL_VGA_H
#define _KERNEL_VGA_H

#include <stddef.h>
#include <stdint.h>

enum vga_color {
    VGA_COLOR_BLACK       = 0,
    VGA_COLOR_BLUE        = 1,
    VGA_COLOR_GREEN       = 2,
    VGA_COLOR_CYAN        = 3,   
    VGA_COLOR_RED         = 4,   
    VGA_COLOR_MAGENTA     = 5,  
    VGA_COLOR_BROWN       = 6,    
    VGA_COLOR_LIGHT_GRAY  = 7,
    VGA_COLOR_DARK_GRAY   = 8,
    VGA_COLOR_LIGHT_BLUE  = 9,
    VGA_COLOR_LIGHT_GREEN = 10,
    VGA_COLOR_LIGHT_CYAN  = 11,
    VGA_COLOR_LIGHT_RED   = 12,    
    VGA_COLOR_PINK        = 13,
    VGA_COLOR_YELLOW      = 14, 
    VGA_COLOR_WHITE       = 15,
};

/* function definitions */

void clear(void);
void print_char(char character);
void print_string(char* string);
void set_color(enum vga_color fg, enum vga_color bg);

#endif