/*! \file CSensore.h
    \brief Declaration of the class Sensor
	\author Riccardo Cavagnaro
*/

#ifndef SENSOR_H
#define SENSOR_H

using namespace std;

/// @class Sensor
/// @brief to manage a generic sensor with a specific sampling frequency and type
class Sensor
{
protected:

    /// type of the measured value
    char* type;

    /// sampling frequency of the measurement
    float freq;

public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Sensor();
    Sensor(char* type, float freq);
    Sensor(const Sensor &r);

    ~Sensor();
    /// @}


    /// @name OPERATORS
    /// @{
    Sensor& operator=(const Sensor &r);
    bool operator==(const Sensor &r);
    /// @}


    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Sensor &r);
    void Reset();
    /// @}


    /// @name GETTERS / SETTERS
    /// @{

    void SetType(char* type);
    void SetFreq(float freq);

    void GetType(char* type);
    float GetFreq();

    /// @}


    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}

};

#endif