#include<bits/stdc++.h>
#define pii pair<int, int>
#define fir first
#define sec second
using namespace std;
int n, k; 
pii cal(int x)
{
    int plus = min(k, n - x);
    int minus = min(k, x);
    int l = x + plus - (k - plus), r = x - minus + (k - minus);
    if (l > r) swap(l, r);
    return make_pair(l, r); 
}
void solve1()
{
    if ((n & 1) && !(k & 1)) {puts("-1"); return;}
    pii now = make_pair(0, 0);
    int f = n % k, ans = 0;
    while (1)
    {
        if (now.fir % 2 == f % 2)
        {
            bool flag = 0;
            for (int x = now.sec / k * k + f; x >= now.fir; x -= k)
            {
                if (now.fir <= x && x <= now.sec && x % 2 == now.fir % 2) 
                {
                    ans += (n - x) / k;
                    flag = 1;
                    break;
                }  
            }   
            if (flag) break;
        }
        pii resL = cal(now.fir);
        pii resR = cal(now.sec);
        now.fir = min(resL.fir, resR.fir);
        now.sec = max(resL.sec, resR.sec);
        ans++;
    }
    printf("%d\n", ans);
}

void solve2()
{
    int t = n / k, r = n % k;
    if (!r) {printf("%d\n", t); return;}
    if ((r & 1) && !(k & 1)) {puts("-1"); return;}
    if (t > 1)
    {
        if ((r & 1) == (k & 1)) printf("%d\n", t + 1);
        else if (!(r & 1) && (k & 1)) printf("%d\n", t + 2);
    }
    else if (t == 1) 
    {
        if (!(r & 1)) puts("3");
        else if ((r & 1) && (k & 1)) printf("%d\n", 2 * (n / 2 / r + (n % (2 * r) > 0)));
    }
}
int main()
{
    scanf("%d%d", &n, &k);
    //solve1();
    solve2();
    return 0;
}