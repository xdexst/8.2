#ifndef ROAD_H
#define ROAD_H

#include <QString>

class Road
{
public:
    Road(const QString &name = "");

    QString getName() const;
    void setName(const QString &name);

private:
    QString name;
};

#endif // ROAD_H
