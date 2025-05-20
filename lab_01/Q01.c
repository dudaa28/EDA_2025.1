void IntercalaVetores(char *v1, char *v2, char *v3) {
    if (*v1 == 0 && *v2 == 0) {
        *v3 = 0;
        return;
    }

    if (*v1 != 0) {
        *v3 = *v1;
        IntercalaVetores(v2, v1 + 1, v3 + 1);
    } else {
        *v3 = *v2;
        IntercalaVetores(v2 + 1, v1, v3 + 1);
    }
}



 

