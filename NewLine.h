// NEWLINE.H
#ifndef NEWLINE_H
#define NEWLINE_H
#include "Component.h"
using namespace std;

class NewLine : public Component {
public:
    string render() const override {
        return "\n";
    }
};
#endif