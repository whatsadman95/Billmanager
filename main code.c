                                    /*HI IM BILL MANAGER*/

#include<stdio.h>
#include<string.h>
struct data
{   int year, bill_no,unit;
    char month[20],bill_typ[50] ;
    float amount,sub_total;
}d;
float counter(int unit)
{
    if(unit<=50) return .50*unit;
     else if(unit<=150) return .75*unit;
      else if(unit<=250) return 1.20*unit;
       else if(unit>=300) return 1.50*unit;
}


main()
{
    float sbt,total;
    int t,i=0,n;
    FILE *fp;
    fp=fopen("file.txt","w");

    printf("                                       ========THE BILL MANAGER========                                        \n\n\n\n");
    printf("ENTER HOW MUCH BILLS DO U HAVE?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter Your Bill Data:::::::::::::");
        printf("\n\nYEAR::");
        scanf("%d",&d.year);
        printf("\n\nMONTH::");
        scanf("%s",d.month);
        printf("\tBILL NO(6 DIGITS)::");
        scanf("%d",&d.bill_no);
        printf("\tBILL TYPE::");
        scanf("%s",d.bill_typ);
        printf("\tENTER UNIT::");
        scanf("%d",&d.unit);
        sbt=counter(d.unit);
        total=sbt*.25;
        fprintf(fp,"\nYEAR::%d\n\nMONTH::%s\n\tBILL TYPE::%s\n\tBILL NUMBER::%d\n\tTOTAL::%.2lf\n\n\t\n\n\t",d.year,d.month,d.bill_typ,d.bill_no,total);printf("\nYEAR::%d\n\nMONTH::%s\n\tBILL TYPE::%s\n\tBILL NUMBER::%d\n\tTOTAL::%.2lf\n\n\t\n\n\t",d.year,d.month,d.bill_typ,d.bill_no,total);


        }
     fclose(fp);
     printf("N.B= A FILE HAS BEEN CREATED FOR YOU!!");
     printf("                                       ========THANK YOU!!!!!!!!========                                        \n\n\n\n");

    return 0;


    }







