/*
    This challenge didn't require a keygen or anything like that so 
    here is the flow of the code in C syntax to help you understand
    the disassembly.
*/

cwd = getcwd(cwd, 0x1000);
cwd_len = strlen(cwd);
i = 0;
while (i < cwd_len)
{
	if(cwd[i] == '/')
    	cwd[i] = '$';
    else
    {
    	if ((cwd[i] <= 0x60) || (cwd[i] > 0x7A))
        	if ((cwd[i] > 0x40) && (cwd[i] <= 0x5A))
            	cwd[i] += 0x1E;
        else
        	cwd[i] -= 0x1E;
    }
    i++;
}