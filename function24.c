// using functio bill payment with gst
#include<stdio.h>
#define n 3
void billing(int a[],int b[])
{
    int t[n],d[n],bill[n],gst[n],net[n];
    printf("\nRate\tQty\tAmount\tDiscount\tBill\tGst\tNetbill");
    for (int i = 0; i < n; i++)
    {
        t[i] = a[i] * b[i];
        d[i] = t[i]*0.05;
        bill[i] = t[i] - d[i];
        gst[i] = bill[i] * 0.18;
        net[i] = bill[i] + gst[i];
        printf("\n%d\t%d\t%d\t%d\t\t%d\t%d\t%d",a[i],b[i],t[i],d[i],bill[i],gst[i],net[i]);
    }
        
}

int amount()
{
    int i,a[n],b[n];
    for(i = 0; i<n;i++)
    {
        printf("Enter rate:");
        scanf("%d",&a[i]);
        printf("Enter Qty:");
        scanf("%d",&b[i]);
    }
    billing(a,b);
}

int main()
{
    amount();
    return 0;
}