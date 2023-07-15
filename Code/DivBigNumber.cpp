#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 90000
void test(int a[], int max)
{
    printf("\n");
    for ( int i = 0 ; i <= max ; i ++)
        printf("%d ",a[i]);
}


void xoa0(int a[], int &m , int max)
{    
    m = max;
    while(a[0] == 0)
        {
            for (int j = 0 ; j < m ; j ++)
                a[j]=a[j+1];
            m--;
        }
}
int sosanh ( int a[], int b[] , int m)
{
    int dem=0;
    for (int i = 0 ; i <= m ; i++)
    {
        if(a[i]>b[i])
            return 0;
        if(a[i]<b[i])
            return -1;
        if(a[i]==b[i])
            dem++;
    }
    if (dem == m+1)
        return 1;
}
void tinhtoantru(int a[], int n, int b[], int m, int max1, int c[])
{
    int c2[MAX];
    for( int i = max1 ; i >= 1 ; i --)
        c2[i]=b[i];
    for( int i = max1 ; i >= 1 ; i --)
        {
            if (a[i] < b[i])
                {
                    a[i] = a[i]+10;
                    c2[i-1]=c2[i-1]+1;
                }
            c[i]= a[i]-c2[i];
        }
}
void chia1(int a[], int n, int b[], int m , int max1)
{
    int dem=0;
    int c1[MAX];
    while (sosanh(a,b,max1) != -1)
    {
        tinhtoantru(a,n,b,m,max1,c1);
        for ( int i = 0 ; i <= max1  ; i ++)
            a[i] = c1[i];
        dem++;
    }
    
    printf("kq phep chia la %d",dem);
    printf("\n");
    printf("du la: ");
    for ( int i = 0 ; i <= max1 ; i ++)
        printf("%d ",a[i]);
    
}
int main()
{
    int m,n,max1;
    int a[MAX],b[MAX],c[MAX];
    scanf("%d %d",&n,&m);
    if( m > n)
        max1 = m;
    else max1 = n;
//    srand((int)time(NULL));
    for ( int i = max1-n+1 ; i <= max1 ; i ++)
        a[i] = rand()%9+1;
    for ( int i = max1-m+1 ; i <= max1 ; i ++)
        b[i] = rand()%9+1;
    test(a,max1);
    test(b,max1);
//    xoa0(a,n,max1);
//    xoa0(b,m,max1);
    printf("\n\n");
    chia1(a,n,b,m,max1);


//    char *_="%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c";
//    int __=3**_+5;
//    printf("\n\n\t\t\t\t");
//    printf(_,__+59,__-32,__-19,__-4,__-21,__-40,__+17,__-7,__-21,__-44,__-19,__-17,__-9,__-15,__-2,__+58);
//    getch();
}
