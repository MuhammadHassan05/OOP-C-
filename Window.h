// Window.h
#ifndef WINDOW_H
#define WINDOW_H

#include "Component.h"
#include <vector>
#include <string>
using namespace std;

class Window {
private:
    string title;
    vector<Component*> components;

public:
    Window(const string& ttl);
    ~Window();
    void addComponent(Component* comp);
    void print() const;
};

#endif
