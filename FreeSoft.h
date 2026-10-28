//
// Created by Евгения on 28.10.2026.
//

#ifndef INC_28_10_2026_FRESOFT_H
#define INC_28_10_2026_FRESOFT_H

#include "Soft.h"

class FreeSoft : public Soft{
public:
    FreeSoft();
    FreeSoft(const std::string &n, const std::string &c);
   virtual ~ FreeSoft() ;


    virtual bool isAvailable() const override;
    virtual void saveToFile(std::ofstream& file) const override; // Додано std::


};



#endif //INC_28_10_2026_FRESOFT_H
