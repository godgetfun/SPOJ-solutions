#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    string a[3];

    while (!cin.eof()) {
        getline(cin, a[0]);
        if (!cin) break;
        getline(cin, a[1]);
        getline(cin, a[2]);

        for ( int i = 0; i < (a[0].size() / 3); i++ )
        {

            if(a[0][1+i*3]==' ') 
            {
                if(a[1][1+i*3]=='_') 
                {
                    printf("4");
                } 
                else 
                {
                    printf("1");
                }
            } 
            else 
            {
                if(a[1][0+i*3]=='|') 
                {
                    if(a[1][1+i*3]=='_') 
                    {
                        if(a[1][2+i*3]=='|') 
                        {
                            if(a[2][0+i*3]=='|') 
                            {
                                printf("8");
                            } 
                            else 
                            {
                                printf("9");
                            }
                        } 
                        else 
                        {
                            if(a[2][0+i*3]=='|') 
                            {
                                printf("6");
                            } 
                            else 
                            { 
                                printf("5");
                            }
                        }
                    }                    
                    else 
                    { 
                        printf("0");
                    }
                } 
                else 
                {
                    if(a[1][1+i*3]=='_') 
                    { 
                        if(a[2][0+i*3]=='|') 
                        {
                            printf("2");
                        } else 
                        { 
                            printf("3");
                        }
                    } 
                    else 
                    { 
                        printf("7");
                    }
                }
            }

        }

        printf("\n");
}

    return 0;
}

