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



    cout << "Gondoltam egy sz�mra 1-100 ig, mi a tipped? :)" << endl;
    do
    {
        cin >>tipp;
        hiba = cin.fail() || cin.peek()!='\n' || tipp <= 0 || tipp > 100;
        if(hiba)
        {
            cout << "Sz�veget,val�s,nem 1-100 ig, vagy hib�s sz�mot adt�l meg!" << endl;
        }
        else if(tipp<gondolt){
            cout << "Egy kis seg�ts�g, a sz�m nagyobb lesz ;)"<<endl;
        }
        else if(tipp>gondolt){
            cout << "Egy kis seg�ts�g, a sz�m kisebb lesz ;)"<<endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba||gondolt!=tipp);
    cout << "Gratul�lok kital�ltad! A sz�m amire gondoltam: " << gondolt <<endl;
    return 0;
}
