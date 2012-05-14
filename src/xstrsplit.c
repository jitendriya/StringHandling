xstrsplit(char *string1)
{
	char string2[20];
	int index1,index2 = 0;

	int length;
	length = strlen(string1);
	for(index1 = 0 ; index1 <= strlen(string1)-1 ;index1++)
	{
					
		if(string1[index1] == ' ' )
		{
		string2[index2] = '\0';
		printf("\n%s",string2);
		index2 = 0;		
		}	

		else
		{
		string2[index2] = string1[index1];
		if(string1[index1 +1] == '\0')
			{
			 string2[index2 +1] = '\0';

			printf("\n%s",string2);
				
			}			
		else index2++;
		}
	}
	
	
}
