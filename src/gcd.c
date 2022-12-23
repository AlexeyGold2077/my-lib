int my_gcd(int x, int y){
    for(int iter = (x > y) ? x : y; iter > 0; iter--)
        if(x % iter == 0 && y % iter == 0)
            return iter;
}
