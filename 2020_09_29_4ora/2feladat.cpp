#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    int db;
    int i = 1;
    const int minH = -89;
    const int maxH=58;
    bool hiba;
    do
    {
        cout << "Add meg milyen hosszú a hõmérséklet sorozat!" << endl;
        cin >>db;
        hiba = cin.fail() || cin.peek()!='\n' || db <= 1;
        if(hiba)
        {
            cout << "Szöveget,valós vagy hibás számot adtál meg." << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    //-----------------------------------------------
    double homerseklet[db];

    for (int i=0;i<db;++i)
    {
        do
        {
            cout << "Add meg a(z)" << i+1 << " . ik hõmérsékletet!" << endl;
            cin >>homerseklet[i];
            hiba = cin.fail() || cin.peek()!='\n' || homerseklet[i]<minH||homerseklet[i]>maxH;
            if(hiba)
            {
                cout << "Szöveget,valós vagy hibás számot adtál meg." << endl;
            }
            cin.clear();
            cin.ignore(999,'\n');
        }while(hiba);

    }
    //-----------------------------------------------
    while(i < db && homerseklet[i] > homerseklet[i-1])
    {
        ++i;
    }
    //-----------------------------------------------
    if(i >= db)
    {
        cout << "A sorozat szigmon nõ" << endl;
    }
    else{
        cout << "A sorozat szigmon csökken" << endl;
    }
    //-----------------------------------------------
    return 0;
}
