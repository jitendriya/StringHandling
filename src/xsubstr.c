xsubstr(char *string1,int pos1,int pos2)
{
	char *string2;
	int temp ,index1;
	for(index1 = 0 ; pos1<= pos2; pos1++,index1++)
		string2[index1] = string1[pos1];
		string2[index1] ='\0';
		printf("\n substring is :%s \n" ,string2);
}
