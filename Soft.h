//
// Created by Евгения on 28.10.2026.
//

#ifndef INC_28_10_2026_SOFT_H
#define INC_28_10_2026_SOFT_H


#pragma once
#include "Date.h"
#include <string>
#include <fstream>

class Soft
{
protected:
    std::string name;
    std::string company;

public:
    Soft();
    Soft(std::string name, std::string company);
    virtual ~Soft();

    std::string getName() const;
    void setName(std::string name);
    std::string getCompany() const;
    void setCompany(std::string company);

    virtual void showInfo() const;
    virtual bool isAvailable() const = 0;
    virtual void saveToFile(std::ofstream& file) const = 0; // Додано std::
};


#endif //INC_28_10_2026_SOFT_H
