//toggle bits in a range
#include"header.h"
int main()
{
	int num = 253;
	int pos1 = 1;
	int pos2 = 4;
	int res = 0;
	while(pos1!=(pos2+1))
	{
		num = num^(1<<pos1);
		pos1++;
	}
	printf("%d",num);
}
