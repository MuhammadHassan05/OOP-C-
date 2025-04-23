#include "Undergraduate.h"
#include "Graduate.h"
#include "Faculty.h"
#include <iostream>
using namespace std;

int main() {
    cout << "*** Creating Undergraduate ***"<<endl;
    Undergraduate u("Ali", "Khan", 21, 3.5, "Smart Helmet");
    u.printInformation();    // Person
    u.printStudent();        // Student
    u.printUndergraduate();  // Undergraduate
    cout << endl;
    cout << "*** Creating Graduate ***"<<endl;
    Graduate g("Sara", "Raza", 24, 3.9, "AI in Healthcare");
    g.printInformation();
    g.printStudent();
    g.printGraduate();
    cout << endl;
    cout << "*** Creating Faculty ***";
    Faculty f("Dr.", "Aslam", 45, 4, 123);
    f.printInformation();
    f.printFaculty();

    return 0;
}
