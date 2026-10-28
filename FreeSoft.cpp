//
// Created by Евгения on 28.10.2026.
//

#include "FreeSoft.h"
 FreeSoft::FreeSoft() {
}

 FreeSoft::FreeSoft(const std::string &n, const std::string &c)
  :Soft(n, c)
{

}

 FreeSoft::~FreeSoft() {
  cout<<"`FreeSoft::`FreeSoft()"<<endl;
}

 bool FreeSoft::isAvailable() const {
  return true;
}

 void FreeSoft::saveToFile(std::ofstream &file) const {
  file<<"FreeSoft"<<endl;
  file<< name << endl;
  file<< company << endl;

}