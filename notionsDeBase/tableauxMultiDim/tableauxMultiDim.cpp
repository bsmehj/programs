
#include <iostream>

int main() {

    const unsigned x = 3, y = 4; // unsigned = unsigned int
    int a[x][y]; // possible parce que x et y sont constants

    int n[3][4]; // n est un tableau de 3 tableaux de 4 entiers
    int d[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
    int c[2][3] = { 1, 2, 3, 4, 5, 6 };

    int *p = n[1]; // p pointe au premier entier dans n[1]
    *(p+2) = 7; // 3e entier de la 2e rangee de 4 entiers

    int(*pa)[4]; // pointeur a un tableau de 4

    pa = &a[0]; // adresse d'un tableau de 4
    pa = a;
    pa = &a[1];
    pa++; // un tableau de 4 plus loin

    int i = (*pa)[1];

    // (*r)[4] est un pointeur a un tableau de 4
    int (*r)[4] = &n[0];

    r = n; // equivaut à r = &n[0]
    int e = (*r)[2]; // 3e element dans un tableau de 4
    int *e2 = &n[1][2]; // 3e element du 2ieme tableau
    int e3 = *(*r + 2); // 3e element du tableau de 4

    char ch1 = 'a';
    char ch2 = 'b';
    char ch3[3] = {'c', 'd', 'e'};
    char *ptr[3]; // tableau de 3 pointeurs
    ptr[0] = &ch1;
    ptr[1] = ch3; // ou &ch3[0]
    ptr[2] = &ch3[2]; // equivaut a &(ch3[2])

    int tab[4][5];
    int *p2;
    p2 = reinterpret_cast<int*>(tab);

    typedef int tab4[4];
    tab4 b; // equivaut a int b[4]
    b[2] = 2;

    // p est un pointeur a un tableau de 4
    // *p est un tableau de 4
    tab4 *p3 = d;

    // avance d'un tableau de 4 a chaque iteration
    for (tab4 *p = n; p != n+3; ++p) {
        // avance d'un entier dans le tableau de 4 courant
       for(int *q = *p; q != *p+4; ++q)
           *q = 7;
    }

	std::system("pause");
}
