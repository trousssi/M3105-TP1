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
#include "EntierContraint.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    EntierContraint e1;
    EntierContraint e2(10,0,20);
    EntierContraint* e3 = new EntierContraint(50,20,70);
    
    
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
    
    int j = int(e1)*2;
    
    cout << j << endl;
    
    cout << *e3;
    
    cin >> e2;
    cout << e2;
    
    delete e3;
    return 0;
}

