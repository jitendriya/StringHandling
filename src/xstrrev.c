xstrrev(char *string)
{
      int c, i, j;

      for (i = 0, j = xstrlen(string)-1; i < j; i++, j--) 
	{
         c = string[i];
         string[i] = string[j];
         string[j] = c;
      }
}

