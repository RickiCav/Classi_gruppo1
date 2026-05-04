/*! \file CFumo.h
    \brief Declaration of the class Fumo
    \author Riccardo Cavagnaro
*/

#ifndef FUMO_H
#define FUMO_H

#include "CSensore.h"

/// @class Fumo
/// @brief to manage a smoke sensor
class Fumo : public Sensor
{
protected:
    bool stato;

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Fumo();
    Fumo(char* type, float freq, bool stato);
    Fumo(const Fumo &r);

    ~Fumo();
    /// @}

    /// @name OPERATORS
    /// @{
    Fumo& operator=(const Fumo &r);
    bool operator==(const Fumo &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Fumo &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    void SetStato(bool stato);

	bool GetStato();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump();
    /// @}
};

#endif