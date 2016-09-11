/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntierContraintG.cpp
 * Author: Troussier-PC
 * 
 * Created on 11 septembre 2016, 12:06
 */

#ifdef ENTIERCONTRAINTG_H
#include <iostream>
template <class T>

EntierContraintG<T>::EntierContraintG(T valeur , T min ,T max ) 
: m_min(min), m_max(max) {
    try {setVal(valeur);}
    catch (char const * erreur) {
        throw erreur;
    }
}
template <class T>
EntierContraintG<T>::EntierContraintG(const EntierContraintG<T>& orig) {
}
template <class T>
EntierContraintG<T>::~EntierContraintG() {
}
template <class T>
T EntierContraintG<T>::getMin() const{
    return m_min;
}
template <class T>
T EntierContraintG<T>::getMax() const{
    return m_max;
}
template <class T>
T EntierContraintG<T>::getVal() const{
    return m_valeur;
}
template <class T>
void EntierContraintG<T>::setVal(T val){
    if (val<=m_max && val>=m_min ) {
        m_valeur = val;
    } else {
        throw "erreur ";
    }
        
}
template <class T>
void EntierContraintG<T>::saisir(istream &entree){
    int val;
    entree >> val;
    try {setVal(val);}
    catch (char const * erreur) {
        throw erreur;
    }
}
template <class T>
void EntierContraintG<T>::afficher(ostream & sortie) const{
    sortie << getMin() << "<=" << getVal() << "<=" << getMax() << endl;
}







#endif