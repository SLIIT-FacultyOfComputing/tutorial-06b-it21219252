#include "Box.h"

int Box :: getHeight() {
  return height;
}
int Box :: getWidth() {
  return width;
}
int Box :: getLength() {
  return length;
}
void Box :: setHeight(int h) {
  height = h;
}
void Box :: setLength(int l) {
  length = l;
}
void Box :: setWidth(int w) {
  width = w;
}
int Box :: calcVolume() {
  return height * width * length;
}