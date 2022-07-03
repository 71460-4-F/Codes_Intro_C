#include <stdio.h>    // (By Tiago Arruda) 12/06/2016 Quixadá-CE
#include <stdlib.h>

int matriz[3][3];                    //    0 1 2
                                      // 0 2 4 6 
int main(){                           // 1 3 8 9
                                      // 2 1 0 5
    int li, co, result=0;

    for(li=0; li<3; li++){
        for(co=0; co<3; co++){
			scanf("%i", &matriz[li][co]);
		}
	}
	     if(((matriz[2][0] < matriz[1][0]) && ( matriz[2][0] < matriz[0][0])) ||
	     ((matriz[0][0] < matriz[1][0]) && ( matriz[0][0] < matriz[2][0]))) {
			   result = result + 1;
		  }
		  if(((matriz[2][1] < matriz[1][1]) && ( matriz[2][1] < matriz[0][1])) ||
		  ((matriz[0][1] < matriz[1][1]) && ( matriz[0][1] < matriz[2][1]))){
			   result = result + 1;
		  }
		  if(((matriz[2][2] < matriz[1][2]) && ( matriz[2][2] < matriz[0][2])) ||
		  ((matriz[0][2] < matriz[1][2]) && ( matriz[0][2] < matriz[2][2]))){
			   result = result + 1;
		  }
			   
			printf("%d\n", result);
			
    return 0;

}
