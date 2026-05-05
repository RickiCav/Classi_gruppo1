/*! \file CAttuatore.cpp
    \brief Implementazione della class Attuatore
	\author Alessio Pecorari
*/

#include "CAttuatore.h"

/* ----------------------------
   CONSTRUCTORS / DESTRUCTOR
   ---------------------------- */
/// @brief costruttore di default per l'attuatore (inizializzato OFF)
Attuatore::Attuatore() : stato(false){
}

/// @brief distruttore
Attuatore::~Attuatore(){
}

/* ----------------------------
   OPERATORS
   ---------------------------- */
/// @brief overload dell'operatore = 
/// @param r reference all'oggetto a destra dell'operatore 
/// @return oggetto a sinistra dell'operatore
Attuatore& Attuatore::operator=(const Attuatore &r){
}

/// @brief overload dell'operatore operator == 
/// @param r reference all'oggetto a destra dell'operatore 
/// @return true se i due oggetti sono uguali
bool Attuatore::operator==(const Attuatore &r){
}

/* ----------------------------
   BASIC HANDLING
   ---------------------------- */
   
/// @brief inizializzazione di default dell'oggetto
void Attuatore::Init(){
}

/// @brief inizializzazione per copia
/// @param r reference all'oggetto da copiare
void Attuatore::Init(const Attuatore &r){
}

/// @brief reset completo dell'oggetto 
void Attuatore::Reset(){
}

/* ----------------------------
   GETTERS / SETTERS
   ---------------------------- */
/// @brief per attivare un attuatore
void Attuatore::Attiva(){
    stato = true;
}

/// @brief per disattivare un attuatore
void Attuatore::Disattiva(){
    stato = false;
}

/// @brief controlla lo stato attuale dell'attuatore
/// @return true se l'attuatore è attivo, false altrimenti
bool Attuatore::IsAttivo() const {
    return stato;
}

/* ----------------------------
   SOTTOCLASSI
   ---------------------------- */
/// @brief creazione di un oggetto Allarme antincendio
Allarme::Allarme() : Attuatore(){
}

/// @brief disattivazione manuale dell'allarme antincendio
void Allarme::Disattiva(){
}

/// @brief creazione di un oggetto Nebulizzatore
Nebulizzatore::Nebulizzatore() : Attuatore(){
}

/// @brief disattivazione manuale del nebulizzatore
void Nebulizzatore::Disattiva(){
}

/// @brief creazione di un oggetto Condizionamento
Condizionamento::Condizionamento() : Attuatore(){
}

/// @brief creazione di un oggetto Porta
Porta::Porta() : Attuatore(){
}

/* ----------------------------
   DEBUG and SERIALIZATION
   ---------------------------- */

/// @brief error message 
/// @param string output
void Attuatore::ErrorMessage(const char *string)
{}

/// @brief warning message 
/// @param string output
void Attuatore::WarningMessage(const char *string){
}

/// @brief debugging
void Attuatore::Dump(){
}