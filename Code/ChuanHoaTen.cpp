#include<stdio.h>
#include<string.h>


int main(){
	int so;
	scanf("%d", &so);
	char zz[2];
	gets(zz);
	while(so--){
		int dd=0;
		char s1[1000],s[1000][1000];
		gets(s1);
		strlwr(s1);
		char *p=strtok(s1," ");
		while(p!=NULL)
		{
			strcpy(s[dd],p);
			dd++;
			p=strtok(NULL," ");
		}	
		for(int i = 0 ; i < dd-1; i++){
			if(s[i][0] >= 'a' && s[i][0] <= 'z'){
				s[i][0]-=32;
			}
			printf("%s ", s[i]);
		}
		if(s[dd-1][0] >= 'a' && s[dd-1][0] <= 'z'){
			s[dd-1][0]-=32;
		}
		printf("%s\n", s[dd-1]);
	}
	return 0;
}

