/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntierContraintG.h
 * Author: Troussier-PC
 *
 * Created on 11 septembre 2016, 12:06
 */

#ifndef ENTIERCONTRAINTG_H
#define ENTIERCONTRAINTG_H

#include <iostream>
template <class T>
class EntierContraintG {
public:
  
    EntierContraintG(T valeur = 0, T min = 0,T max = 100);
    EntierContraintG(const EntierContraintG<T>& orig);
    virtual ~EntierContraintG();
    
    T getMin() const;
    T getMax() const;
    T getVal() const;
    void setVal(T val);
    void saisir(std::istream &entree = std::cin);
    void afficher(std::ostream & sortie = std::cout) const;
    

    
   
    
private:
    T m_valeur;
    T m_min;
    T m_max;
};



#include "EntierContraintG.cpp"
#endif /* ENTIERCONTRAINTG_H */

