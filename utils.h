#ifndef _UTILS_H
#define _UTILS_H

#include <stdarg.h>
#include <xcb/xcb.h>
#include <xcb/xcb_event.h>
#include "types.h"

void die(const char *, ...);
uint32_t get_color(char *);
void transfer_rectangle(xcb_rectangle_t, uint32_t *);

#endif
