#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
typedef struct userL {
    char uname[80];  
// user name
    char passwd[80]; 

// password
    int uid;

// user identification number
    int admin;
// 1 indicates administrator privileges
    struct userL *next;
} userL;
userL *users = NULL;
void insertUser(char *uname, char *passwd, int uid, int admin) { 
    userL *newUser;
    newUser = malloc(sizeof(userL));
// create space for new user
    strcpy(newUser->uname, uname); 
    strcpy(newUser->passwd, passwd); 
// copy values into user fields
    newUser->uid = uid; 
    newUser->admin = admin;
    newUser->next = users;
    users = newUser;
// insert at start of linked list 
    printf("Username: %s\n", users->uname);

    printf("Password: %s\n", users->passwd);

    printf("ID: %d\n", users->uid);

    printf("Admin ID: %d\n", users->admin);

}
void deleteUser(int uid) { 
    userL *cur = users; userL *prev = NULL;
// delete first user with given uid
    while (cur != NULL) {
    if (cur->uid == uid) { // found the user to delete
        if (prev == NULL) users = cur->next; 
        else prev->next = cur->next; free(cur);
    return; // done
}
prev = cur;
cur = cur->next;

    printf("Username: %s\n", users->uname);

    printf("Password: %s\n", users->passwd);

    printf("ID: %d\n", users->uid);

    printf("Admin ID: %d\n", users->admin);
} }
// otherwise, keep scanning through list
userL *findUser(int uid) { 
    userL *cur = users;
    while (cur != NULL) {
    if (cur->uid == uid) return cur; else cur = cur->next;
}
    return NULL; }
    int numUsers(void) { 
    userL *cur = users;
    int count = 0;
    while (cur != NULL) { count++;
    cur = cur->next;    
    }

    printf("Username: %s\n", users->uname);
    
    return count; }

int main(){


    insertUser("Harrydo", "210122005", 1,1);

    findUser(1);
}