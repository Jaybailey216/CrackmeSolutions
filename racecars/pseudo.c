/*
    No keygen for this challenge so here is my decompiled output!
*/

end = strlen(argv[0]) - 1;
start = end;
while(argv[0][start -1] != 0x2F)
{
	start--;
}
while(start < end)
{
	if(argv[0][start] != argv[0][end])
    {
    	printf("Gimme what I want!");
        exit(1);
    }
    start++;
    end--;
}
printf("That's exactly what I wanted!");