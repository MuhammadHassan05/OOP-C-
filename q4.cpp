//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee {
//private:
//    string name;
//    int employeeID;
//    double basicSalary, taxPercentage;
//
//public:
//    void Set_Employee_Details() {
//        cout << "****Enter employee details**** " <<endl;
//        cout << "Name " <<endl;
//        getline(cin, name);
//        cout << "Employee ID "<<endl;
//        cin >> employeeID;
//        cout << "Basic Salary "<<endl;
//        cin >> basicSalary;
//        cout << "Tax Percentage "<<endl;
//        cin >> taxPercentage;
//    }
//
//    double Calculate_Net_Salary() {
//        return basicSalary - (basicSalary * taxPercentage / 100);
//    }
//
//    void Display_Employee_Details() {
//        cout << "****Final Employee Details**** "<<endl;
//        cout << "Name: " << name << endl;
//        cout << "Employee ID: " << employeeID << endl;
//        cout << "Basic Salary: " << basicSalary << endl;
//        cout << "Tax Percentage: " << taxPercentage << "%" << endl;
//        cout << "Net Salary: " << Calculate_Net_Salary() << endl;
//    }
//};
//
//int main() {
//    Employee emp;
//    emp.Set_Employee_Details();
//    emp.Display_Employee_Details();
//    return 0;
//}