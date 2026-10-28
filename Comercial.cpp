//
// Created by Евгения on 28.10.2026.
//

#include "Comercial.h"
#include "Comercial.h"

Comercial::Comercial()
{
    price = 0;
}

Comercial::Comercial(string name, string company, Date install, int days, float price)
    : Shareware(name, company, install, days)
{
    this->price = price;
}

Comercial::~Comercial()
{
    cout << "~Comercial " << endl;
}
void Comercial::setPrice(float price)
{
    this->price = price;
}

float Comercial::getPrice() const
{
    return price;
}
void Comercial::showInfo() const
{
    Shareware::showInfo();
    cout << "Price: " << price << endl;
}

void Comercial::saveToFile(ofstream& file) const
{
    file << "Comercial\n" << name << endl << company <<
        "\n" << install.getDay() << " " << install.getMonth() << " " << install.getYear() << "\n" << days << std::endl
        << price << endl;
}
