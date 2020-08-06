#include<iostream>
#include<climits> /* Deteccion de tamaños en nuestras variables */

using namespace std;

int greedyChange(int coinSet[], int n ,int N){
    if(N==0)
        return 0;
    if(N < 0)
        return INT_MAX;
    
    int coins = INT_MAX;
    int i;

    for ( i = 0; i < n; i++)
    // reccorremos todo nuestro set de monedas aka para dar cambio
    {
        int res = greedyChange(coinSet, n, N-coinSet[i]);
        if(res != INT_MAX)
            coins = min(coins,res+1);
    }

    return coins;

}

int main(int argc, char const *argv[])
{
    int coinSet[] = {1,5,10,15,20};
    int n = sizeof(coinSet)/sizeof(coinSet[0]);
    int N = 20;

    cout<<"The minimum change using coins is:"
        << greedyChange(coinSet, n, N);
    
    return 0;
}
