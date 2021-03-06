
#include <iostream>

// necessaire pour obtenir les definitions associee
// a string
#include <string>

using std::string;

int main() {
    string a, b;
    string s("bonjour"), s2 = "bonjour", s3(s2);
    string s4(4, 'c'); // s4 = "cccc"
    std::cout << "s=" << s
            << ", s2=" << s2
            << ", s4=" << s4 << std::endl;

    s2 +=s; // "bonjourbonjour"
    std::cout << "s2=" << s2 << std::endl;

    s[2] = '2'; // "bo2jour
    char c = s[0];
    std::cout << "a=" << a
            << ", b=" << b
            << ", s=" << s
            << ", s2=" << s2
            << std::endl;

    for (string::size_type i=0; i < s.size(); i++) {
        s[i]= toupper(s[i]);
    }

    std::cout << "s=" << s << std::endl;

    /*--------------- resultat ------------------------*\
      s=bonjour, s2=bonjour, s4=cccc
      s2=bonjourbonjour
      a=, b=, s=bo2jour, s2=bonjourbonjour
      s=BO2JOUR
    \*-------------------------------------------------*/

	std::system("pause");
}
