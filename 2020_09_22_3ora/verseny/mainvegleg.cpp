#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    int N;
    bool hiba;
    bool kiskoru;
    do
    {
        cout << "Add meg a versenyzõk darabszámát!" << endl;
        cin >>N;
        hiba = cin.fail() || cin.peek()!='\n' || N < 10 || N > 100 ;
        if(hiba)
        {
            cout << "Szöveget,valós vagy hibás számot adtál meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    int tomb[N];
    for (int i=0;i<N;++i)
    {
        do{
            cout << i+1 << ". Versenyzõ életkora:";
            cin >> tomb[i];
            hiba = cin.fail() || cin.peek()!='\n' || tomb[i] <= 0;
            if (hiba)
            {
                cout << "Szöveget,valós vagy hibás számot adtál meg!" << endl;
            }
            cin.clear();
            cin.ignore(999,'\n');
            }while (hiba);
        if (kiskoru||tomb[i]<18)
            kiskoru = true;
        }
    if (kiskoru)
    {
        cout << "Volt kiskoru" << endl;
    }
    else
    {
        cout << "Nem volt kiskorú!" << endl;
    }
    return 0;
}
