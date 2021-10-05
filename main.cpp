#include <iostream>

using namespace std;

int main()
{
    int vstup = 0; //inicializace

    cout << "Stiskni 0 nebo 1: ";
    cin >> vstup;

    if (vstup == 0){ //<, >, <=, >=, ==, && ||
          cout << "Nula!" << endl;
    }else if(vstup == 1) {
        cout << "Jedna!" << endl;
    }else{
        cout << "F!" << endl;
    }
        //Prepinac

        switch(vstup){
            case 0: cout << "Nula ze switche!"; break;
            case 1: cout << "Jednicka ze switche!"; break;
            default: cout << "F dezo!"; break;
        }

        return 0;
}
