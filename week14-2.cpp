//week14-2.cpp
//uva11063 b2-sequence part1:input, part2: output
#include <stdio.h>

int main()
{
	int a[100];
	int N, t=1;
	while( scanf("%d", &N) == 1){ //part1
		int bad = 0;
		for(int i=0; i<N; i++){ //part1: input
			scanf("%d", &a[i] ); //part1: input
			if(i>0) if( a[i-1] >= a[i] ) bad = 1;
		}
		int table[20002] = {};
		for(int i=0; i<N; i++){
			for(int j=i; j<N; j++){
				int now =a[i] + a[j];

				if(table[now]>0)bad = 1;
				table[now]++;
			}
		}

		//part 2: output
		if(bad==0)printf("Case #%d: It is a B2-Sequence.\n\n", t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", t);
		t++;
	}
}
