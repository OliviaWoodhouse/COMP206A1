#include <stdio.h>
#include <stdlib.h>

int  main(int argc,char *argv[]) {
	
	int daysize,firstday;
	
	daysize = atoi(argv[1]);
	firstday = atoi(argv[2]);

	if (daysize<2) {
	printf("Daysize must be 2 or greater!");
	exit(-1);
	} 
	if (firstday<1||firstday>7) {
	printf("Firstday must be 1-7!");
	exit(-1);
	}
	
	int leftoverDays = firstday;
	
	char sunday[7] = {'S','u','n','d','a','y','\0'};
	char monday[7] = {'M','o','n','d','a','y','\0'};
	char tuesday[8] = {'T','u','e','s','d','a','y','\0'};
	char wednesday[10] = {'W','e','d','n','e','s','d','a','y','\0'};
	char thursday[9] = {'T','h','u','r','s','d','a','y','\0'};
	char friday[7] = {'F','r','i','d','a','y','\0'};
	char saturday[9] = {'S','a','t','u','r','d','a','y','\0'};
	
	for (int i=1;i<=12;i++) {
	int linesize = ((daysize+3)*7+1);
	printf("|");
	for (int j=0;j<linesize-2;j++) {
	printf("-");
	}
	printf("|\n|");
	int monthWordLength;
	if (i==1) {
	monthWordLength = 7;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
	printf("January");
	}
	if (i==2) {
        monthWordLength = 7;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("Febuary");
        }
	if (i==3) {
        monthWordLength = 5;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("March");
        }
	if (i==4) {
        monthWordLength = 5;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("April");
        }
	if (i==5) {
        monthWordLength = 3;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("May");
        }
	if (i==6) {
        monthWordLength = 4;
        printf("June");
        }
	if (i==7) {
        monthWordLength = 4;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("July");
        }
	if (i==8) {
        monthWordLength = 6;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("August");
        }
	if (i==9) {
        monthWordLength = 9;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("September");
        }
	if (i==10) {
        monthWordLength = 7;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("October");
        }
	if (i==11) {
        monthWordLength = 8;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("November");
        }
	if (i==12) {
        monthWordLength = 8;
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
        printf(" ");
        }
        printf("December");
        }
	if ((linesize-2-monthWordLength)==(((linesize-2-monthWordLength)/2)*2)) {
	for (int j=0;j<((linesize-2-monthWordLength)/2);j++) {
	printf(" ");
	}
	}
	 else {
	for (int j=0;j<(((linesize-2-monthWordLength)/2)+1);j++) {
	printf(" ");
	}
	}
	printf("|\n|");
	for (int j=0;j<linesize-2;j++) {
	printf("-");
	}
	printf("|\n");
	int dayOfWeek = 1;

	while (dayOfWeek<=7) {
	if (dayOfWeek==1) {
	printf("| ");
	int indexOfWord = 0;
	while (sunday[indexOfWord]!='\0' && indexOfWord<daysize) {
	printf("%c",sunday[indexOfWord]);
	indexOfWord++;
	}
	for (int j=0;j<((daysize+1)-indexOfWord);j++) {
	printf(" ");
	}
	}
	if (dayOfWeek==2) {
        printf("| ");
        int indexOfWord = 0;
        while (monday[indexOfWord]!='\0' && indexOfWord<daysize) {
        printf("%c",monday[indexOfWord]);
        indexOfWord++;
        }
        for (int j=0;j<((daysize+1)-indexOfWord);j++) {
        printf(" ");
        }
        }
	if (dayOfWeek==3) {
        printf("| ");
        int indexOfWord = 0;
        while (tuesday[indexOfWord]!='\0' && indexOfWord<daysize) {
        printf("%c",tuesday[indexOfWord]);
        indexOfWord++;
        }
        for (int j=0;j<((daysize+1)-indexOfWord);j++) {
        printf(" ");
        }
        }
	if (dayOfWeek==4) {
        printf("| ");
        int indexOfWord = 0;
        while (wednesday[indexOfWord]!='\0' && indexOfWord<daysize) {
        printf("%c",wednesday[indexOfWord]);
        indexOfWord++;
        }
        for (int j=0;j<((daysize+1)-indexOfWord);j++) {
        printf(" ");
        }
        }
	if (dayOfWeek==5) {
        printf("| ");
        int indexOfWord = 0;
        while (thursday[indexOfWord]!='\0' && indexOfWord<daysize) {
        printf("%c",thursday[indexOfWord]);
        indexOfWord++;
        }
        for (int j=0;j<((daysize+1)-indexOfWord);j++) {
        printf(" ");
        }
        }
	if (dayOfWeek==6) {
        printf("| ");
        int indexOfWord = 0;
        while (friday[indexOfWord]!='\0' && indexOfWord<daysize) {
        printf("%c",friday[indexOfWord]);
        indexOfWord++;
        }
        for (int j=0;j<((daysize+1)-indexOfWord);j++) {
        printf(" ");
        }
        }
	if (dayOfWeek==7) {
        printf("| ");
        int indexOfWord = 0;
        while (saturday[indexOfWord]!='\0' && indexOfWord<daysize) {
        printf("%c",saturday[indexOfWord]);
        indexOfWord++;
        }
        for (int j=0;j<((daysize+1)-indexOfWord);j++) {
        printf(" ");
        }
        }
	dayOfWeek++;
	}
	printf("|\n|");
	for (int j=0;j<linesize-2;j++) {
        printf("-");
        }
	printf("|\n");
	for (int j=1;j<leftoverDays;j++) {
	printf("|");
	for (int k=0;k<daysize+2;k++) {
	printf(" ");
	}
	}
	int lineMarker = leftoverDays;
	int day = 1;
	while (day<=30) {
	printf("| %d",day);
	if (day<10) {
	for (int j=0;j<daysize;j++) {
	printf(" ");
	}
	}
	else {
	for (int j=0;j<daysize-1;j++) {
        printf(" ");
        }
	}
	if (lineMarker==7) {
	printf("|\n");
	lineMarker = 0;
	}
	day++;
	lineMarker++;
	}
	leftoverDays = lineMarker;
	while (lineMarker!=1) {
	printf("|");
	for (int j=0;j<daysize+2;j++) {
	printf(" ");
	}
	lineMarker++;
	if (lineMarker==8) {
	lineMarker = 1;
	}
	}
	printf("|\n");	
	}
	printf("|");
	int linesize = ((daysize+3)*7+1);
	for (int i=0;i<linesize-2;i++) {
	printf("-");
	}
	printf("|\n");
}

