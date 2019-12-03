#define MAX_NAME 		30

struct keytab{
	int num; //몇번 나오냐
	char name[MAX_NAME]; 
};

struct keytab keywrds[13]={
	{0,"int"},
	{0,"float"},
	{0,"return"},
	{0,"if"},
	{0,"for"},
	{0,"while"},
	{0,"goto"},
	{0,"switch"},
	{0,"case"},
	{0,"void"},
	{0,"default"},
	{0,"char"},
	{0,"do"},
};

void copy_word(char *word){
	int i;
	//각 keyword 별로 
	for(i=0;i<13;i++)
	{
		//if word랑 i번째 keyword랑 같으면
		if(strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0)
			keywrds[i].num++; 
				//nums++; 	
	}
	
}

void print_word()
{
	int i;
	for(i=0;i<13;i++)
	{
		printf("%s : %i\n",keywrds[i].name,keywrds[i].num);
	 } 
	//i번째 키워드에 대해서
		//printf(키워드 이름 : 빈도수) 
}
