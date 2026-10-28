#include "Soft.h"
#include "FreeSoft.h"
#include "Shareware.h"
#include "Comercial.h"
int main() {
    FreeSoft a("paint", "Microsoft");
    a.showInfo();

    std:: cout<< "\n====================================\n";

    Shareware h("Photoshop", "Adobe", Date(2001, 11, 11),7);
    h.showInfo();

    std:: cout<< "\n====================================\n";


    Comercial VisualStudio("VisualStudio", "Microsoft", Date(), 30, 100);
    VisualStudio.showInfo();

    std:: cout<< "\n====================================\n";


}

