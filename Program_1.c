// Program to search an element in an 2D array using linear search
#include<stdio.h>

int main(){
    int item,i,j,rows,columns,count=0;

    printf("Enter the numbers of Rows and Columns : \n");
    scanf("%d %d",&rows,&columns);

    int arr[rows][columns];

    // take inputs into the array
    printf("Enter the elements: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    // take input for search element
    printf("Enter the element to be searched: ");
    scanf("%d",&item);

    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(item==arr[i][j]){
                printf("The position of '%d' is: (%d,%d)\n",item,i,j);
                count++;
            }               
        }
    }
    if(count==0){      //If count remains 0 it means the array doesn't had the element
        printf("Not Found!\n");
    }
    return 0;
}