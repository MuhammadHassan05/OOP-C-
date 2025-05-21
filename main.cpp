// main.cpp
#include "Label.h"
#include "TextField.h"
#include "PasswordField.h"
#include "Button.h"
#include "RadioButtonGroup.h"
#include "Window.h"
using namespace std;

int main() {
    Window window("Person");

    window.addComponent(new Label("Name  :"));
    window.addComponent(new TextField());

    window.addComponent(new Label("Age   :"));
    window.addComponent(new TextField());

    window.addComponent(new Label("Gender:"));
    window.addComponent(new RadioButtonGroup({"Male", "Female"}, -1));

    window.addComponent(new Button("Submit"));
    window.addComponent(new Button("Cancel"));

    window.print();
    return 0;
}