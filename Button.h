// Button.h
#ifndef BUTTON_H
#define BUTTON_H

#include "Component.h"
#include <string>
using namespace std;

class Button : public Component {
private:
    string label;

public:
    Button(const string& lbl);
    string render() const override;
};

#endif