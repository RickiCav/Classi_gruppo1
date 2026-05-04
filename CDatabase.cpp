#include "CDatabase.h"

// Costruttore di default
Database::Database(){
}

//distruttore
Database::~Database(){
}
// metodi per creare e modificare i dati
int Database::SetNewStanza(Sensor** Sensori, Attuatore** Attuatori, int tipo){
    
}
void Database::SetNewAccesso(int idS,int idB){
    
}
void Database::EliminateAccesso(int idS,int idB){
    
}
void Database::SetNewSTDAccesso(int idB, int tipo){
    
}
void Database::EliminateSTDAccesso(int idS,int tipo){
    
}
void Database::SetTarghet(int targhet, int tipo){
    
}
//metodo che aggiorna stato di ogni attuatore controllando i sensori della stanza
void Database::AttuatoriUpdate(){
    
}
//metodo che controllo se un badge puo accedere alla stanza
bool Database::CheckID(int idS, int idB){
    
}
// metodi per ottenre ogni dato
Attuatore* Database::getAttuatore(int idS, int n){
    
}
Sensor* Database::getSensore(int ids, int n){
    
}
int Database::getTarghet(int ids, int n){
    
}
void Database::AccessDump(int ids){
    
}
void Database::AccessDump(){
    
}
void Database::STDAccMagDump(){
    
}
void Database::STDAccLabDump(){
    
}
void Database::STDAccUffDump(){
    
}
void Database::STDAccNeuDump(){
    
}
void Database::Dump(){
    
}
}
