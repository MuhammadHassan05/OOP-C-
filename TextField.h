// TextField.h
#ifndef TEXTFIELD_H
#define TEXTFIELD_H

#include "Component.h"
using namespace std;

class TextField : public Component {
private:
    int length;

public:
    TextField(int len = 15);
    string render() const override;
};

#endif