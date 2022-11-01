#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    
    int N;
    cin >> N; cin.ignore();
    int tab[N];
    int ecart[N];
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        tab[i]=Pi;
    }
    sort(tab,tab+N);
    int d;
    int dmin=tab[1]-tab[0];
    for (int i = 1; i < N-1; i++) {
        d=tab[i+1]-tab[i];
        if(d<dmin){
            dmin=d;
        }
    }
    /*
    int d=0;
    dmin=10000000;
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if(tab[i]>tab[j]){
                d=tab[i]-tab[j];
            }
            else{
                    d=tab[j]-tab[i];
            }
            if(dmin>d){
                dmin=d;
            }
        }
    }*/
    cout << dmin << endl;
}
