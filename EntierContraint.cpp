/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntierContraint.cpp
 * Author: trousssi
 * 
 * Created on 9 septembre 2016, 08:09
 */

#include "EntierContraint.h"
#include <iostream> 
using namespace std;


EntierContraint::EntierContraint(int valeur , int min ,int max ) 
: m_min(min), m_max(max) {
    try {setVal(valeur);}
    catch (char const * erreur) {
        throw erreur;
    }
}

EntierContraint::EntierContraint(const EntierContraint& orig) {
}

EntierContraint::~EntierContraint() {
}

int EntierContraint::getMin() const{
    return m_min;
}
int EntierContraint::getMax() const{
    return m_max;
}
int EntierContraint::getVal() const{
    return m_valeur;
}
void EntierContraint::setVal(int val){
    if (val<=m_max && val>=m_min ) {
        m_valeur = val;
    } else {
        throw "erreur ";
    }
        
}
void EntierContraint::saisir(istream &entree){
    int val;
    entree >> val;
    try {setVal(val);}
    catch (char const * erreur) {
        throw erreur;
    }
}
void EntierContraint::afficher(ostream & sortie) const{
    sortie << getMin() << "<=" << getVal() << "<=" << getMax() << endl;
}


EntierContraint::operator int() const {
    return getVal();
}

 ostream& operator << (ostream& sortie, const EntierContraint& n){
    n.afficher(sortie);
    return sortie;
 } 
 
 istream& operator >> (istream& entree, EntierContraint & n) {
     n.saisir(entree);
     return entree;
 }