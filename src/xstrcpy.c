 xstrcpy(char *target,char *source)
 {
        while(*source != '\0')
        {
        	*target = *source;
        	source++;
        	target++;
        }

        *target = '\0';

}

