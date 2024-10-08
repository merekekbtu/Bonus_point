#include <iostream>
#include <cctype>  

char ChangeCase(char c) {
    if (islower(c)) {
        return toupper(c);  
    } else if (isupper(c)) {
        return tolower(c);  
    }
    return c;  
}

int main() {
    char c;
    std::cin >> c;  
    
    std::cout << ChangeCase(c) << std::endl;  

    return 0;
}
