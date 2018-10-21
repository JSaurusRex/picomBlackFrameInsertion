// SPDX-License-Identifier: MPL-2.0
// Copyright (c) 2018 Yuxuan Shui <yshuiv7@gmail.com>

/// Some common types

#include <stdint.h>

/// Enumeration type to represent switches.
typedef enum {
  OFF,    // false
  ON,     // true
  UNSET
} switch_t;

/// Structure representing a X geometry.
typedef struct {
  int wid;
  int hei;
  int x;
  int y;
} geometry_t;

/// A structure representing margins around a rectangle.
typedef struct {
  int top;
  int left;
  int bottom;
  int right;
} margin_t;

typedef uint32_t opacity_t;

#define MARGIN_INIT { 0, 0, 0, 0 }
