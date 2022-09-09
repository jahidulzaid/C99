char str[1000];
    int start = 0, end = 0;
    printf("Enter a string to reverse word by word: ");
    fgets(str, sizeof(str), stdin);
    while(str[end]){
        for (end = start;str[end]&&str[end]!=' '; end++);
        stringReverseWordByWord(str, start, end-1);
        start = end+1;
    }
        printf("%s ", str);
    return 0;