// using structure product data using gst bill
#include<stdio.h>
#include<string.h>
#define n 2
struct data
{
    int no;
    char name[10];
    int rate,qty,total,bill,dis,gst,net;
};
int amount(struct data a[])
{
    int i;
    printf("\nNo\tName\tRate\tQty\tAmt\tDis\tBill\tGst\tNetbill");
    for(i=0;i<n;i++)
    {
        a[i].total = a[i].rate * a[i].qty;
        a[i].dis = a[i].total*0.05;
        a[i].bill = a[i].total - a[i].dis;
        a[i].gst = a[i].bill*0.18;
        a[i].net = a[i].bill + a[i].gst;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d",a[i].no,a[i].name,a[i].rate,a[i].qty,a[i].total,a[i].dis,a[i].bill,a[i].gst,a[i].net);
    }

}
int data()
{
    int i;
    struct data a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter no: ");
        scanf("%d",&a[i].no);
        printf("Enter name: ");
        scanf("%s",&a[i].name);
        printf("Enter rate: ");
        scanf("%d",&a[i].rate);
        printf("Enter Qty: ");
        scanf("%d",&a[i].qty);
    }
    amount(a);

}

int main()
{
    data();
    return 0;
}