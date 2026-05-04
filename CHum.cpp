/*! \file CHum.cpp
    \brief implementation of class Hum
    \author Riccardo Cavagnaro
*/

#include "CHum.h"
#include <iostream>

using namespace std;

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

/// @brief default constructor
Hum::Hum() : Sensor()
{}

/// @brief constructor 
/// @param type pointer to a string that define the type of the measured value by the humidity sensor
/// @param freq sampling frequency of the measurement of the humidity sensor
/// @param Hum humidity value mesured by the humidity sensor
Hum::Hum(char* type, float freq, float Hum) : Sensor(type, freq)
{}

/// @brief copy constructor
/// @param r reference to the object to be copied
Hum::Hum(const Hum &r) : Sensor(r)
{}

/// @brief destructor
Hum::~Hum()
{}

/* ----------------------------
   OPERATORS
   ---------------------------- */

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator
Hum& Hum::operator=(const Hum &r)
{}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two bounding boxes have the same width and the same length  
bool Hum::operator==(const Hum &r)
{}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */

/// @brief default initialization of the object
void Hum::Init()
{}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Hum::Init(const Hum &r)
{}

/// @brief total reset of the object  
void Hum::Reset()
{}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */
   
/// @brief to set the humidity value mesured by the humidity sensor
void Hum::SetHum(float Hum)
{}

/// @brief to get the humidity value mesured by the humidity sensor
/// @return stato
float Hum::GetHum()
{}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief for debugging: all infos about the object
void Hum::Dump()
{}