#include <iostream>

int main ()
{
    int ans;
    
    std::cout << " Scrivi un numero :";
    std::cin >> ans;

    while ( ans != 1 ){
        if ( ans % 2 == 1)
            ans = (3 * ans) + 1;
        else
            ans /= 2;
    
    std::cout << ans << " ";
    }
    
    return 0;
}
