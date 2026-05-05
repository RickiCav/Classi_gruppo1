/*! \file CBadge.cpp
    \brief Implementazione della classe Badge
	\author Alessio Pecorari
*/

#include "CBadge.h"

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */
/// @brief costruttore di default per il badge (ID = 0)
Badge::Badge() : id(0){
}

/// @brief costruttore parametrizzato
/// @param _id ID badge
Badge::Badge(int _id) : id(_id){
}

/// @brief distruttore
Badge::~Badge(){
}

/* ----------------------------
   OPERATORS
   ---------------------------- */
/// @brief overload dell'operatore = 
/// @param r reference all'oggetto a destra dell'operatore 
/// @return oggetto a sinistra dell'operatore
Badge& Badge::operator=(const Badge &r){
}

/// @brief overload dell'operatore operator == 
/// @param r reference all'oggetto a destra dell'operatore 
/// @return true se i due oggetti sono uguali
bool Badge::operator==(const Badge &r){
}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */
   
/// @brief inizializzazione di default dell'oggetto
void Badge::Init(){
}

/// @brief inizializzazione per copia
/// @param r reference all'oggetto da copiare
void Badge::Init(const Badge &r){
}

/// @brief reset completo dell'oggetto 
void Badge::Reset(){
}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */

/// @brief per impostare ID
void Badge::SetId(int _id){
}

/// @brief per ottenere ID
/// @return ID
int Badge::GetId() const {
    return 0;
}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief error message 
/// @param string output
void Badge::ErrorMessage(const char *string)
{}

/// @brief warning message 
/// @param string output
void Badge::WarningMessage(const char *string){
}

/// @brief debugging
void Badge::Dump(){
}