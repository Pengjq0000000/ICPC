#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string.h>
#define LL long long
#define MEM(x,y) memset(x,y,sizeof(x))
#define MOD(x) ((x)%mod)
#define mod 1000000007
#define pb push_back
#define STREAM_FAST ios::sync_with_stdio(false)

using namespace std;
const int maxn = 1e5+7;
LL T[maxn<<2],lazy[maxn<<2],a[maxn];
void pushup(int rt){T[rt]=T[rt<<1]+T[rt<<1|1];}
void build(int rt,int l,int r)
{
    if (l==r) {T[rt]=a[l];return;}
    int mid=(l+r)>>1;
    build(rt<<1,l,mid);
    build(rt<<1|1,mid+1,r);
    pushup(rt);
}
void pushdown(int rt,int l,int r)
{
    if (lazy[rt]==0) return;
    lazy[rt<<1]+=lazy[rt];
    lazy[rt<<1|1]+=lazy[rt];
    int mid=(l+r)>>1;
    T[rt<<1]+=lazy[rt]*(mid-l+1);
    T[rt<<1|1]+=lazy[rt]*(r-mid);
    lazy[rt]=0;
}
void update(int rt,int l,int r,int L,int R,LL val)
{
    if (L<=l && r<=R)
    {
        T[rt]+=val*(r-l+1);
        lazy[rt]+=val;
        return;
    }
    pushdown(rt,l,r);
    int mid=(l+r)>>1;
    if (L<=mid) update(rt<<1,l,mid,L,R,val);
    if (mid <R) update(rt<<1|1,mid+1,r,L,R,val);
    pushup(rt);
}
LL query(int rt,int l,int r,int L,int R)
{
    if (L<=l && r<=R) return T[rt];
    pushdown(rt,l,r);
    int mid=(l+r)>>1;
    LL res=0;
    if (L<=mid) res+=query(rt<<1,l,mid,L,R);
    if (mid <R) res+=query(rt<<1|1,mid+1,r,L,R);
    return res;
}
int main()
{
    int n,q;scanf("%d%d",&n,&q);
    for (int i=1;i<=n;i++) scanf("%lld",&a[i]);
    build(1,1,n);
    while (q--)
    {
        char c;int x,y;
        scanf(" %c",&c);
        if (c=='Q') 
        {
            scanf("%d%d",&x,&y);
            printf("%lld\n",query(1,1,n,x,y));
        }
        if (c=='C')
        {
            LL val;scanf("%d%d%lld",&x,&y,&val);
            update(1,1,n,x,y,val);
        }
    }
    return 0; 
}

