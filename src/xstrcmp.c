xstrcmp(char *string1,char *string2)
{
	int index=0;
	while( string1[index] == string2[index] && string2[index] != '\0')
	index++;
	if(string1[index] == string2[index])
	return 0;
	else 
	return (string1[index] - string2[index]);
	
	}
