#include <stdio.h>
#include <stdlib.h>

int main(void){
	int mat[6][3];
	int maior = 0, menor = 0;
	int i = 0, j = 0;
	int lin_p = 0, col_p = 0, lin_g = 0, col_g = 0;
	                                         // 3 4 5
	for(i = 0; i < 6; i ++){                //  6 7 8
		for(j = 0; j < 3; j ++){           //   2 1 4
			scanf("%d", &mat[i][j]);
			menor += mat[i][j];           //    5 9 3
		}                                //     7 4 3
	}                                   //      2 8 6
	for(i = 0; i < 6; i++){
		for(j = 0; j < 3; j ++){
			if(mat[i][j] >= maior){
				maior = mat[i][j];
				lin_g = i;
				col_g = j;
			}
			if(mat[i][j] <= menor){
				menor = mat[i][j];
				lin_p = i;
				col_p = j;
			}
		}
	}
	printf("maior elemento da mat = %d, lin = %d, col = %d\n" ,maior, lin_g, col_g);
	printf("menor elemento da mat = %d, lin = %d, col = %d\n" ,menor, lin_p, col_p);
	return 0;
}
