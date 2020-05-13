#include<stdio.h>
int main()
{
    int i=0;
    char a[100];
     int count[26]={0};
    printf("Enter the input string\n");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        count[a[i]-'a']++;
        i++;
    }
    printf("The letter frequency is \n");
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        printf(" %c %d \n",'a'+i,count[i]);
    }
	
	
	
	return 0;
}
