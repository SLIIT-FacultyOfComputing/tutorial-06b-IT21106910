#include "Box.h"
#include <iostream>

// Implement setters and getters
void Box::setLength(int l){
  length = l;
}
void Box::setWidth(int w) {
  width = w;
}
void Box::setHeight(int h) {
  height = h;
}
void Box::getLength(int l) {
  length = l;
}
void Box::getWidth(int w) {
  width = w;
}
void Box::getHeight(int h) {
  height = h;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int area = length * width * height;
  return area;
}
