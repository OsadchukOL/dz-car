#include <iostream>
#include <string>
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

    void SetModel(const char *newModel)
    {
        delete[] model;
        model = new char[strlen(newModel) + 1];
        strcpy(model, newModel);
    }

    const char *GetModel() const
    {
        return model;
    }

    void SetCountry(const char *newCountry)
    {
        delete[] country;
        country = new char[strlen(newCountry) + 1];
        strcpy(country, newCountry);
    }

    const char *GetCountry() const
    {
        return country;
    }

    void SetColor(const char *newColor)
    {
        delete[] color;
        color = new char[strlen(newColor) + 1];
        strcpy(color, newColor);
    }

    const char *GetColor() const
    {
        return color;
    }

    void SetYear(int newYear)
    {
        year = newYear;
    }

    const int GetYear() const
    {
        return year;
    }

    void SetPrice(double newPrice)
    {
        price = newPrice;
    }

    const double GetPrice() const
    {
        return price;
    }

    void Print()
    {
        cout << "Model: " << model << endl;
        cout << "Country: " << country << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
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
    Car obj1("BMW M4 Coupe", "Germany", "Blue");
    obj1.SetYear(2022);
    obj1.SetPrice(72000.0);
    obj1.Print();
}
