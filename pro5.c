#include <stdio.h>

int main() {
    int choice = 0;
    printf("1. Negative elements in 1D array\n");
    printf("2. Largest elements in 2D array\n");
    printf("3. Transpose of 2D array\n");
    printf("4. Sum of elements in row and column of 2D array\n");
    printf("5. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
    
while (choice != 5){
    switch (choice) {
        
        case 1:
            int a[10],i,k;
    
            printf("Enter the size of array :- ");
            scanf("%d",&i);
            
            for(int j = 0 ; j < i ; j++){
                printf("Enter the element at a[%d] :- ",j);
                scanf("%d",&k);
                a[j] = k;
            }
            
            printf("Negative numbers are :- ");
            
            for(int j = 0 ; j < i ; j++){
                if(a[j] < 0){
                    printf("%d\t",a[j]);
                }
            }
            
            printf("\n\n");
            
            break;
            
        case 2:
            int arr[10][10],x,row,col,max = 0;
    
            printf("Enter the size of array (row column) :- ");
            scanf("%d %d",&row,&col);
            
            for(int i = 0 ; i < row ; i++){
                for(int j = 0 ; j < col ; j++){
                    
                    printf("Enter the element at arr[%d][%d] :- ",i,j);
                    scanf("%d",&x);
                    arr[i][j] = x;
                
                }
            }
            
            for(int i = 0 ; i < row ; i++){
                for(int j = 0 ; j < col ; j++){
                    
                    if(arr[i][j] > max){
                        max = arr[i][j];
                    }
                
                }
            }
            
            printf("Max number is :- %d",max);
            
            printf("\n\n");
            
            break;
            
        case 3:
            
            int a1[10][10],a2[10][10],z,rows,cols;
    
            printf("Enter the size of array (row column) :- ");
            scanf("%d %d",&rows,&cols);
            
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    
                    printf("Enter the element at a1[%d][%d] :- ",i,j);
                    scanf("%d",&z);
                    a1[i][j] = z;
                
                }
            }
            
            for(int i = 0 ; i < cols ; i++){
                for(int j = 0 ; j < rows ; j++){
                    
                    a2[i][j] = a1[j][i];
                
                }
            }
            
            printf("Transposed Array :- \n");
            
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    
                    printf("%d\t",a2[i][j]);
                
                }
                printf("\n");
            }

            printf("\n\n");
            
            break;
            
            
        case 4:
        
            int array[10][10],l,r,c,sum=0;
    
            printf("Enter the size of array (row column) :- ");
            scanf("%d %d",&r,&c);
            
            for(int i = 0 ; i < r ; i++){
                for(int j = 0 ; j < c ; j++){
                    
                    printf("Enter the element at array[%d][%d] :- ",i,j);
                    scanf("%d",&l);
                    array[i][j] = l;
                
                }
            }
            
           printf("Enter the number of row :- ");
           scanf("%d",&l);
           printf("Elements at row %d :- ",l);
           
           for(int i = 0 ; i < c ; i++){
                    
                printf("%d\t",array[l-1][i]);
                sum += array[l-1][i];
                
            }
            printf("\nSum of elements :- %d",sum);
            
            printf("\n\n");
            
            sum = 0;
            
            printf("Enter the number of column :- ");
            scanf("%d",&l);
            printf("Elements at column %d :- ",l);
               
            for(int i = 0 ; i < r ; i++){
                        
                printf("%d\t",array[i][l-1]);
                sum += array[i][l-1];
            }
            printf("\nSum of elements :- %d",sum);
            
            printf("\n\n");
            
            break;
        
        default:
            printf("Invalid Choice !!! \n\n");
            break;
            
    }
    printf("1. Negative elements in 1D array\n");
    printf("2. Largest elements in 2D array\n");
    printf("3. Transpose of 2D array\n");
    printf("4. Sum of elements in row and column of 2D array\n");
    printf("5. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
}

    return 0;
}