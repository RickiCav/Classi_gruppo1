/*! \file CTemp.h
    \brief Declaration of the class Temp
    \author Riccardo Cavagnaro
*/

#ifndef TEMP_H
#define TEMP_H

#include "CSensore.h"

/// @class Temp
/// @brief to manage a temperature sensor
class Temp : public Sensor
{
protected:
    float temp;

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Temp();
    Temp(char* type, float freq, float temp);
    Temp(const Temp &r);

    ~Temp();
    /// @}

    /// @name OPERATORS
    /// @{
    Temp& operator=(const Temp &r);
    bool operator==(const Temp &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Temp &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    void SetTemp(float temp);

	float GetTemp();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump();
    /// @}
};

#endif