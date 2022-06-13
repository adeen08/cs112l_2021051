#include<iostream>
using namespace std;
#define size 500

char* Mystrcpy(char* s1, const char* s2) {
   
    int i;
    for (i = 0; s2[i] != '\0'; i++) {
        *s1 = *s2;

        s1++;
        s2++;
    }
    *s1 = '\0';
    return s1;
}

char* Mystrncpy(char* s1, const char* s2, size_t n) {
    for (int i = 0; i < n; i++) {

        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';

    return s1;

}

 
char* Mystrcat(char* s1, const char* s2) {
    while (*s1 != '\0') {
        s1++;
    }

    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return s1;
}

char* Mystrncat(char* s1, const char* s2, size_t n) {
    while (*s1 != '\0') {
        s1++;
    }
    for (int j = 0; j < n; j++) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return s1;
}

int Mystrcmp(const char* s1, const char* s2) {
    
    while (*s1) {
        if (*s1 == *s2) {
            s1++;
            s2++;
        }
        else if (*s1 > *s2) {
            return 1;
        }
        else if (*s1 < *s2) {
            return -1;
        }
    }
    return 0;
}

int Mystrncmp(const char* s1, const char* s2, size_t n) {
    
    for (int i = 0; i < n; i++) {

          if (*s1 == *s2) {
              s1++;
              s2++;
          }
          else if (*s1 > *s2) {
              
              return 1;
          }
          else if (*s1 < *s2) {
              return -1;
          }
            
    }
    return 0;

}

char* Mystrtok(char* s1, const char* s2) {
    static  char* temp=s1;
    char token[size];
    static int i = 0;
    int j = 0;
    while (temp[i]!='\0') {
        token[j] = temp[i];
        
        if (temp[i] == *s2) {
            i++;
            break;
        }
        i++;
        j++;
               
    }
    for (int x = 0; x < j; x++) {
        cout << token[x];
    }
    cout << endl;
    return &temp[0];
}

size_t Mystrlen(const char* s) {
    size_t length = 0;
    while (*s != '\0') {
        s++;
        length++;
    }
    return length;
}

int main() {
    
}


