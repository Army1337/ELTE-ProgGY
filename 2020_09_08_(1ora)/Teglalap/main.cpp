#include <iostream>

using namespace std; //n�vt�r

int main()
{
    setlocale(LC_ALL,"hun"); // Magyar bet�k.
    //hibakezel�s
    bool hiba; // igaz ha hib�s a bemenet.
    //std::cout << "Hello world!" << std::endl; ha nem haszn�lunk n�vteret.
    //Bemenet
    int a;
    int b;
    //Kimenet
    int T;


    //Beolvas�s.
    cout << "T�glalap ter�let�nek a kisz�ml�l�sa." << endl;
    do{
        cout << "Add meg a(z) 'A' oldal hossz�t! (cm)" << endl;
        cin >> a;
        hiba = cin.fail() || cin.peek()!='\n' || a <= 0;
        if (hiba)
        {
            cout << "Hib�s oldal hosszt adt�l meg! adj meg egy pozi�v eg�sz sz�mot!" << endl;
        }
        //input puffer �r�t�se.
        cin.clear();
        cin.ignore(999,'\n');

    }while(hiba);

    do{
        cout << "Add meg a(z) 'B' oldal hossz�t! (cm)" << endl;
        cin >> b;
        hiba = cin.fail() || cin.peek() != '\n' || b <= 0;
        if (hiba)
        {
            cout << "Hib�s oldal hosszt adt�l meg! adj meg egy pozi�v eg�sz sz�mot!" << endl;
        }
    }while(hiba);

    //Ter�let kisz�mit�s
    T = a*b;
    //Ki�r�s
    cout<<"T�glalap ter�lete: " << T << " cm2." << endl;
    return 0;
}
