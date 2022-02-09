#include<stdio.h>
 
int fStrStr(char str, char* strSub)
{
    int i=0, j=0;
    int nTemp = i;
    int nStrLen = strlen(str);
    int nStrSubLen = strlen(strSub);
    for(i=0; i<nStrLen-nStrSubLen; i++)
    {
        nTemp = i;
        for(j=0; j<nStrSubLen; j++)
        {
             
            if(str[nTemp]==strSub[j])
            {
                if(j==nStrSubLen-1)
                    return 1;
                nTemp++;
            }
            else
                break;
        }
    }
    return 0;
}
 
 
int main()
{
    char str[] = "CSEStack";
    char strSub[] = "SES";
 
    if(fStrStr(str, strSub))
        printf("Sub-string found.");
    else
        printf("Sub-string not found.");
 
         
}