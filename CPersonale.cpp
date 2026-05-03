#include "CPersonale.h"

Personale::Personale() : badge(nullptr){

}

Personale::Personale(std::string nP, std::string cP, Badge* bP) : nome(nP), cognome(cP), badge(bP){

}

Personale::~Personale(){

}

void Personale::SetNome(std::string nP){

}

std::string Personale::GetNome() const {
    return "";
}

void Personale::SetCognome(std::string nC){

}

std::string Personale::GetCognome() const {
    return "";
}

void Personale::SetBadge(Badge* bP){

}

Badge* Personale::GetBadge() const {
    return nullptr;
}