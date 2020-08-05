#include<iostream>
#include<climits> /* Deteccion de tamaños en nuestras variables */

using namespace std;

int greedyChange(int coinSet, int n ,int N){
    if(N==0)
        return 0;
    if(N < 0)
        return INT_MAX;
    
    int coins = INT_MAX;

    for ( i = 0; i < n; i++)
    reccorremos todo nuestro set de monedas aka para dar cambio
    {
        int res = greedyChange(coinSet, n, N-coinSet[i]);
        if(res != INT_MAX)
            coins = min(coins,res+1);
    }

    return coins;
    



}