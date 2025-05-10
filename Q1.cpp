#include <iostream>
#include<string>
using namespace std;

class ArtPiece {
public:
    virtual void displayInfo() = 0;
    virtual double calculateValue() = 0;
    virtual ~ArtPiece() {}
};

class Painting : public ArtPiece {
private:
    string title;
    int width, height;
    double price;

public:
    Painting(string t, int w, int h, double p)
        : title(t), width(w), height(h), price(p) {}

    void displayInfo() override {
        cout << "Painting: " << title << endl;
        cout << "Dimensions: " << width << "x" << height << " inches" << endl;
        cout << "Price: $" << price << endl;
        cout << "Value: $" << calculateValue() << endl << endl;
    }

    double calculateValue() override {
        return price;
    }
};

class Sculpture : public ArtPiece {
private:
    string title;
    double weight;
    double price;

public:
    Sculpture(string t, double w, double p)
        : title(t), weight(w), price(p) {}

    void displayInfo() override {
        cout << "Sculpture: " << title << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Price: $" << price << endl;
        cout << "Value: $" << calculateValue() << endl << endl;
    }

    double calculateValue() override {
        return price;
    }
};

int main() {
    ArtPiece* gallery[10];
    gallery[0] = new Painting("Starry Night", 36, 24, 2000);
    gallery[1] = new Sculpture("David", 500, 15000);
    gallery[2] = new Painting("Mona Lisa", 30, 20, 1000000);

    int size = 3;

    for (int i = 0; i < size; ++i) {
        gallery[i]->displayInfo();  
    }

    for (int i = 0; i < size; ++i) {
        delete gallery[i];
    }

    return 0;
}
