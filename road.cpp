#include "road.h"

Road::Road(const QString &name)
    : name(name) {}

QString Road::getName() const { return name; }
void Road::setName(const QString &name) { this->name = name; }
