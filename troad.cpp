#include "troad.h"

TRoad::TRoad(int length, int width, int lanes)
    : length(length), width(width), lanes(lanes) {}

int TRoad::getLength() const { return length; }
void TRoad::setLength(int length) { this->length = length; }

int TRoad::getWidth() const { return width; }
void TRoad::setWidth(int width) { this->width = width; }

int TRoad::getLanes() const { return lanes; }
void TRoad::setLanes(int lanes) { this->lanes = lanes; }

Road TRoad::getRoad() const { return Road(); } // Реализация временная, нужно изменить
