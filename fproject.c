#include <stdio.h>

void add(int r,int c,int a[100][100],int b[100][100]){
    int i,j,sum[100][100];
      // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n");
      }
    }
}
void sub(int r,int c,int a[100][100],int b[100][100]){
    int i,j,sum[100][100];
      // subtracting two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] -  b[i][j];
    }

  // printing the result
  printf("subtraction of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n");
      }
    }
}
void multi(int r,int c,int ro,int co,int a[100][100],int b[100][100]){
    int i,j,k,sum[r][co];
    //caluclating the multiplication of matrixs
    for(j=0;j<c;j++){
        for(i=0;i<r;i++){
            for(k=0;k<co;k++){
                sum[i][j]+=a[j][k]*b[k][i];
            }
        }
    }int temp=0;
    for(i=0;i<r;i++){
        for(j=0;j<co;j++){
            for(k=0;k<c;k++){
                temp=temp+a[i][k] * b[k][j];
            }
            sum[i][j]=temp;
            temp=0;
        }
    }

    //printing the array 
    printf("Multiplication of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n");
      }
    }

}
void div(int k,int r,int c,int a[100][100]){
    int i,j,sum[100][100];
// solving the divide
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]/k;
        }
    }
// printing the ans matrix
printf("division of matrices with %d: \n",k);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
void tra(int r,int c,int a[100][100]){
    int i,j,sum[100][100];
    //making the transpose
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[j][i]=a[i][j];
        }
    }
    //printing the matrix;
    printf("Transpose of matrices: \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("Welcome to the MATRIX CALCULATOR\n");
    int n, r, c, a[100][100], b[100][100], i, j;
    printf("select the operation\n1\tAddition\n2\tSubtract\n3\tMultiplication\n4\tDivision\n5\tTranspose\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(n==1 || n==2){
        printf("Enter the number of rows (between 1 and 100): ");
        scanf("%d", &r);
        printf("Enter the number of columns (between 1 and 100): ");
        scanf("%d", &c);
        if(n==1)
        printf("\nEnter elements of 1st matrix:\n");
        for (i = 0; i < r; ++i){
            for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of 2nd matrix:\n");
        for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
            }
        if(n==1){
            add(r,c,a,b);
        }else if(n==2){
            sub(r,c,a,b);
        }
    }
    if(n==3){
        int ro,co;
        printf("Enter the number of rows in matrix1 (between 1 and 100): ");
        scanf("%d",&r);
        printf("Enter the number of columns in matrix1 (between 1 and 100): ");
        scanf("%d",&c);
        printf("Enter the number of rows in matrix2 (between 1 and 100): ");
        scanf("%d",&ro);
        printf("Enter the number of columns in matrix2 (between 1 and 100): ");
        scanf("%d",&co);
        // input for matrix 1
        if(c==ro){
            printf("Enter the element of 1st matrix:\n");
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                    printf("Enter element a%d%d: ",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the element of 2nd matrix:\n");
            for(i=0;i<ro;i++){
                for(j=0;j<co;j++){
                    printf("Enter element a%d%d: ",i+1,j+1);
                    scanf("%d",&b[i][j]);
                }
            }
            multi(r,c,ro,co,a,b);
        }else{
            printf("Error!! please check the inputs ");
        }
    }
    if(n==4){
        int s;
        printf("Enter the number with which the matrix should be divided: ");
        scanf("%d", &s);
        printf("Enter the number of rows for matrix (between 1 and 100): ");
        scanf("%d", &r);
        printf("Enter the number of columns for matrix (between 1 and 100): ");
        scanf("%d", &c);
        printf("Enter element of the matrix:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("Enter element a%d%d: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        div(s,r,c,a);
    }
    if(n==5){
        printf("Enter the number of rows for matrix (between 1 and 100): ");
        scanf("%d", &r);
        printf("Enter the number of columns for matrix (between 1 and 100): ");
        scanf("%d", &c);
        printf("Enter element of the matrix:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("Enter element a%d%d: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        tra(r,c,a);
    }

    return 0;
}