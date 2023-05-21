#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main(){
	
	// 6.b
	bool pathway[8] = {1, 0, 1};

	for (int i = 0; i < NUM_PATHWAYS; i++){
		if (pathway[i]){
			printf("pathway[%d] is open \n", i);
		}else{
			printf("pathway[%d] is close \n", i);
		}
	}


}
