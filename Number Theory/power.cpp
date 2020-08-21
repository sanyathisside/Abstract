// Recursive: Time: O(n)

int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 




// Recursive: Time: O(log n)

int power(int x, unsigned int y) 
{ 
    int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 




// Iterative: Time: O(log n)

int power(int x, unsigned int y) 
{ 
    int res = 1; // Initialize result 
  
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res * x; 
  
        // n must be even now 
        y = y >> 1; // y = y/2 
        x = x * x; // Change x to x^2 
    } 
    return res; 
} 
