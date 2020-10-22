#include <stdio.h>
#include <stlib.h>

int main(int argc, char *argv[])
{
	float a,b;
	char *textFile;
	
	a = atoi(argv[2]);
	b = atoi(argv[3]);
	textFile = argv[1];
	
	if (a==null || b==null) 
	{
	printf("Error: bad float\n");
	exit(-1);
	}
	
	FILE *file = fopen(textFile,"r+");
	
	if (file==null)
	{
	printf("Error: bad file\n");
	exit(-1);
	}
	
	char line_buffer[1000]
	
	while(fgets(line_buffer,1000,file)) {
	
	char* line_ptr = line_buffer;
	int curr_word = 1;
	char* replacedWord;
	
	while(*line_ptr&&*line_ptr!='\n') {
	while(*line_ptr!='#'&&*line_ptr&&*line_ptr!='\n') {
	line_ptr++;
	}
	
	if(*line_ptr=='#'){
	*line_ptr = (".6f",a);
	line_ptr = line_ptr +3;
	curr_word++;
	line_ptr++;
	}
	
	if(*line_ptr=='#'){
        *line_ptr = (".6f",6);
        line_ptr = line_ptr +3;
        curr_word++;
        line_ptr++;
        }
	
	if(*line_ptr=='\n') {
	*line_ptr = '\0';
	}
	}
	}
}
