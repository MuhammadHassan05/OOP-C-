// COMPONENT.H
#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
using namespace std;

class Component {
public:
    virtual string render() const = 0;
    virtual ~Component() = default;
};
#endif