#include <iostream>

using namespace std;

int main()
{

    float a,b;
    float x;
    char* S;
    bool hiba;
    //Ékezetes betûk
    setlocale(LC_ALL,"hun");
    do{
        cout << "Add meg a(z) 'A' értékét." << endl;
        cin >> a;
        hiba = cin.fail() || cin.peek()!='\n';
        if (hiba)
        {
            cout << "Számot adj meg." << endl;
        }
        //input puffer ürítése.
        cin.clear();
        cin.ignore(999,'\n');

    }while(hiba);

    do{
        cout << "Add meg a(z) 'B' értékét." << endl;
        cin >> b;
        hiba = cin.fail() || cin.peek()!='\n';
        if (hiba)
        {
            cout << "Számot adj meg." << endl;
        }
        //input puffer ürítése.
        cin.clear();
        cin.ignore(999,'\n');

    }while(hiba);

    if (a==0&&b==0)
    {
        S = "Azonosság";
    }
    else if(a==0&&b!=0){
        S = "Ellentmondás";
    }
    else if(a!=0){
        x=-b/a;
    }
    cout << S << "   X értéke:" << x<< endl;


    cout << "Hello world!" << endl;
    return 0;
}
