template <typename T>
class PointeurIntelligent{

        private :
                T *ptr;				// le pointeur r�gulier

        public :
                PointeurIntelligent(T* ptr =0); // initialisation (par d�faut � 0)
                ~PointeurIntelligent();		// destruction?
                                                // lib�ration de la m�moire?
//  * operator!
//  * conversion (get)
// v�rifier objet temporaire non const

