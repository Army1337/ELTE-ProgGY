#include <iostream>

using namespace std;

int main()
{


    setlocale(LC_ALL,"hun"); // Magyar bet�k.
    int penz
    float homF;
    bool hiba,fagyott; //alapb�l hamis
    const int minH=-89;
    const int maxH=58;
    cout <<fagyott<< endl;

    do{
        cout << "Adja meg a h�m�rs�kletet(C)" << endl;
        cin >> homC;
        hiba = cin.fail() || cin.peek()!='\n' || homC<minH || homC>maxH;
        if (hiba)
        {
            cout << "Hibs �rt�ket adott meg!" << endl;
        }
        //input puffer �r�t�se.
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    return 0;
}
