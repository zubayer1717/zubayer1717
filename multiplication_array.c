#include<stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k,sum=0;
    printf("Enter rows and coloms for first matrix : ");
    scanf("%d %d", &r1,&c1);


    printf("Enter rows and coloms for second matrix : ");
    scanf("%d %d", &r2,&c2);

    while(c1!=r2)
    {
        printf("Error !!");
        printf("\nPlease enter again.....");
        printf("\nEnter rows and coloms for first matrix : ");
        scanf("%d %d", &r1,&c1);


        printf("Enter rows and coloms for second matrix : ");
        scanf("%d %d", &r2,&c2);

    }
    printf("\nEnter elements for first matrix : \n");
    for(i=0; i<r1; i++){
        for(j=0;j<c1; j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    printf("\nEnter elements for second matrix : \n");
    for(i=0; i<r2; i++){
        for(j=0;j<c2; j++){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }

    }

    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            for(k=0; k<c1; k++){
             sum= sum + a[i][k] * b[k][j];

            }
            c[i][j] = sum;
            sum=0;
        }
    }
    printf("\nFirst Matrix : \n");
   for(i=0; i<r1; i++){

    for(j=0; j<c1; j++){
        printf("%d ",a[i][j]);

    }
    printf("\n");
   }

    printf("\nSecond Matrix : \n");
   for(i=0; i<r2; i++){
        printf("\t");
    for(j=0; j<c2; j++){
        printf("%d ",b[i][j]);

    }
    printf("\n");
   }

    printf("\nResult Matrix : \n");
    for(i=0; i<r1; i++){
        printf("\t");
    for(j=0; j<c2; j++){
        printf("%d ",c[i][j]);

    }
    printf("\n");
   }

}
