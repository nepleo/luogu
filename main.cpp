#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int les,lstx,lsty,tot=1,z,k,x,y,zf,cb,xl,js,a[N],b[N];
double umin=-21474836.0,umax=21474836.0;
inline void deal(){
    scanf("%d%d%d%d%d",&zf,&cb,&xl,&x,&y);
    k=(y-xl)/(x-cb);
    z=y-k*x,lstx=cb,a[cb]=cb,b[cb]=xl;
//注意下面的for循环是防止最后一个数据点的毒瘤操作特判的
    for(int i=lstx+1;i<x;++i)   b[i]=k*i+z,++tot;
    while(scanf("%d%d",&x,&y)){
        for(int i=lstx+1;i<x;++i)   b[i]=k*i+z,++tot;
        if(x==-1&&y==-1)    break;
        b[x]=y,++tot,lstx=x,lsty=y;
    }
    scanf("%d",&les);
    for(int i=lstx+1;;++i){
        x=i,y=lsty-les,lsty-=les;
        if(y<=0)    break;
        b[i]=y,++tot;
    }
    for(int i=cb;i<cb+tot;++i)  a[i]=(i-cb)*b[i];
}
void fw(){
    for(int i=cb;i<cb+tot;++i)
        if(b[zf]-b[i]>0)
            umin=max((double)((double)(i-cb)*b[i]-(double)(zf-cb)*b[zf])/(double)(b[zf]-b[i]),umin);
        else if(b[zf]-b[i]<0)
            umax=min((double)((double)(i-cb)*b[i]-(double)(zf-cb)*b[zf])/(double)(b[zf]-b[i]),umax);
}
int main(){
    deal(),fw();
    if(umin>umax) printf("NO SOLUTION\n");
    else if(umin>0) printf("%d",int(ceil(umin)));
    else if(umax<0) printf("%d",int(floor(umax)));
    else puts("0");
    return 0;
}