#include<stdio.h>
#include<stdlib.h>
int main(){
    float ***Grid_3D;
    int i,j,k;
    Grid_3D=(float**)malloc(16*sizeof(float*));
    for(i=0;i<16;i++){
        Grid_3D[i]=(float*)malloc(16*sizeof(float));
        for(j=0;j<16;j++){
            Grid_3D[i][j]=(float*)malloc(8*sizeof(float));
            for(k=0;k<8;k++){
                Grid_3D[i][j][k]=0.0;
            }
        }
    }
    int n;
    printf("Enter the number of slices");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=6;j<10;j++){
            for(k=6;k<10;k++){
                Grid_3D[i][j][k]=1.0;
            }
        }
    }
    for(i=0;i<8;i++){
        if(i!=4){
            for(j=7;j<9;j++){
                for(k=7;k<9;k++){
                    Grid_3D[i][j][k]=0.5;
                }
            }
        }
        else{
            for(j=7;j<8;j++){
                for(k=7;k<8;k++){
                    Grid_3D[i][j][k]=0.0;
                }
            }
        }
    }
    for(i=0;i<8;i++){
        for(j=0;j<16;j++){
            for(k=0;k<16;k++){
                printf("%lf\t", Grid_3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n\n");
    }
}