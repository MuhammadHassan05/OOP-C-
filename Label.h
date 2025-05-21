// Label.h
#ifndef LABEL_H
#define LABEL_H

#include "Component.h"
#include <string>
using namespace std;

class Label : public Component {
private:
    string text;

public:
    Label(const string& txt);
    string render() const override;
};

#endif