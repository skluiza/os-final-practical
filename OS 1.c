 
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
   int ch1; 
  char msg[1000],ch; 
  char 
old_name[20],new_name[20],source_file[20],target_file[20]; 
   FILE *fptr,*source,*target; 
  printf("\n1. Create File and Write data\n2.Read the 
data\n3.Rename File\n4.Copy Data of File to another \n Enter 
The Choice:"); 
 scanf("%d",&ch1); 
 //do{ 
switch(ch1) 
         { 
         case 1: 
         fptr =fopen("program2.txt","w"); 
         if(fptr ==NULL) 
                { 
                  printf("Error!"); 
                  exit(1); 
                }//if close 
        printf("Enter message:"); 
        scanf("%s",msg); 
        fprintf(fptr,"%s",msg); 
        break; 
        
        case 2: 
        if((fptr = fopen("program2.txt","r")) == NULL) 
             { 
                printf("Error! opening file");  
                exit(1); 
             }//if close 
       fscanf(fptr,"%s",msg); 
       printf("Messege Is:=%s",msg); 
       break; 
 
       case 3: 
       printf("\n Enter old progam2.txt"); 
       scanf("%s",old_name); 
 
       printf("\n Enter new prog2.txt"); 
       scanf("%s",new_name); 
 
       if(rename(old_name,new_name) ==0) 
           { 
              printf("File renamed successfully.\n"); 
           }//if close 
     else 
          { 
             printf("unable to rename files.Please check files 
exist and you have permission to modify files.\n"); 
          } 
     break; 
    
     case 4: 
     printf("Enter name of file to copy\n"); 
     scanf("%s",source_file); 
 
     source = fopen(source_file,"r"); 
     if(source==NULL) 
         { 
            printf("Press any key to exit...\n"); 
            exit(EXIT_FAILURE); 
         }//if close 
 
   printf("Enter name of target file\n"); 
   scanf("%s",target_file); 
   
   target = fopen(target_file,"w"); 
 
   if(target == NULL) 
           { 
              printf("Press any key to exit...\n"); 
              exit(EXIT_FAILURE); 
          }//if close 
  while((ch=fgetc(source))!=EOF) 
     fputc(ch,target); 
 printf("File copied successfully.\n"); 
 break; 
}//switch close 
//}while(ch !=5);//do close 
//fclose(source); 
//fclose(target); 
//fclose(fptr); 
      return 0; 
}//main close 