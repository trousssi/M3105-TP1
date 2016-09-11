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
template <class T>
class EntierContraintG {
public:
  
    EntierContraintG(T valeur = 0, T min = 0,T max = 100);
    EntierContraintG(const EntierContraint& orig);
    virtual ~EntierContraintG();
    
    T getMin() const;
    T getMax() const;
    T getVal() const;
    void setVal(T val);
    void saisir(std::istream &entree = std::cin);
    void afficher(std::ostream & sortie = std::cout) const;
    
    operator int() const;
    
   
    
private:
    T m_valeur;
    T m_min;
    T m_max;
};

 std::ostream& operator << (std::ostream& sortie, const EntierContraintG& n);
 
 std::istream& operator >> (std::istream& entree, EntierContraintG & n); 

#include "EntierContraintG.cpp"
#endif /* ENTIERCONTRAINTG_H */

