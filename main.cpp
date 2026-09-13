#include <bits/stdc++.h>
#define THANH ios_base::sync_with_stdio(false);
#define PHAT cin.tie(NULL); cout.tie(NULL);
using namespace std;

const int maxn = 1e5;
bool prime[maxn + 5];

void sieve(){
    for (int i = 2; i <= maxn; i++) prime[i] = true;
    for (int i = 2; i * i <= maxn; i++)
        if (prime[i])
            for (int j = i * i; j <= maxn; j += i)
                prime[j] = false;
}

signed main(){
    THANH PHAT

    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);

    sieve();
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        cout << prime[x] << '\n';
    }

    return 0;
}