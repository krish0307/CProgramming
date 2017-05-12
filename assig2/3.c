#include <stdio.h>
#include <stdlib.h>
void fun(int n)
{
    if(n==0)
        return;
    else if(n>0){
            int a=1+rand()%10;
        if(a<3){
		printf("a\n");
	}else if(a<6){
		printf("b\n");
	}else if(a<9){
		printf("c\n");
	}else{
		printf("d\n");
	}
	fun(--n);
    }
}
int main(){
	fun(10);
	return 0;
}
