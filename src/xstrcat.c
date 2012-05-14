xstrcat(char *string1,char *string2)
{
        int index1,index2;
        for( index1 = 0; index1< xstrlen(string1); index1++ );
        for( index2 = 0; index2 < xstrlen(string2); index2++)
		string1[index1 + index2] = string2[index2];
}

