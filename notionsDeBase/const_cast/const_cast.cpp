
#include <iostream>

int fct(int *p) {
    return *p+2;
}

int main() {
    const int a(10);
    const int *b;
    int *c;

    b = &a;
    c = const_cast<int*>(b);

    fct(c);
    // *b = 10, *c = 10 - NON!
    std::cout << "*b=" << *b
            << ", *c=" << *c << std::endl;

    /*--------------- résultat ------------------------*\
      *b=10, *c=10
    \*-------------------------------------------------*/

}
