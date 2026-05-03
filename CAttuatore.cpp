#include "CAttuatore.h"

// Base
Attuatore::Attuatore() : stato(false){

}

Attuatore::~Attuatore(){

}

void Attuatore::Attiva(){
    stato = true;
}

void Attuatore::Disattiva(){
    stato = false;
}

bool Attuatore::IsAttivo() const {
    return stato;
}

// Sottoclassi
Allarme::Allarme() : Attuatore(){

}
void Allarme::Disattiva(){
    // Logica manuale  
}

Nebulizzatore::Nebulizzatore() : Attuatore(){

}

void Nebulizzatore::Disattiva(){
    // Logica manuale
}

Condizionamento::Condizionamento() : Attuatore(){

}

Porta::Porta() : Attuatore(){
    
}