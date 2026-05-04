/*! \file CHum.h
    \brief Declaration of the class Hum
    \author Riccardo Cavagnaro
*/

#ifndef HUM_H
#define HUM_H

#include "CSensore.h"

/// @class Hum
/// @brief to manage a humidity sensor
class Hum : public Sensor
{
protected:
    float hum;

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Hum();
    Hum(char* type, float freq, float hum);
    Hum(const Hum &r);

    ~Hum();
    /// @}

    /// @name OPERATORS
    /// @{
    Hum& operator=(const Hum &r);
    bool operator==(const Hum &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Hum &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    void SetHum(float hum);

	float GetHum();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump();
    /// @}
};

#endif