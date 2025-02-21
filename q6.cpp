//#include<iostream>
//#include<string>
//using namespace std;
//class product {
//private:
//    string Product_Name;
//    int Product_ID, Quantity;
//    double Price;
// 
//
//public:
//    void Set_Product_Detail(const string& name, int ID, double RS, int qyt)
//    {
//        Product_Name = name;
//        Product_ID = ID;
//        Price = RS;
//        Quantity = qyt;
//    }
//
//    void Display_Product_Detail()
//    {
//        cout << "Enter Product Name " << Product_Name << endl;
//        cout << "Enter Product ID " <<Product_ID<< endl;
//        cout << "Enter Product Name " << Price << endl;
//        cout << "Enter Product Name " << Quantity << endl;
//    }
//
//    void Buy_Product(int qyt)
//    {
//        if (qyt <= Quantity) 
//        {
//            Quantity -= qyt; 
//            cout << "Purchase successful...! Remaining stock = " << Quantity << endl;
//        }
//        else
//        {
//            cout << "Out of Stock...! Remaining stock = " << Quantity << endl;
//        }
//    }
//
//};
//
//
//int main() {
//    product prod;
//    string name;
//    int ID, qytToBuy, AvailableQuantity; 
//    double RS;
//
//    cout << "Enter product name " << endl;
//    getline(cin, name);
//    cout << "Enter ID " << endl;
//    cin >> ID;
//    cout << "Enter price " << endl;
//    cin >> RS;
//    cout << "Available quantity " << endl;
//    cin >> AvailableQuantity;
//    
//    prod.Set_Product_Detail( name, ID, RS, AvailableQuantity);
//    prod.Display_Product_Detail();
//
//    cout << "Enter quantity to buy ";
//    cin >> qytToBuy;
//    prod.Buy_Product( qytToBuy);
//
//    return 0;
//}