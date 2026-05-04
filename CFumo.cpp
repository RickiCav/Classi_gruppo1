/*! \file CFumo.cpp
    \brief implementation of class Fumo
    \author Riccardo Cavagnaro
*/

#include "CFumo.h"
#include <iostream>

using namespace std;

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */

/// @brief default constructor
Fumo::Fumo() : Sensor()
{}

/// @brief constructor 
/// @param type pointer to a string that define the type of the measured value of the smoke sensor
/// @param freq sampling frequency of the measurement of the smoke sensor
/// @param stato state of the sensor (1=detect smoke, 0=doesn't detect smoke)
Fumo::Fumo(char* type, float freq, bool stato) : Sensor(type, freq)
{}

/// @brief copy constructor
/// @param r reference to the object to be copied
Fumo::Fumo(const Fumo &r) : Sensor(r)
{}

/// @brief destructor
Fumo::~Fumo()
{}

/* ----------------------------
   OPERATORS
   ---------------------------- */

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator
Fumo& Fumo::operator=(const Fumo &r)
{}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two bounding boxes have the same width and the same length  
bool Fumo::operator==(const Fumo &r)
{}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */

/// @brief default initialization of the object
void Fumo::Init()
{}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Fumo::Init(const Fumo &r)
{}

/// @brief total reset of the object  
void Fumo::Reset()
{}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */
   
/// @brief to set the state of the smoke sensor
void Fumo::SetStato(bool stato)
{}

/// @brief to get the state of the smoke sensor
/// @return stato
bool Fumo::GetStato()
{}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief for debugging: all infos about the object
void Fumo::Dump()
{}