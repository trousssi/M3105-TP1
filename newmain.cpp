/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.cpp
 * Author: trousssi
 *
 * Created on 9 septembre 2016, 08:58
 */

#include <cstdlib>

#include "EntierContraintG.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    EntierContraintG<int> e1;
    EntierContraintG<int> e2(10,0,20);
    EntierContraintG<int>* e3 = new EntierContraintG<int>(50,20,70);
    
    
    cout << "e1 :\n";
    e1.afficher();
    cout << "e2 :\n";
    e2.afficher();
    cout << "e3 :\n";
    e3->afficher();
    
    cout << "e1 = ";
    try { e1.saisir(); }
    catch (char const * erreur) {
        cout << erreur << endl;
    }
    cout << "e1 :\n";
    e1.afficher();
    
    
    
    delete e3;
    return 0;
}

