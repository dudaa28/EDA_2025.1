int ChecaParenteses(char *expr, int count) {
    if (count < 0)  
        return 1;
    
    if (*expr == '\0') {
        if (count == 0)
            return 0;  
        else
            return -1; 
    }

    if (*expr == '(')
        return ChecaParenteses(expr + 1, count + 1);
    else if (*expr == ')')
        return ChecaParenteses(expr + 1, count - 1);
    else
        return ChecaParenteses(expr + 1, count);
}
