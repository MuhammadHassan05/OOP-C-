// PasswordField.h
#ifndef PASSWORDFIELD_H
#define PASSWORDFIELD_H

#include "TextField.h"
using namespace std;

class PasswordField : public TextField {
public:
    PasswordField(int len = 15);
    string render() const override;
};

#endif