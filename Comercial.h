//
// Created by Евгения on 28.10.2026.
//

#ifndef INC_28_10_2026_COMERCIAL_H
#define INC_28_10_2026_COMERCIAL_H


#pragma once
#include "Shareware.h"

class Comercial :
    public Shareware
{
protected:
    float price;

public:
    Comercial();
    Comercial(string name, string company, Date install, int days, float price);

    ~Comercial();

    void setPrice(float price);
    float getPrice() const;

    void showInfo() const override;

    void saveToFile(ofstream& file) const override;
};


#endif //INC_28_10_2026_COMERCIAL_H
