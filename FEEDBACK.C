#include<stdio.h>
int main()
{
   char ch;
   FILE*fp;

   fp=fopen("feedback.txt","w");
   if(fp==NULL)
   {
   printf("file opening failed\n");
   return 0;
   }
   fprintf(fp,"feedback about the c programming");
   fprintf(fp,"1.little difficult to understand\n");
   fprintf(fp,"2.It is basic to all other languages\n");
   fprintf(fp,"3.It is useful\n");
   fprintf(fp,"4.It takes more time to understand\n");
   fprintf(fp,"5.It is quite difficult compared to C++ and python\n");
   fclose(fp);
   fp=fopen("feedback.txt","a");
   if(fp==NULL)
   {
   printf("file opening failed\n");
   return 0;
   }
   fprintf(fp,"feedback about the c-sir");
   fprintf(fp,"1.He teaches well and good\n");
   fprintf(fp,"2.His explanation was clear\n");
   fprintf(fp,"3.The practical part is quite difficult to understand\n");
   fprintf(fp,"4.He is very patient and supportive\n");
   fprintf(fp,"5.He is punctual and dedicated\n");
   fclose(fp);
   fp=fopen("feedback.txt","r");
   if(fp==NULL)
   {
   printf("file opening failed\n");
   return 0;
   }
   while((ch=fgetc(fp))!=EOF)
   {
   printf("%c",ch);
   }
   fclose(fp);
   return 0;
   }