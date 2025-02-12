#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) 
{
	int i,j;
	char *p;
	for (i=0;i<10000;i++)
	{
		for(j=0;j<10;j++)
		{
			//	メモリを生成
			p = (char*)malloc(sizeof(char) * 10000);
			usleep(1000);

			//本来は次の確保前にfreeで解放する必要がある。
		}
	}
	return 0;
}
