#ifndef MINICON_H
#define MINICON_H

#include "Transformers.h"
#include <iostream>
#include <string>

class Minicon : public BaseTransformer {
private:
    std::string _blasterForm;  
    std::string _instrument;    

public:
    // Declaration of the static member variable
    static int miniconCounter;  

    // Constructors
    Minicon();
    Minicon(std::string blaster, std::string instrument);  

    std::string getBlasterForm() const;  
    void setBlasterForm(std::string newBlasterForm);  

    std::string getInstrument() const;  
    void setInstrument(std::string newInstrument);  

    void aboutRobot() override;  

    // New virtual methods
    void transform() override;
    void openFire() override;
    void ultra() override;
};

#endif // MINICON_H