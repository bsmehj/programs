
#include <iostream>

int main()
{
    char c = 'b';
    float x = 3.2 ;
    int y = 8 ;

    y = x ;
    std::cout << "float assigné �  un int : y=" << y << std::endl;

    x = y ;
    std::cout << "int assigné �  un float : x=" << x << std::endl;

    short z ;
    z = y ;	// résultat indéterminé si y plus grand que short
    std::cout << "int assigné �  un short : z=" << z << std::endl;

    y += c;
    std::cout << "int + char : y=" << y << std::endl;

    z = y/x;
    std::cout << "int/float assigné �  un short : z="
            << z << std::endl;

    x = y/x;
    std::cout << "int/float assigné �  un float : x="
            << x << std::endl;

    unsigned int w(10);
    y = w + z; // L'entier non-signé est converti en signé.
    // Attention, le résultat est possiblement indéterminé.

    std::cout << "unsigned float + short assignée �  un int : y="
            << y << std::endl;

    return 1;

    /*--------------- résultat ------------------------*\
      float assigné �  un int : y=3
      int assigné �  un float : x=3
      int assigné �  un short : z=3
      int + char : y=101
      int/float assigné �  un short : z=33
      int/float assigné �  un float : x=33.6667
      unsigned float + short assignée �  un int : y=43
    \*-------------------------------------------------*/

}
