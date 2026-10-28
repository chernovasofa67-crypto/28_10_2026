//
// Created by Евгения on 28.10.2026.
//

#include "Shareware.h"
#include "Shareware.h"

Shareware::Shareware()
{
    /* install = Date();*/
    days = 0;
}

Shareware::Shareware(string name, string company, Date install, int days) :
    Soft(name, company)
{
    this->days = days;
    this->install = install;
}

Shareware::~Shareware()
{
    cout << "~shareware" << endl;
}

Date Shareware::getInstall() const
{
    return install;
}

int Shareware::getDays() const
{
    return days;
}
void Shareware::showInfo() const
{
    Soft::showInfo();
    cout << "Date install: " << install << endl
         << "Term: " << days << endl
         << "Finish date: " << install + days << endl;
}

bool Shareware::isAvailable() const
{
    return install + days >= Date();
}

void Shareware::saveToFile(ofstream& file) const
{
    file << "Shareware" << endl;
    file << name << endl
         << company << endl
         << install.getDay() << " " << install.getMonth() << " " << install.getYear() << endl
         << days << endl;
}
