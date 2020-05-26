#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp,*fp2;
	
	int i,pos;
	int ch;
    fp = fopen("mycap.txt","r");
   	fp2 =fopen("out.txt","w");
		
	while((ch=fgetc (fp))!=EOF)
{
	fputc(ch,fp2);

	} 	
	fseek(fp,0,SEEK_END);
	pos = ftell(fp);
	i=0;
	while(i<pos)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		printf("%c",fgetc(fp));
		
	}

}
