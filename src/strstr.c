char my_strstr(char* a, char* b){
	char* back = b;
	while(*a){
		while(*a == *b && *a && *b)
			a++, b++;
		if(!*b)
			return 1;
		b = back;
		if(*a == *b)
			a--;
		a++;
	}
	return 0;
}
