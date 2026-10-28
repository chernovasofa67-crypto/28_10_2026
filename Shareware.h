//
// Created by Евгения on 28.10.2026.
//

#ifndef INC_28_10_2026_SHAREWARE_H
#define INC_28_10_2026_SHAREWARE_H


#pragma once
#include "Soft.h"

class Shareware :
    public Soft
{
protected:
    Date install;
    int days;

public:
    Shareware();
    Shareware(string name, string company, Date install, int days);

    ~Shareware();

    Date getInstall() const;
    int getDays() const;

    void showInfo() const override;
    bool isAvailable() const override;
    void saveToFile(ofstream& file) const override;
};



#endif //INC_28_10_2026_SHAREWARE_H
