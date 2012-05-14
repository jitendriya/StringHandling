xstrtrim(char *string)
{
	int i;
	int length;
	length = xstrlen(string);
	for(i = length-1; i >= 0 ;i--)
	   {
		if(string[i] == ' ')
		{			
			string[i] = '\0';
		}			
		else
			return;	
			
						
	}
	
}
