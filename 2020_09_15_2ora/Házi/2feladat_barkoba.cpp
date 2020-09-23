#include <iostream>
#include <time.h> //time-hoz
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    srand(time(NULL));




    int gondolt=rand()%100+1;
    int tipp;
    bool hiba;
    //cout << gondolt << endl; //debug



    cout << "Gondoltam egy számra 1-100 ig, mi a tipped? :)" << endl;
    do
    {
        cin >>tipp;
        hiba = cin.fail() || cin.peek()!='\n' || tipp <= 0 || tipp > 100;
        if(hiba)
        {
            cout << "Szöveget,valós,nem 1-100 ig, vagy hibás számot adtál meg!" << endl;
        }
        else if(tipp<gondolt){
            cout << "Egy kis segítség, a szám nagyobb lesz ;)"<<endl;
        }
        else if(tipp>gondolt){
            cout << "Egy kis segítség, a szám kisebb lesz ;)"<<endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba||gondolt!=tipp);
    cout << "Gratulálok kitaláltad! A szám amire gondoltam: " << gondolt <<endl;
    return 0;
}
