// Window.cpp
#include "Window.h"
#include <iostream>
using namespace std;

Window::Window(const string& ttl) : title(ttl) {}

Window::~Window() {
    for (Component* comp : components)
        delete comp;
}

void Window::addComponent(Component* comp) {
    components.push_back(comp);
}

void Window::print() const {
    string border = "╔" + string(10, '═') + " ═" + title + " ═" + string(10, '═') + "╗";
    cout << border << "\n";
    cout << "║" << string(border.length() - 2, ' ') << "║\n";
    for (Component* comp : components) {
        string line = comp->render();
        cout << "║ " << line << string(border.length() - 4 - line.length(), ' ') << " ║\n";
    }
    cout << "╚" << string(border.length() - 2, '═') << "╝\n";
}
