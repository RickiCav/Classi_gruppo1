#ifndef CDATABASE_H
#define CDATABASE_H

/// @class Database
/// @brief Classe del Database
class Database {
protected:
    Attuatore*** MAttuatori;
    Sensor*** MSensori;
    int** MTarghet;
    int** MAccesso;
    int* STDAccNeutro;
    int* STDAccUfficio;
    int* STDAccLaboratorio;
    int* STDAccMagazzino;

public:
    Database(); // costruttore di default
    virtual ~Database(); // distruttore

    // metodi per creare e modificare i dati
    int SetNewStanza(Sensor** Sensori, Attuatore** Attuatori, int tipo);
    void SetNewAccesso(int idS,int idB);
    void EliminateAccesso(int idS,int idB);
    void SetNewSTDAccesso(int idB, int tipo);
    void EliminateSTDAccesso(int idS,int tipo);
    void SetTarghet(int targhet, int tipo);
    
    //metodo che aggiorna stato di ogni attuatore controllando i sensori della stanza
    void AttuatoriUpdate();
    
    //metodo che controllo se un badge puo accedere alla stanza
    bool CheckID(int idS, int idB);


    // metodi per ottenre ogni dato
    Attuatore* getAttuatore(int idS, int n);
    Sensor* getSensore(int ids, int n);
    int getTarghet(int ids, int n);
    void AccessDump(int ids);
    void AccessDump();
    void STDAccMagDump();
    void STDAccLabDump();
    void STDAccUffDump();
    void STDAccNeuDump();
    void Dump();
};

#endif
