const int maxn = 1e6 + 7;
int phi[maxn];
void phi_table(int n)
{
    for (int i = 2; i <= n; i++) phi[i] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++) if (!phi[i]) 
        for (int j = i; j <= n; j += i)
        {
            if (!phi[j]) phi[j] = j;
            phi[j] = phi[j] / i * (i - 1);
        }
}
