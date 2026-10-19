#include<stdio.h>
int main()
{
    int amt,nh,nf,nt,nfv,ntw,no,total,notes;
    printf("Enter the amount:");

    scanf("%d",&amt);

    nh=amt/100;

    nf= (amt-nh*100)/50;

    nt= (amt-nh*100-nf*50)/10;

    nfv=(amt-nh*100-nf*50-nt*10)/5;

    ntw=(amt-nh*100-nf*50-nt*10-nfv*5)/2;

    no= (amt-nh*100-nf*50-nt*10-nfv*5-ntw*2)/1;

    printf("The amount of notes of:\n 100: %d\n50: %d\n10: %d\n5: %d\n2: %d\n1: %d\n",nh,nf,nt,nfv,ntw,no);

    total=100*nh+50*nf+10*nt+5*nfv+2*ntw+1*no;

    printf("The total amount said was=%d\n",total);

    notes=nh+nf+nt+nfv+ntw+no;

    printf("The total number of notes are: %d\n",notes);

    return 0;
}