#include <iostream>

using namespace std;

int main()
{


    setlocale(LC_ALL,"hun"); // Magyar betûk.
    int penz
    float homF;
    bool hiba,fagyott; //alapból hamis
    const int minH=-89;
    const int maxH=58;
    cout <<fagyott<< endl;

    do{
        cout << "Adja meg a hõmérsékletet(C)" << endl;
        cin >> homC;
        hiba = cin.fail() || cin.peek()!='\n' || homC<minH || homC>maxH;
        if (hiba)
        {
            cout << "Hibs értéket adott meg!" << endl;
        }
        //input puffer ürítése.
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    return 0;
}
