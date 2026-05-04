/*! \file CBadgeScan.h
    \brief Declaration of the class BadgeScan
    \author Riccardo Cavagnaro
*/

#ifndef BADGESCAN_H
#define BADGESCAN_H

#include "CSensore.h"

/// @class BadgeScan
/// @brief to manage a badge scanner
class BadgeScan : public Sensor
{
protected:
    int detectedBadge;

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    BadgeScan();
    BadgeScan(char* type, float freq, int detectedBadge);
    BadgeScan(const BadgeScan &r);

    ~BadgeScan();
    /// @}

    /// @name OPERATORS
    /// @{
    BadgeScan& operator=(const BadgeScan &r);
    bool operator==(const BadgeScan &r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const BadgeScan &r);
    void Reset();
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
    void SetDetBadge(int detectedBadge);

	int GetDetBadge();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump();
    /// @}
};

#endif