// RadioButtonGroup.h
#ifndef RADIOBUTTONGROUP_H
#define RADIOBUTTONGROUP_H

#include "Component.h"
#include <vector>
#include <string>
using namespace std;

class RadioButtonGroup : public Component {
private:
    vector<string> options;
    int selectedIndex;

public:
    RadioButtonGroup(const vector<string>& opts, int selected = -1);
    string render() const override;
};

#endif