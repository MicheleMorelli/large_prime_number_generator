#include <stdio.h>

#define LIM 4099999 // the upper limit
#define SIZE (((LIM)/2)-1) 
void main(){
    unsigned int nums[SIZE], n;
    //assign odd numbers to array
    for(unsigned int i = 0, n=3;n<LIM;n+=2,i++){nums[i] = n;} 

    for(unsigned int i=0, n = 0;i<SIZE;i++){
	if (nums[i]){ 
	    n = i+ nums[i]; 
	    while(n<SIZE){
		if(nums[n]){nums[n] = 0;}
		n+= nums[i];
	    }
	}
    }
    for (unsigned int i = 0; i<SIZE;i++){
            if (nums[i]) {
                    printf("%d\t",nums[i]);
            }
    }
}
