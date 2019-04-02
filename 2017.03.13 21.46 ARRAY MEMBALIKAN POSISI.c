/*
nama    : M Fadli Zein
Nobp    : 1601081035
Kelas   : TK1B
Np      : C(A+B)
*/

#include"stdio.h"
void main()
{
    int A[100],B[100];
    int i,n,j;
    printf("Masukan Ukuran : "); scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Masukan Nilai A ke-%d : ",i+1); scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        B[i]=A[(n-1)-i];
    }
    for(i=0; i<n; i++)
    {
        printf("Nilai B Ke-%d : %d\n",i+1,B[i]);
    }
}
