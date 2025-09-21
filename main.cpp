#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    char *model;
    char *country;
    char *color;
    int year;
    double price;

public:
    Car(const char *newModel, const char *newCountry, const char *newColor)
    {
        model = new char[strlen(newModel) + 1];
        strcpy(model, newModel);

        country = new char[strlen(newCountry) + 1];
        strcpy(country, newCountry);

        color = new char[strlen(newColor) + 1];
        strcpy(color, newColor);

        year = 0;
        price = 0.0;
    }

    Car(const Car &obj)
    {
        model = new char[strlen(obj.model) + 1];
        strcpy(model, obj.model);

        country = new char[strlen(obj.country) + 1];
        strcpy(country, obj.country);

        color = new char[strlen(obj.color) + 1];
        strcpy(color, obj.color);

        year = obj.year;
        price = obj.price;
    }

    void SetCarModel(const char *newModel)
    {
        delete[] model;
        model = new char[strlen(newModel) + 1];
        strcpy(model, newModel);
    }
    const char *ShowModel() const { return model; }

    void SetCountry(const char *newCountry)
    {
        delete[] country;
        country = new char[strlen(newCountry) + 1];
        strcpy(country, newCountry);
    }
    const char *ShowCountry() const { return country; }

    void SetColor(const char *newColor)
    {
        delete[] color;
        color = new char[strlen(newColor) + 1];
        strcpy(color, newColor);
    }
    const char *ShowColor() const { return color; }

    void SetYear(int newYear) { year = newYear; }
    int ShowYear() const { return year; }

    void SetPrice(double newPrice) { price = newPrice; }
    double ShowPrice() const { return price; }

    void Print()
    {
        cout << "Model: " << model << endl;
        cout << "Country: " << country << endl;
        cout << "Color: " << color << endl;
        cout << "Price: $" << price << endl;
        cout << "Year: " << year << endl;
    }

    ~Car()
    {
        delete[] model;
        delete[] country;
        delete[] color;
    }
};

int main()
{
    Car car1("Audi A6", "Germany", "Gray");
    car1.SetYear(2021);
    car1.SetPrice(52000.0);
    car1.Print();
}
