/*! \file CSensore.cpp
    \brief implementation of class Sensor
	\author Riccardo Cavagnaro
*/

#include "CSensore.h"
#include<iostream>
#include<cstring>         

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */
/// @brief default constructor 
Sensor::Sensor()
{}

/// @brief constructor 
/// @param type pointer to a string that define the type of the measured value of the object
/// @param freq sampling frequency of the measurement of the object
Sensor::Sensor(char* type, float freq)
{}

/// @brief copy constructor
/// @param r reference to the object to be copied
Sensor::Sensor(const Sensor &r)
{}

/// @brief destructor
Sensor::~Sensor()
{}

/* ----------------------------
   OPERATORS
   ---------------------------- */

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator
Sensor& Sensor::operator=(const Sensor &r)
{}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Sensor::operator==(const Sensor &r)
{}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */
   
/// @brief default initialization of the object
void Sensor::Init()
{}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Sensor::Init(const Sensor &r)
{}

/// @brief total reset of the object  
void Sensor::Reset()
{}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */

/// @brief set type of the measured value of the object
/// @param type pointer to a string that define the type of the measured value of the object
void Sensor::SetType(char* type)
{}

/// @brief set sampling frequency of the measurement of the object
/// @param freq sampling frequency of the measurement of the object
void Sensor::SetFreq(float freq)
{}

/// @brief get type of the measured value of the object
/// @param type pointer to a string that reference to the type of the measured value of the object
void Sensor::GetType(char* type)
{}

/// @brief get sampling frequency of the object
/// @param freq (reference to) sampling frequency of the measurement of the object
float Sensor::GetFreq()
{}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief write an error message 
/// @param string message to be printed
void Sensor::ErrorMessage(const char *string)
{}

/// @brief write an warning message 
/// @param string message to be printed
void Sensor::WarningMessage(const char *string)
{}

/// @brief for debugging: all infos about the object
void Sensor::Dump()
{}