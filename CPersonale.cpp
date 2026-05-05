/*! \file CPersonale.cpp
    \brief Implementazione della classe Personale
	\author Alessio Pecorari
*/

#include "CPersonale.h"

using namespace std;

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */
/// @brief costruttore di default per personale
Personale::Personale() : badge(nullptr){
}

/// @brief costruttore parametrizzato
/// @param nP nome
/// @param cP cognome
/// @param bP badge
Personale::Personale(string nP, string cP, Badge* bP) : nome(nP), cognome(cP), badge(bP){
}

/// @brief distruttore
Personale::~Personale(){
}

/* ----------------------------
   OPERATORS
   ---------------------------- */
/// @brief overload dell'operatore = 
/// @param r reference all'oggetto a destra dell'operatore 
/// @return oggetto a sinistra dell'operatore
Personale& Personale::operator=(const Personale &r){
}

/// @brief overload dell'operatore operator == 
/// @param r reference all'oggetto a destra dell'operatore 
/// @return true se i due oggetti sono uguali
bool Personale::operator==(const Personale &r){
}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */
   
/// @brief inizializzazione di default dell'oggetto
void Personale::Init(){
}

/// @brief inizializzazione per copia
/// @param r reference all'oggetto da copiare
void Personale::Init(const Personale &r){
}

/// @brief reset completo dell'oggetto 
void Personale::Reset(){
}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */

/// @brief per impostare nome
/// @param nP nome
void Personale::SetNome(string nP){
}

/// @brief per ottenere nome
/// @return nome
string Personale::GetNome() const {
    return "";
}

/// @brief per impostare cognome
/// @param nC cognome
void Personale::SetCognome(string nC){
}

/// @brief per ottenere cognome
/// @return cognome
string Personale::GetCognome() const {
    return "";
}

/// @brief per impostare badge
/// @param nP badge
void Personale::SetBadge(Badge* bP){
}

/// @brief per ottenere badge
/// @return badge
Badge* Personale::GetBadge() const {
    return nullptr;
}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief error message 
/// @param string output
void Personale::ErrorMessage(const char *string)
{}

/// @brief warning message 
/// @param string output
void Personale::WarningMessage(const char *string){
}

/// @brief debugging
void Personale::Dump(){
}