void qsort(int array[], int left, int right){
	if(left >= right)
		return;
	int i, j, tmp;
	tmp = array[left];
	array[left] = array[(left+right)/2];
	array[(left+right)/2] = tmp;
	for(i = left+1, j = left; i <= right; i++)
		if(array[i] < array[left]){
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	tmp = array[left];
	array[left] = array[j];
	array[j] = tmp;
	qsort(array, left, j-1);
	qsort(array, j+1, right);
}