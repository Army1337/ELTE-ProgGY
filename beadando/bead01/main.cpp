#include <iostream>

using namespace std;

int main()
{
    int O = 0,N = 0;
    cin >> O>>N;
    cin.clear();
    cin.ignore(999,'\n');
    int tomb[O][3];
    int tanarok[N][5] = {  };
    int szabadnapos[5]= {  };



    for (int i=0;i<O;++i)
    {

        cin >> tomb[i][0] >> tomb[i][1] >> tomb[i][2];

        cin.clear();
        cin.ignore(999,'\n');
        tanarok[tomb[i][0]-1][tomb[i][1]-1] = 1;
    }

    for (int i=0; i<N; ++i) {
        for (int j=0; j<5; ++j)
        {
         if (tanarok[i][j] == 0)
         {
             szabadnapos[j] = szabadnapos[j] + 1;
         }
        }
    }
    for (int i = 0; i<5;++i){
        cout << szabadnapos[i] << " ";
    }
    return 0;
}
