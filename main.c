#include <stdio.h>

int code(void);
int decode(void);

int code (void) {
	char str[51], str2[101];
	int i=0, j=0;
	gets(str);
	for (; str[i]; i=i+1, j=j+2) {
		if (str[i]==32) {
            str2[j]=51;
			str2[j+1]=50;
	    } else {
			str2[j]=(str[i]/10)+48;
			str2[j+1]=(str[i]%10)+48;
	    }
    }	
    str2[j]='\0';
	puts(str2);
	return 0;
}

int decode (void) {	
	char str[101], str2[51];
	int i, j;
    gets(str);
	for (i=0, j=0; str[j]; i++, j++) {
		if (str[j]==3) {
			str2[i]=32;
			j++;
		} else {
            str2[i]=(str[j]-48)*10;
            j++;
            str2[i]+=str[j]-48;
		}
	}
	str2[i]='\0';
	puts(str2);
	return 0;
}

int main(void)
{
	int choice;
	printf("Enter 1 to encode or 2 to decode, followed by a sequence of characters: \n\n");
	scanf("%d\n", &choice);
	if (choice ==1) {
		printf("\nASCII encoded:\n");
		code();
	}
	if (choice ==2) {
		printf("\nASCII decoded:\n");
		decode();
	}
	printf("\nPress ENTER key to Quit\n");  
	getchar(); 
	return 0;
}