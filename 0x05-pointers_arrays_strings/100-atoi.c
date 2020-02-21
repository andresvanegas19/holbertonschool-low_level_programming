int StringToInt(const char *pszBuffer)
{
    int result=0; // variable to store the result
    int sign = 1; //Initialize sign as positive
    if(pszBuffer == NULL) //If pointer is null
        return 0;
    //If number is negative, then update sign
    if((*pszBuffer) == '-')
    {
        sign = -1;
        ++pszBuffer; //Increment the pointer
    }
    while( Is_NUMERIC_STRING(pszBuffer)) //check string validity
    {
        result = (result*10)+ (*pszBuffer-48);
        pszBuffer++; //Increment the pointer
    }
    return (sign * result);
}
