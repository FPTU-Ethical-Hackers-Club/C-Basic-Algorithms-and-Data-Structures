#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int a[10006],it[40024],trace[10006],n,q,x,l,r;
int max(int a,int b)
{ if (a>b) return a;
   return b;
}
void create_tree(int k,int l,int r)
{  
	if (l==r)
		{ 
		it[k]=a[l];
		trace[l]=k;
		return ;
		}
	int mid = (l+r)/2;
	
	create_tree(k*2,l,mid);// tao cay trai 
	create_tree(k*2+1,mid+1,r);//tao cay phai 
    it[k]=max(it[k*2],it[k*2+1]);
    ///           1 3  4  6 6 9 3 10  <root =1>       CSroot = 1 -> CSleft =1*2 ; CSright = 1*2+1         
          //   1 3 4 6 <left = 2>            6 9 3 10 <right =3>
          //1 3 <it[4]=3>  							 4 6 <r =5>    it[cha] =10  6  9 <l=6>      3 10 <r=7>
          // 1  <it[8]=1>  3<it[9]=3>							  10   9
    return;
}
int find(int k,int l,int r,int u,int v)
{	
   if (l>v || r<u) return -1e9;     // max{u->v }     l -> r  Giao l->r  -> u=1,v=3..
   int mid = (l+r)/2;
   if (l>=u && r<=v) return it[k]; 
   return max(find(k*2,l,mid,u,v),find(k*2+1,mid+1,r,u,v));
}
void update(int index,int value)
{ 	int k=trace[index];
	it[k] = value;
	while  (k>0)
    {  
       it[k/2] = max(it[k],it[k+1]) ;
       k/=2;
	}
	return;
}
int main()
{   
	scanf("%d %d ",&n,&q);
	int i;
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    create_tree(1,1,n);
    for (i=1;i<=q;i++)
    { scanf("%d",&x);
      scanf("%d",&l);
      scanf("%d",&r);
    if (x == 1) 
    printf("Max in range (%d,%d):%d\n",l,r,find(1,1,n,l,r));
    else { a[l]=r;update(l,r);}
    }
	return 0;
}
