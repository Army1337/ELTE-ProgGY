#include <iostream>

using namespace std; //névtér

int main()
{
    setlocale(LC_ALL,"hun"); // Magyar betûk.
    //hibakezelés
    bool hiba; // igaz ha hibás a bemenet.
    //std::cout << "Hello world!" << std::endl; ha nem használunk névteret.
    //Bemenet
    int a;
    int b;
    //Kimenet
    int T;


    //Beolvasás.
    cout << "Téglalap területének a kiszámlálása." << endl;
    do{
        cout << "Add meg a(z) 'A' oldal hosszát! (cm)" << endl;
        cin >> a;
        hiba = cin.fail() || cin.peek()!='\n' || a <= 0;
        if (hiba)
        {
            cout << "Hibás oldal hosszt adtál meg! adj meg egy poziív egész számot!" << endl;
        }
        //input puffer ürítése.
        cin.clear();
        cin.ignore(999,'\n');

    }while(hiba);

    do{
        cout << "Add meg a(z) 'B' oldal hosszát! (cm)" << endl;
        cin >> b;
        hiba = cin.fail() || cin.peek() != '\n' || b <= 0;
        if (hiba)
        {
            cout << "Hibás oldal hosszt adtál meg! adj meg egy poziív egész számot!" << endl;
        }
    }while(hiba);

    //Terület kiszámitás
    T = a*b;
    //Kiírás
    cout<<"Téglalap területe: " << T << " cm2." << endl;
    return 0;
}
