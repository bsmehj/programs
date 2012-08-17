
#include "Horloge5.h"
#include "auto_ptr.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

    auto_ptr<Horloge>
fonction1() {

    cout << "fonction1() commence ici" << endl;

    auto_ptr<Horloge> p(new Horloge(17723)) ;

    cout << "fin de fonction1()" << endl;

    return p;
}


void fonction2(){
    auto_ptr<Horloge> pt1(new Horloge);
    auto_ptr<Horloge> pt2;
    pt2=pt1;

    // pt1->sec(); erreur! le ptr est null
}

void fonction3(){
    // Transf�rer la propri�t� d'un auto_ptr � un autre
    auto_ptr<Horloge> pt1( new Horloge);
    auto_ptr<Horloge> pt2;

    //pt1->DoSomething(); // OK

    pt2 = pt1;  // maintenant le pointeur appartient � pt2
                // et non plus � pt1

    //pt2->DoSomething(); // OK

    // Utilisation de reset()
    auto_ptr<Horloge> pt3( new Horloge(1) );
    pt3.reset( new Horloge(2) );
    // Supprime la premi�re Horloge qui �tait allou�e
    // avec "new Horloge(1)"

} // quand on sort de la port�e, le destructeur de pt2 supprime
  // le pointeur, mais pt1 ne change pas pt3 sort de la port�e
  // et la deuxi�me Horloge est aussi supprim�e



    int main() {

    cout << "testH() commence ici" << endl;

    cout << "appel de fonction1()" << endl;
    auto_ptr<Horloge> ptr1= fonction1();
    cout << "retour � testG()" << endl;

    cout << "a) " << *ptr1 << endl;

    (*ptr1)++;

    cout << "b) " << *ptr1 << endl;

    Horloge* ptr2 = ptr1.release();
    delete ptr2;

    cout << "fin de testG()" << endl;

    system("PAUSE");
    return 0;

//    auto_ptr<Horloge> pt2( pt1 ); -> ill�gal
//    auto_ptr<Horloge> pt3;
//    pt3 = pt1;                    -> ill�gal
//    pt1.release();                -> ill�gal
//    pt1.reset( new Horloge );     -> ill�gal

}

    /*--------------- r�sultat ---------------*\

    testH() commence ici
    appelle de fonction1()
    fonction1() commence ici
    -> constructeur de 0jour 4hrs 55min 23sec
    fin de fonction1()
    retour � testG()
    a) 0jour 4hrs 55min 23sec
    fin de testH()
    -> destructeur de 0jour 4hrs 55min 23sec

    \*--------------------------------------*/


