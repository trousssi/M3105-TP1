/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntierContraint.h
 * Author: trousssi
 *
 * Created on 9 septembre 2016, 08:09
 */

#ifndef ENTIERCONTRAINT_H
#define ENTIERCONTRAINT_H
#include <iostream>


class EntierContraint {
public:
    EntierContraint(int valeur = 0, int min = 0,int max = 100);
    EntierContraint(const EntierContraint& orig);
    virtual ~EntierContraint();
    
    int getMin() const;
    int getMax() const;
    int getVal() const;
    void setVal(int val);
    void saisir(std::istream &entree = std::cin);
    void afficher(std::ostream & sortie = std::cout) const;
    
    operator int() const;
    
   
    
private:
    int m_valeur;
    int m_min;
    int m_max;
};

 std::ostream& operator << (std::ostream& sortie, const EntierContraint& n);
 
 std::istream& operator >> (std::istream& entree, EntierContraint & n); 

#endif /* ENTIERCONTRAINT_H */

