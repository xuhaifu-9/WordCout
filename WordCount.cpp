#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	int num_word=0,num_letter=0,flag;
	if ((strcmp(argv[1], "-w") == 0 ))
    {

         FILE *fp;
         char ch;
         if((fp = fopen("m.txt","r")) == NULL)
		 {
          printf("文件打开失败[[[");
		 }
         ch = fgetc(fp);
         while(ch != EOF)
		 {
			if (ch==' '||ch==',')
			{
				flag=0;
				ch = fgetc(fp);  
			}
			else 
			{   
				if(flag==0)
				{
					num_word++;    
					flag=1;
				}
				ch = fgetc(fp);
			}
		 }
     printf("单词数为：%d个.\n",num_word);
     fclose(fp);
    }
    if ((strcmp(argv[1], "-c") == 0))
    {
       FILE *fp;
       char ch;
       if((fp = fopen("m.txt","r")) == NULL)
       {
           printf("文件打开失败.");
	   }
	   ch = fgetc(fp);
       while(ch != EOF)
	   {
               num_letter++;
               ch = fgetc(fp);
	   }
	   printf("字符数：%d\n",num_letter);
       fclose(fp);
    }
	return 0;
}
