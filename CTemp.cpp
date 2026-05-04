/*! \file CTemp.cpp
    \brief implementation of class Temp
    \author Riccardo Cavagnaro
*/

#include "CTemp.h"
#include <iostream>

using namespace std;

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

/// @brief default constructor
Temp::Temp() : Sensor()
{}

/// @brief constructor 
/// @param type pointer to a string that define the type of the measured value by the temperature sensor
/// @param freq sampling frequency of the measurement of the smoke sensor
/// @param temp temperature value mesured by the temperature sensor
Temp::Temp(char* type, float freq, float temp) : Sensor(type, freq)
{}

/// @brief copy constructor
/// @param r reference to the object to be copied
Temp::Temp(const Temp &r) : Sensor(r)
{}

/// @brief destructor
Temp::~Temp()
{}

/* ----------------------------
   OPERATORS
   ---------------------------- */

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator
Temp& Temp::operator=(const Temp &r)
{}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two bounding boxes have the same width and the same length  
bool Temp::operator==(const Temp &r)
{}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */

/// @brief default initialization of the object
void Temp::Init()
{}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Temp::Init(const Temp &r)
{}

/// @brief total reset of the object  
void Temp::Reset()
{}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */
   
/// @brief to set the temperature value mesured by the temperature sensor
void Temp::SetTemp(float temp)
{}

/// @brief to get the temperature value mesured by the temperature sensor
/// @return stato
float Temp::GetTemp()
{}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief for debugging: all infos about the object
void Temp::Dump()
{}