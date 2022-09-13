#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
    float metros, millas_marinas;
    cout << "Ingresa el valor de millas marinas: ";
    cin >> millas_marinas;
    cin.get();
    metros=millas_marinas*1852;
    cout << "Valor de metros: " << metros << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}


